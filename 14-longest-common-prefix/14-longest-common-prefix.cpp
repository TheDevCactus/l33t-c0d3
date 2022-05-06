class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string out = "";
      int p = 0;
      bool hasCommonFirstChar = true;
      
      if (strs.size() == 1) return strs[0];
      if (strs[0].length() == 0) return out;
      
      while (hasCommonFirstChar) {
        char firstCharToMatch = strs[0][p];
        for (uint i = 1; i < strs.size(); i ++) 
          if (strs[i].length() <= p || strs[i][p] != firstCharToMatch) {
            hasCommonFirstChar = false;
          } 
        
        if (!hasCommonFirstChar) continue;
        p++;
        out+=firstCharToMatch;
      }
      return out;
    }
};