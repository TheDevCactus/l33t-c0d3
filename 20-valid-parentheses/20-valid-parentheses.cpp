class Solution {
public:
    bool isValid(string s) {
      if (s.length() % 2 == 1) return false;
      
      deque<char> stack;
      map<char, char> validParenLookup { {'}', '{'}, {']', '['}, {')', '('} };
      
      for (uint i = 0; i < s.length(); i ++) {
        if (validParenLookup.find(s[i]) == validParenLookup.end()) {
          stack.push_front(s[i]);
          continue;
        }
        if (stack.front() != validParenLookup[s[i]]) return false;
        stack.pop_front();
      }
      return stack.size() == 0;
    }
};