class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx=0,j=0;
        for(int i=0;i<n;i++){
           if(nums[i]==0){
            k--;
           }
           while(k<0){
            if(nums[j]==0){
                k++;
            }
            j++;
           }
           maxx=max(maxx,i-j+1);
        }
        return maxx;
    }
};