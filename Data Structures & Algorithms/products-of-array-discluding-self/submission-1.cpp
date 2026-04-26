class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
       vector<int> prefix(n);
       vector<int> suffix(n);
       vector<int> result(n);
       suffix[nums.size()-1]=1;
       prefix[0] = 1;
       for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1] * nums[i-1];
       }

       for(int j = nums.size() - 1;j>0;j--){
            suffix[j-1]=suffix[j] * nums[j];
       }

       for(int z=0;z<nums.size();z++){
            result[z] = prefix[z] * suffix[z];
       }
        return result; 
    }
};
