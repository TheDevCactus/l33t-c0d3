class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int l = 0, h = 0;
      while (h < nums.size()) {
        if (nums[h] != val) {
          nums[l] = nums[h];
          l++;
        }
        h++;
      }
      return l;
    }
};