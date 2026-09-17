class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Sliding window problem
        
        int n = nums.size();
        int r=k-1;
        int l =0;
        int sum=0;
        for(int i=l;i<=r;i++){
               sum+=nums[i];
            }
            int maxx=sum;
        while(r<n-1){
            sum -= nums[l];
        l++;
        r++;
        sum += nums[r];
        maxx = max(maxx,sum);
        }
        double avg = double(maxx)/k;
        return avg;
    }
};