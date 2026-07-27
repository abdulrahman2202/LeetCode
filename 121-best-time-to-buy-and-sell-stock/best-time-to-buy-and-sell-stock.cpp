class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 0;i<prices.size();i++){

            // checking the lowest buy price and saving in the minPrice Variable
            if(prices[i]<minPrice){
                minPrice = prices[i];
            }

            // finding the difference(profit) from Buy price and selling price
            int profit = prices[i] - minPrice;

            // if find greatest profit then change the maxProfit 
            if(profit > maxProfit){
                maxProfit = profit;
            }


        }
        return maxProfit;
        
    }
};