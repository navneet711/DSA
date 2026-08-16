class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_map<int, int> m;
        int count=0;
        for(int i=0;i<n;i++){
            m[candyType[i]] ++;
        }
        if(m.size()<candyType.size()/2)
        {
            return m.size();
        }
        return n/2;
    }
};