class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x = 0;
        for (int i = 0; i < prices.size(); i++){
            int buy = prices [i];
            for (int y = i + 1; y < prices.size(); y++){
                int sell = prices[y];
                x = max(x, sell - buy); 
            }
        }
        return x;
    }
};
