class Solution {
public:
  bool isValid(string s) {
    stack<char> c;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '(')
        c.push(')');
      else if (s[i] == '[')
        c.push(']');
      else if (s[i] == '{')
        c.push('}');
      else if (c.empty() || s[i] != c.top())
        return false;
      else
        c.pop();
    }
    return c.empty();
  }
};
