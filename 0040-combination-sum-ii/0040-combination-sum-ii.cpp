class Solution {
public:
    void findcombo(int ind,vector<int>& arr,int target,vector<int> curr, vector<vector<int>>& ans){
        int n = arr.size();
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(ind==n){
            return;
        }
        if(arr[ind]<=target){
            curr.push_back(arr[ind]);
            findcombo(ind+1,arr,target-arr[ind],curr,ans);
            curr.pop_back();
        }
        while(ind+1<n && arr[ind]==arr[ind+1]){
            ind++;
        }
        findcombo(ind+1,arr,target,curr,ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(),candidates.end());
        findcombo(0,candidates,target,curr,ans);
        return ans;
    }
};