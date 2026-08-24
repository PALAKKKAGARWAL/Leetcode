class Solution {
public:
    bool isPossible(vector<int>& arr,int total,int count){
        int m=arr.size();
        int c=1;
        int sum=0;
        for(int i=0;i<m;i++){
            if(sum + arr[i]<=total){
                sum+=arr[i];
            }else{
                c++;
                sum=arr[i];
            }
        }
        return c<=count;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int left=*max_element(nums.begin(),nums.end());
        int right = accumulate(nums.begin(),nums.end(),0);
        if(k>n) return -1;
        while(left<=right){
            int mid=(left+right)/2;
            if(isPossible(nums,mid,k)){
              right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};