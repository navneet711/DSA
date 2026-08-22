class Solution {
public:
    bool checkDivisibility(int n) {
       long long int sum=0;
       long long int pdt=1;
        int x=n;
        while(x>0){
           int digit=x%10;
            sum=sum+digit;
            x=x/10;
        }
        x=n;
        while(x>0){
            int pdigit=x%10;
            pdt=pdt*pdigit;
            x=x/10;
        }
        int f_sum=sum+pdt;
        if(n%f_sum==0) return true;
        else return false;
    }
};