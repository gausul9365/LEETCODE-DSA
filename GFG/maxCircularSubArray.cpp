#include <iostream>
#include <algorithm> // for max()

using namespace std;

// Function to find the maximum subarray sum using Kadane's algorithm
int maxSubarray(int arr[], int n) {
    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxi = max(maxi, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

// Function to compute the maximum circular subarray sum
int circularSubarray(int arr[], int n) {
    // Step 1: Find the maximum subarray sum (non-circular case)
    int maxi = maxSubarray(arr, n);

    // Step 2: Calculate the total sum of the array
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    // Step 3: Invert the array elements to find the minimum subarray sum
    for (int i = 0; i < n; i++) {
        arr[i] = -arr[i];
    }

    // Minimum subarray sum is the negative of maximum subarray sum of the inverted array
    int minSubarray = maxSubarray(arr, n);

    // Restore the original array values
    for (int i = 0; i < n; i++) {
        arr[i] = -arr[i];
    }

    // Step 4: Compute the circular subarray sum
    int circular = total + minSubarray;

    // Step 5: Handle the edge case where all elements are negative
    if (circular == 0) {
        return maxi;
    }

    // Step 6: Return the maximum of the non-circular and circular sums
    return max(maxi, circular);
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = circularSubarray(arr, n);

    cout << "Maximum Circular Subarray Sum: " << result << endl;

    return 0;
}
