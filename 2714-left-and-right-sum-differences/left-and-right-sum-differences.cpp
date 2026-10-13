class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total=0;;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];

        }
        int leftsum=0;
        vector<int> answer(nums.size());
        for(int i=0;i<nums.size();i++){
             int rightsum=total-leftsum-nums[i];
             answer[i]=abs(leftsum-rightsum);
             leftsum+=nums[i];

        }
        return answer;
    }
};