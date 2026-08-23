class Solution {
public:
    bool Garden(vector<int>& bloomDay,int day, int m, int k) {
        int n= bloomDay.size();
        int cnt=0;
        int bouquet=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                cnt++;
                if(cnt==k){
                    bouquet++;
                    cnt=0;
                }
            }else{
                cnt=0;
            }
        }
        return bouquet >=m ;
    }

int minDays(vector<int>& arr, int m,int k){
    long long total = 1LL *m*k;
    if(total>arr.size()) return -1;
   int mini= *min_element(arr.begin(),arr.end());
   int maxi= *max_element(arr.begin(),arr.end());

    int low=mini;
    int high=maxi;
    // int result=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(Garden(arr,mid,m,k)){
            // result=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}
};