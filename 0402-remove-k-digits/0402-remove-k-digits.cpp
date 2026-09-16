class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char> st;
        
        int p=0;
        for(int i=0;i<n;i++){
            
            if(st.empty()){
                st.push(num[i]);
            }else{
                while(!st.empty() && st.top()>num[i] && p<k){
                st.pop();
                p++;
            }
            st.push(num[i]);
            }
        }
        while(p<k){
            st.pop();
            p++;
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<n && ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i);
        if(ans.empty()){
            return "0";
        }
        return ans;
    }
};