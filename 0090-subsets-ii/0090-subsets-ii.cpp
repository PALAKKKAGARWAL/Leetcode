class Solution {
public:

    void findsubsets(int ind,vector<int>& arr,vector<int>& curr, vector<vector<int>>& ans){
        int n= arr.size();
        if(ind==n){
            ans.push_back(curr);
            return;
        }

        curr.push_back(arr[ind]);
        findsubsets(ind+1,arr,curr,ans);
        curr.pop_back();
        while(ind+1<n && arr[ind+1]==arr[ind]){
            ind++;
        }
        findsubsets(ind+1,arr,curr,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(),nums.end());
        findsubsets(0, nums, curr, ans);

        return ans;
    }
};