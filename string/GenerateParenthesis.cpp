class Solution {
public:
  void generate(vector<string> &result, string curr, int max, int open,
                int close) {
    if (curr.length() == max * 2) {
      result.push_back(curr);
      return;
    }
    if (open < max) {
      generate(result, curr + "(", max, open + 1, close);
    }
    if (close < open) {
      generate(result, curr + ")", max, open, close + 1);
    }
  }
  vector<string> generateParenthesis(int n) {
    vector<string> result;
    generate(result, "", n, 0, 0);
    return result;
  }
};
