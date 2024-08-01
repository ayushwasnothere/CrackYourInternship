#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &nums) {
  int k = 1;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] != nums[i - 1]) {
      nums[k] = nums[i];
      k++;
    }
  }
  return k;
}

int main() {
  std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  int k = removeDuplicates(nums);
  for (int i = 0; i < k; i++) {
    std::cout << nums[i] << " ";
  }
}
