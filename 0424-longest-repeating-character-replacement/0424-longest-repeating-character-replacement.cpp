class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxlen=0,maxx=0;
        int mpp[26]={0};
        while(r<s.length()){
            mpp[s[r]-'A']++;
            maxx=max(maxx,mpp[s[r]-'A']);
            if((r-l+1)-maxx>k){
                mpp[s[l]-'A']--;
                maxx=0;
                for(int i=0;i<26;i++){
                    maxx=max(maxx,mpp[s[r]-'A']);
                }
                l=l+1;
            }
            if((r-l+1)-maxx<=k){
                maxlen = max(maxlen,r-l+1);
            }
            r=r+1;
        }
        return maxlen;
    }
};