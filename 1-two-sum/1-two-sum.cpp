class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> m;
        for (uint i = 0; i < nums.size(); i ++) {
          if (m.find(nums[i]) == m.end()) {
            m[target - nums[i]] = i;
            continue;
          }
          return std::vector<int> { (int)i, m[nums[i]] };
        }
        return std::vector<int> { -1, -1 };
    }
};