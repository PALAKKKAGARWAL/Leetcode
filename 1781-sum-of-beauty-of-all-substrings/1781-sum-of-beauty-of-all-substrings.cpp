class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int j=0;j<s.length();j++){
        int freq[256]={0};
        for(int i=j;i<s.length();i++){
           freq[s[i]]++;
        
        int maxii = 0;
        int mini= INT_MAX;
        for(int i=0;i<256;i++){
            if(freq[i]>0){
                maxii=max(maxii,freq[i]);
                mini=min(mini,freq[i]);
            }
        }
        sum+= maxii-mini;
        }
    }
    return sum;
    }
};