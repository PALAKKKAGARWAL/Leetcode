class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int n=s.length();
        int maxii=0;
        for(char c : s){
            if (c=='('){
                count++;
                maxii=max(maxii,count);
            }else if(c==')' ){
                count--;
            }
            }
        
        return maxii;
    }
    
};