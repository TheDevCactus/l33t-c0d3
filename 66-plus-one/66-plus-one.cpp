class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int i = digits.size();
      while (digits[--i] == 9 && i > 0)
        digits[i] = 0;
      
      if (i == 0 && digits[i] == 9) {
        digits[i] = 1;
        digits.push_back(0);
        return digits;
      }
      
      digits[i] ++;
      return digits;
    }
};