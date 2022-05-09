class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0) return 0;
        int l = 0, h = 0;
        while (h < haystack.length()) {
          h++;
          if (h - l != needle.length()) continue;
          
          bool foundMatch = true;
          for (uint i = 0; i < needle.length(); i ++) {
            if (haystack[l + i] == needle[i]) continue;
            foundMatch = false;
            break;
          }
          
          if (foundMatch) return l;
          l++;
        }
        return -1;
    }
};