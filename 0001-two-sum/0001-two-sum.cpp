class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        for (int j = 0; j < nums.size(); ++j) {
            int complement = target - nums[j];
            if (numToIndex.find(complement) != numToIndex.end()) {
                return {numToIndex[complement], j};
            }
            numToIndex[nums[j]] = j;
        }
        return {}; // Should never reach here as per the problem's constraint
    }
};
