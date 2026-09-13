class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteriods) {
        stack<int> st;
        int n= asteriods.size();
        for(int i=n-1;i>=0;i--){
           int x=  asteriods[i];
        while(!st.empty() && st.top()<0 && x>0){
            if(x>-st.top()){
                st.pop();
            }else if(-st.top()==x){
                st.pop();
                x=0;
            }else{
                x=0;
            }
        }
        if(x!=0){
            st.push(x);
        }
        
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
    }
};