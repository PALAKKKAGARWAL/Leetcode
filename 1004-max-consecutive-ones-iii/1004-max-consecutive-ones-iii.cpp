class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx=0,l=0,r=0;
        int zeros = 0;
        while(r<n){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
            if(zeros<=k){
                maxx=max(maxx,r-l+1);
            }
            r++;
        }
        return maxx;
    }
};