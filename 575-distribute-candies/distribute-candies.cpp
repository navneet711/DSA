class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set <int> s;
        int count=0;
        for(int i=0;i<n;i++){
            s.insert(candyType[i]);
        }
        if(s.size()<n/2) return s.size();
        else return n/2;
    }
};