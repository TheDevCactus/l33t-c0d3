class Solution {
public:
  int lengthOfLastWord(string s) {
    int i = s.length(), wordEndStart = -1;
    while (i > 0) {
      i--;
      if (s[i] != ' ' && wordEndStart < 0) {
        wordEndStart = i;
        continue;
      }
      if (wordEndStart > 0 && s[i] == ' ') 
        return wordEndStart - i;
    }
    return wordEndStart + 1;
  }
};