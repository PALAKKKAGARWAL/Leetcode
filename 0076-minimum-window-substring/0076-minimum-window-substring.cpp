class Solution {
public:
    string minWindow(string s, string t) {
       int hash[256]={0};
        int l=0,r=0,cut=0,minlen=INT_MAX,sindex=-1;
        for(int i=0;i<t.size();i++){
            hash[t[i]]++;
        }
        while(r<s.size()){
            if(hash[s[r]]>0){
                cut++;
            }
            hash[s[r]]--;
            while(cut==t.size()){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sindex=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    cut=cut-1;
                }
                l=l+1;
            }
            r=r+1;
        }
        return sindex==-1?"":s.substr(sindex,minlen);
    }
};