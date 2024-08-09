class Solution {
public:
  bool check(string s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
      if (s[i] != s[j]) {
        return false;
      }
      i++;
      j--;
    }
    return true;
  }
  bool validPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
      if (s[i] != s[j]) {
        return check(s.substr(0, i) + s.substr(i + 1)) ||
               check(s.substr(0, j) + s.substr(j + 1));
      }
      i++;
      j--;
    }
    return true;
  }
};
