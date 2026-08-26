class Solution {
public:
    string frequencySort(string s) {
        int freq[256]={0};
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        string ans="";
        for(int count= s.length();count>0;count--){
            for(int i=0;i<256;i++){
                if(freq[i]==count){
                    for(int j=0;j<count;j++){
                        ans+=(char)i;
                    }
                    freq[i]=0;
                }
            }
        }
        return ans;

    }
};