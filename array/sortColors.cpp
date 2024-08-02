#include <iostream>
#include <vector>

void sortColors(std::vector<int> &nums) {
  int low = 0;
  int mid = 0;
  int high = nums.size() - 1;
  while (mid <= high) {
    if (nums[mid] == 0) {
      std::swap(nums[mid], nums[low]);
      mid++;
      low++;
    } else if (nums[mid] == 1) {
      mid++;
    } else if (nums[mid] == 2) {
      std::swap(nums[mid], nums[high]);
      high--;
    }
  }
}

int main() {
  std::vector<int> nums = {2, 0, 2, 1, 1, 0};
  sortColors(nums);
  for (int i = 0; i < nums.size(); i++) {
    std::cout << nums[i] << " ";
  }
  return 0;
}
