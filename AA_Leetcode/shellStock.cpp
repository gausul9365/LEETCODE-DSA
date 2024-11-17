#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
       int n = prices.size();
        int min = prices[0];
        int max =0;
        for(int i=1; i<n; i++){
            if(prices[i]< min){
              
                min = prices[i];
            }
            
            else{
                int profit = prices[i] - min;
                if(profit > max){
                    max = profit;

                }
            }
            
      
        }
        return max;
    }
};