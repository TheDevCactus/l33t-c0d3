class Solution {
public:
    int mySqrt(int x) {
      if (x < 2) return x;
      long l = 0, h = x / 2;
        
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