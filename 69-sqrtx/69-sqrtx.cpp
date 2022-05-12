class Solution {
public:
    int mySqrt(int x) {
      long l = 0, h = x;
        
      while (l < h) {
        long mid = (l + h + 1) / 2;
        if (mid * mid > x) {
          h = mid - 1;
          continue;
        }
        l = mid;
      }

      return l;
    }
};