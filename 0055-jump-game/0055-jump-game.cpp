class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxind=0;
        for(int i=0;i<nums.size();i++){
              int reach=nums[i]+i;
              if(i>maxind){
                return false;
              }
              maxind=max(maxind,reach);
              
        }
        return true;
    }
};