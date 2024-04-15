class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int profit=0;
     int buy=prices[0];

     for(int i=1;i<prices.size();i++){
        int sell=prices[i];
        if(buy>sell){
            buy=sell;
        }
        else{
            profit+=sell-buy;
            buy=sell;
        }
     } 
     return profit;  
    }
};