package slidingwindow;
class MaxSum {
    public static int findMaxSumSubarray(int[] arr, int k) {
        int maxSum = 0, windowSum = 0;

        // Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        maxSum = windowSum;

        // Slide the window from start to end of the array
        for (int end = k; end < arr.length; end++) {
            windowSum += arr[end] - arr[end - k]; // Add next element and remove the first element of the previous window
            maxSum = Math.max(maxSum, windowSum); // Update maxSum if needed
        }

        return maxSum;
    }

    public static void main(String[] args) {
        int[] arr = {2, 1, 5, 1, 3, 2};
        int k = 3;
        int result = findMaxSumSubarray(arr, k);
        System.out.println("Maximum sum of a subarray of size " + k + " is: " + result); // Output: 9
    }
}