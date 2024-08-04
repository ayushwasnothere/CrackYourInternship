
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int subarraysDivByK(vector<int> &nums, int k) {
  unordered_map<int, int> remainder_count;
  remainder_count[0] = 1;
  int count = 0;
  int prefixSum = 0;
  for (int num : nums) {
    prefixSum += num;
    int remainder = prefixSum % k;

    if (remainder < 0) {
      remainder += k;
    }

    if (remainder_count.find(remainder) != remainder_count.end(remainder)) {
      count += remainder_count[remainder];
      remainder_count[remainder]++;
    } else {
      remainder_count[remainder] = 1;
    }
  }
  return count;
}

int main() {
  vector<int> nums = {4, 5, 0, -2, -3, 1};
  int k = 5;
  cout << subarraysDivByK(nums, k);
  return 0;
}
