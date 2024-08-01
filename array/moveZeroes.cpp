#include <iostream>
#include <vector>

void moveZeroes(std::vector<int> &nums) {
  int k = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != 0) {
      std::swap(nums[i], nums[k]);
      k++;
    }
  }
}

int main() {
  std::vector<int> nums = {0, 1, 0, 3, 12};
  moveZeroes(nums);
  for (int i = 0; i < nums.size(); i++) {
    std::cout << nums[i] << " ";
  }
}
