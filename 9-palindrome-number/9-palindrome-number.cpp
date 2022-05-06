class Solution {
public:
    bool isPalindrome(int x) {
      if (x < 0) return false;
      
      unsigned long int reversed = 0;
      int t = x;
      while (t > 0) {
        reversed *= 10;
        reversed += (t % 10);
        t /= 10;
      }
      return x - reversed == 0;
    }
};