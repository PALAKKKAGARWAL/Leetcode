class Solution {
public:
    void findcombo(int start,int k, int target, vector<int>& curr,vector<vector<int>>& ans){
        
        if(target==0){
            if(curr.size()==k){
            ans.push_back(curr);
            }
            return;
        }
        if(start>9){
            return;
        }
        if(curr.size()<=k){
        if(start<=target){
            curr.push_back(start);
            findcombo(start+1,k,target-start,curr,ans);
            curr.pop_back();
        }
        findcombo(start+1,k,target,curr,ans);
    }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        findcombo(1,k,n,curr,ans);
        return ans;
    }
};