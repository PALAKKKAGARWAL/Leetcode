class Solution {
public:
    string largestOddNumber(string num) {
        // If last digit is odd then the whole number is odd thats why we'll scan from back
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};