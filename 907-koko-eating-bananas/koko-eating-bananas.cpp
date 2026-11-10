class Solution {
public:
int maxEle(vector<int> &arr){
    int max=arr[0];
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

long long calcHours(vector<int> &arr,int rate){
    long long hours=0;
    for(int i=0;i<arr.size();i++){
        hours+=(int)ceil((double) arr[i]/rate);
    }
    return hours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxEle(piles);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
        long long totalHours=calcHours(piles,mid);
            if(totalHours<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};