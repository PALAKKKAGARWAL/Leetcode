class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return subarr(nums,k)-subarr(nums,k-1);
    }
    int subarr(vector<int>& nums, int k) {
        int l=0,r=0,count=0;
        int sub=0;
        while(r<nums.size()){
            if(nums[r]%2!=0){
                count++;
            }
            while(count>k){
                if(nums[l]%2!=0){
                    count--;
                }
                l++;
            }
            sub+=r-l+1;
            r++;
        }
        return sub;
    }
};