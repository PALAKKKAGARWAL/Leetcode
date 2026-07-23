class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
            }
        }
        int j=0;
        for(int i=0;i<nums.size();i+=2){
            nums[i]=arr1[j];
            nums[i+1]=arr2[j];
            j++;
        }
        return nums;
    }
};