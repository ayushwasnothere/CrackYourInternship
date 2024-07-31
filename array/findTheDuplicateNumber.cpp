#include <iostream>
#include <vector>

// Approach 1: marking all elements in an array
int findDuplicate(std::vector<int> &nums) {
  int n = nums.size();
  int arr[100000 + 1];
  for (int i = 0; i < 100000 + 1; i++) {
    arr[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    if (arr[nums[i]] > 0) {
      return nums[i];
    }
    arr[nums[i]]++;
  }
  return -1;
}

// Approach 2: using fast/slow pointer like in linked list
int findDuplicate2(std::vector<int> &nums) {
  int slow = 0;
  int fast = 0;
  do {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);

  slow = 0;
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
}

int main() {
  std::vector<int> nums = {1, 3, 4, 2, 2};
  std::cout << findDuplicate(nums) << std::endl;
  std::cout << findDuplicate2(nums);
}
