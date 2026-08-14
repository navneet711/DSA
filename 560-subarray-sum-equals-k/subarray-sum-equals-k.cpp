class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        int n=nums.size();
        int pSum=0;
        int count=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            pSum+=nums[i];
              if(mp.find(pSum-k)!=mp.end()){
                count+=mp[pSum-k];
            }
            mp[pSum]++;
        }
        return count;
    }
};