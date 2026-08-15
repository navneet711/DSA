class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int og=x;
        if(x<0) return false;
        while(x>0){
            int digit=x%10;
            rev=rev*10+digit;
            x=x/10;
        }
        if(rev==og) return true;
        return false;
    }
};