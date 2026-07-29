class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int max_appear=0;
        for(long i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                max_appear=max(max_appear,count );
            }
            else{
                count=0;
            }
        
               
        }
        return max_appear;
    }    
    
};