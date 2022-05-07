class Solution {
public:
    int removeElement(vector<int>& nums, unsigned char val) {
      unsigned char l = 0, h = 0;
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