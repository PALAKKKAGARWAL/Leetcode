class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice= prices[0];
        int maxx=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            maxx = max(maxx,prices[i]-minPrice);
        }
        
        return maxx;
    }
    
};