#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(vector<int> &nums) {
  vector<int> ans;
  for (int i = 0; i < nums.size(); i++) {
    int index = abs(nums[i]) - 1;
    if (nums[index] < 0) {
      ans.push_back(abs(nums[i]));
    } else {
      nums[index] = -nums[index];
    }
  }
  return ans;
}

int main() {
  vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
  vector<int> result = findDuplicates(nums);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  return 0;
}
