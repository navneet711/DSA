// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int high=n;
        int result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int ans=isBadVersion(mid);
            if(ans==false){
                low=mid+1;
            }
            else if(ans==true){
                result=mid;
                high=mid-1;
            }
            
        }
        return result;
    }
};