class Solution {
public:
    void findcombo(int ind,string digits,vector<string>& arr,string curr,vector<string>& ans){
        if(ind==digits.size()){
            ans.push_back(curr);
            return;
        }
        string letters = arr[digits[ind]-'0'];
        for(char ch : letters){
            curr.push_back(ch);
            findcombo(ind+1,digits,arr,curr,ans);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> arr={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        findcombo(0,digits,arr,"",ans);
        return ans;
    }
};