class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result{};
        for (const int &every : nums) {
            result ^= every;
        }
        return result;
    }
};