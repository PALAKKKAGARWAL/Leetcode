class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //kadane's Algorithm
        int maxx=nums[0];
        int minn=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
           int x=nums[i];
           int newmax=max({x,x*maxx,x*minn});
           int newmin=min({x,x*maxx,x*minn});

           maxx=newmax;
           minn=newmin;
           ans=max(ans,maxx);
        }
        return ans;
    }
};