class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left= *max_element(weights.begin(), weights.end());
        int right= accumulate(weights.begin(), weights.end(),0);
        while(left<=right){
            int mid=(left+right)/2;
            int cnt=0;
            int n=1;
            for(int i=0;i<weights.size();i++){
                
                if((cnt+weights[i])<=mid){
                    cnt+=weights[i];
                }else{
                    n++;
                    cnt=0;
                    cnt+=weights[i];
                }
            }
            if(n<=days){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};