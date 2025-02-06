int maxProfit(int* prices, int pricesSize) {
    if (pricesSize < 2) return 0; // No profit possible with less than 2 days
    
    int minPrice = prices[0]; // Minimum price to buy
    int maxProfit = 0; // Maximum profit initialized to 0
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // Update minimum price if a lower price is found
        } else {
            int profit = prices[i] - minPrice; // Calculate profit if sold at current price
            if (profit > maxProfit) {
                maxProfit = profit; // Update maximum profit if a better profit is found
            }
        }
    }
    
    return maxProfit;
}
