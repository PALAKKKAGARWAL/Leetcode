class Solution {
public:
    string removeOuterParentheses(string s) {
        string p = "";
        int counter = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (counter > 0)
                    p += ch;
                counter++;
            } else {
                counter--;
                if (counter > 0)
                    p += ch;
            }
        }

        return p;
    }
};