class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.size() == 1) return 1;
      int l = 0, p = 1;
      while (p < nums.size()) {
        if (nums[p] != nums[l]) {
          l++;
          nums[l] = nums[p];
        }
        p++;
      }
      return l + 1;
    }
};