class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> runningSum;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            runningSum.push_back(sum);
        }
        return runningSum;
    }
};