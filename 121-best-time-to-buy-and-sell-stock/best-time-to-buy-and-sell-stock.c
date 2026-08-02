int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 0;i<pricesSize;i++){
        if(prices[i]<minPrice){
            minPrice = prices[i];// finding the minimum prices for buying the stocks
        }

        int profit = prices[i] - minPrice;// finding the profit which is higher

        if(profit>maxProfit){
            
            maxProfit = profit;// swap the highest profit which we gone a return
        }

    }
    return maxProfit;
}