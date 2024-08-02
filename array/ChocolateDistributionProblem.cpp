#include <algorithm>
#include <iostream>
#include <vector>

int findMinDiff(std::vector<int> a, int n, int m) {
  sort(a.begin(), a.end());
  int minDiff = a[m - 1] - a[0];
  for (int i = 1; i + m - 1 < n; i++) {
    int diff = a[i + m - 1] - a[i];
    minDiff = std::min(minDiff, diff);
  }
  return minDiff;
}

int main() {
  std::vector<int> a = {3, 4, 1, 9, 56, 7, 9, 12};
  int n = a.size();
  int m = 5;
  std::cout << findMinDiff(a, n, m);
  return 0;
}

// Input:
// N = 8, M = 5
// A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: 6
// Explanation: The minimum difference between maximum chocolates and minimum
// chocolates is 9 - 3 = 6 by choosing following M packets :{3, 4, 9, 7, 9}.
