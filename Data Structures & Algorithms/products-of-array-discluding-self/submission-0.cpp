class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        for(int i =0;i<nums.size();i++){
            int total=accumulate(nums.begin(),nums.begin()+i,1, multiplies<int>())
             * accumulate(nums.begin()+i+1, nums.end(),1, multiplies<int>());
            result.push_back(total);
        }
        return result;
    }
};
