/*
    Given a set of distinct integers, nums, return all possible subsets (the power set).

    Note: The solution set must not contain duplicate subsets.

        Example:

        Input: nums = [1,2,3]
        
        Output:
            [
                [3],
                [1],
                [2],
                [1,2,3],
                [1,3],
                [2,3],
                [1,2],
                []
            ]
*/

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