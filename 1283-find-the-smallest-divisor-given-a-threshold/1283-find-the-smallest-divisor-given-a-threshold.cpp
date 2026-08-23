class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int right= *max_element(nums.begin(),nums.end());
        while(left<=right){
            int mid=(left+right)/2;
            int cnt=0;
            for(int i=0;i<nums.size();i++){
                cnt+= ceil(nums[i]+mid-1)/mid;
            }
            
            if(cnt<=threshold){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};