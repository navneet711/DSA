class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int countEven=0;
        for(int i=0;i<n;i++){
            int count=0;
            int x=nums[i];
            while(x!=0){
                x/=10;
                count++;
              
            }
              if(count%2==0){
                    countEven++;
                }
           
        
        }
         return countEven;
    }
    
};