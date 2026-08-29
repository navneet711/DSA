class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        unordered_set<int> s2;
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            s.insert(nums1[i]);
        }
        for(int i=0;i<m;i++){
            s2.insert(nums2[i]);
        }
        int count=0;
        for(int x:s){
            if(s2.find(x)!=s2.end()) ans.push_back(x);
        }
       return ans;
        
    }
};