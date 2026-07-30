class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnteven=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int digits=0;
            if(n==0)
            {
                digits=1;

            }
            else{
                while(n!=0){
                digits++;
                n/=10;
                }
            }
            
            if(digits%2==0){
                cnteven++;
            }
        }
        return cnteven;
        
    }
};