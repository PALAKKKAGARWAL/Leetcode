class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xorr=0;
        for(int i=0;i<n;i++){
            xorr=xorr^nums[i];
        }
        
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //       if(nums[j]==nums[i]){
        //         count++;
        //       }
        //     }
        //     if(count==1){
        //     return nums[i];
        // }
        // }
        
        return xorr;
    }
};