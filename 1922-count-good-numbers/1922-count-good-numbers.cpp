class Solution {
public:
    const int M = 1e9+7;
    int power(long long x, long long n){
        if(n==0){
            return 1;
        }
        long long half= power(x,n/2);
        if(n%2==0){
            return (half*half)%M;
        }
        return (x*half*half)%M;
    }
    int countGoodNumbers(long long n) {
        return (1LL*power(5,(n+1)/2)*power(4,n/2))%M;
    }
};