class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MIN;
      int buy=prices[0];
      int profit=0;
      for(int i=1;i<prices.size();i++){
        int sell = prices[i];
        profit = sell-buy;
        maxi=max(maxi, profit);
        if(profit<0){
            buy=prices[i];
        }
      } 
      return maxi<0? 0 : maxi; 
    }
};