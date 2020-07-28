class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int l = nums.size();

        vector<vector<int>> ans;
        
        for (int i{}; i <= ((1 << l) - 1); i++) {
            int temp = i, j{};
            vector<int> temp_vec;
            while(temp) {
                if (temp & 1)
                    temp_vec.push_back(nums[j]);
                j++;
                temp = temp >> 1;
            }
            ans.push_back(temp_vec);
        }
        return ans;
    }
};