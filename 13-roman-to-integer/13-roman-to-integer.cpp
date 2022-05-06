class Solution {
public:
    int romanToInt(string s) {
      map<char, int> conversionTable { {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000} };
      int out = 0;
      for (uint i = 0; i < s.length(); i ++) {
        if (i + 1 < s.length()) {
          if (s[i] == 'C' && (s[i+1] == 'M' || s[i+1] == 'D')) {
            out -= 100;
            continue;
          }
          if (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) {
            out -= 10;
            continue;
          }
          if (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) {
            out -= 1;
            continue;
          }
        }
        out += conversionTable[s[i]];
      }
      return out;
    }
};