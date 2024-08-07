class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    if (strs.size() == 0)
      return "";
    if (strs.size() == 1)
      return strs[0];
    sort(strs.begin(), strs.end());
    string ans = "";
    int last = strs.size() - 1;
    for (int i = 0; i < min(strs[0].length(), strs[last].length()); i++) {
      if (strs[0][i] == strs[last][i]) {
        ans += strs[0][i];
      } else {
        return ans;
      }
    }
    return ans;
  }
};
