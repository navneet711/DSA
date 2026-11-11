class Solution {
public:
    bool isPossible(vector<int> &bloomDay,int day, int m, int k){
        int n=bloomDay.size();
        
        int count=0;
        int nob=0;
        for(int i=0;i<=n-1;i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                nob+=count/k;
                count=0;
            }
        }
        nob+=(count/k);
        if(nob>=m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long) n< (long long) m*k) return -1;
        int maxi= *max_element(bloomDay.begin(),bloomDay.end());
        int mini= *min_element(bloomDay.begin(),bloomDay.end());
        int low=mini;
        int high=maxi;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(bloomDay,mid,m,k)){
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