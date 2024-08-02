#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> hash;
  for (int i = 0; i < nums.size(); i++) {
    int diff = target - nums[i];
    if (hash.find(diff) != hash.end()) {
      return {hash[diff], i};
    }
    hash[nums[i]] = i;
  }
  return {};
}

int main() {
  std::vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  std::vector<int> result = twoSum(nums, target);

  std::cout << "[" << result[0] << "," << result[1] << "]";
  return 0;
}


// Example 1:
//
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:
//
// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:
//
// Input: nums = [3,3], target = 6
// Output: [0,1]
