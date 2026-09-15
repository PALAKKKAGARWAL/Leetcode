class Solution {
public:
    void findcombo(int ind, vector<int>& arr,int target,vector<int>& current,vector<vector<int>>& ans){
        int n = arr.size();
        if(target ==0){
            ans.push_back(current);
            return;
        }
        if(ind == n) {
            return;
        }
        if(arr[ind]<=target){
            current.push_back(arr[ind]);
            findcombo(ind,arr,target-arr[ind],current,ans);
            current.pop_back();
        }
        findcombo(ind+1,arr,target,current,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;
        findcombo(0,candidates,target,current,ans);
        return ans;
    }
};