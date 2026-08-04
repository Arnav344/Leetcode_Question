class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min=nums[0];
        int max=nums[0];
        unordered_set<int> st;
        vector <int> ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<min)
            min=nums[i];

            if(nums[i]>max)
            max=nums[i];

        }

        
        
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);

        }
        for (int x = min; x <= max; x++) {
            if (st.count(x) == 0) {
                ans.push_back(x);
            }
        }

        return ans;



        
    }
};