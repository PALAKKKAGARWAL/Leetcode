class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=1;
        while(i<n && j<n){
            if(nums[i]==nums[j]){
                i=i+2;
                j=j+2;
            }else{
                return nums[i];
            }

        }
        return nums[n-1];
    }
};