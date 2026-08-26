class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        string temp = s+s;
        // string::npos means string not found
        if(temp.find(goal)==string::npos){
            return false;
        }
        return true;
    }
};