class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int duplicate = 0;
        unordered_set<int> unique;
        for(int i=0;i<nums.size();i++){
            if(unique.count(nums[i])){
                return true;
            }
            unique.insert(nums[i]);
        }
        return false;
    }
};