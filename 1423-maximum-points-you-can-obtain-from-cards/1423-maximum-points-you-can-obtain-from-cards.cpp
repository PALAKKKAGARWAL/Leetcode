class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();
       int leftsum=0;
       for(int i=0;i<k;i++){
        leftsum+=arr[i];
        
       }
       int maxx=leftsum;
       int j=n-1;
       int rightsum=0;
       for(int i=k-1;i>=0;i--){
        leftsum-=arr[i];
        rightsum+=arr[j];
        j--;
        maxx=max(maxx,leftsum+rightsum);
       }
       return maxx;
    }
};