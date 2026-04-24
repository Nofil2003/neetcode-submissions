class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
  unordered_map<int, int> freq;
  for (int i = 0; i < nums.size(); i++) {
    freq[nums[i]]++;
  }

  vector<int> keys;
  for (auto &p : freq) {
    keys.push_back(p.first);
  }
  sort(keys.begin(), keys.end(),
       [&](int a, int b) { return freq[a] > freq[b]; });

  vector<int> result;
  for (int i = 0; i < k && i < keys.size(); i++) {
    result.push_back(keys[i]);
  }

  return result;
}

};
