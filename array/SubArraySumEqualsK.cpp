class Solution {
public:
  int subarraySum(vector<int> &nums, int k) {
    unordered_map<int, int> hashmap;
    int count = 0;
    hashmap[0] = 1;
    int cumSum = 0;
    for (int num : nums) {
      cumSum += num;
      if (hashmap.find(cumSum - k) != hashmap.end()) {
        count += hashmap[cumSum - k];
      }
      hashmap[cumSum]++;
    }
    return count;
  }
};
