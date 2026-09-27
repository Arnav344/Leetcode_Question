class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer=0;
        for(int j=0;j<32;j++){
            
             int count=0;
             

             for(int i=0;i<nums.size();i++){
                if((nums[i]>>j)&1) {
                count++;

                }
             }
        count=count%3;

        if (count == 1) {
                answer = answer | (1 << j);
        
        }
        
        
    }
    return answer;
    }
    
};