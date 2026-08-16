class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        set <int> s;
        int count=0;
        for(int i=0;i<n;i++){
            s.insert(candyType[i]);
        }
        if(s.size()<candyType.size()/2)
        {
            return s.size();
        }
        return n/2;
    }
};