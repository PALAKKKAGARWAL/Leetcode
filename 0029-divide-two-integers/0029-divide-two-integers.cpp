class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend==divisor){
        return 1;
       }
       bool sign = true;
       if(dividend>=0 && divisor<0){
        sign= false;
       }
       if(dividend<=0 && divisor>0){
        sign= false;
       }
       long n = abs(long(dividend));
       long d = abs(long(divisor));
       long q =0;
       while(n>=d){
         int cut=0;
         while(n>=(d<<(cut+1))){
            cut++;
         }
            q+=(1<<cut);
            n-=(d<<cut);
         }
         if(q==(1<<31)&& sign == true){
            return INT_MAX;
         }
         if(q==(1<<31)&& sign == false){
            return INT_MIN;
         }
         if(sign){
            return q;
         }
         return -q;

    }
};