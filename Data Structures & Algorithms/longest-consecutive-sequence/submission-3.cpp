class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        int longest = 0;
        int streak = 0;
        set<int> sequence;
        
        for(int i = 0; i < nums.size(); i++){
            sequence.insert(nums[i]);
        }
        
        for(int element : sequence){
            if(!sequence.count(element - 1)){
                streak = 1;
            } else {
                streak++;
            }
            longest = max(streak, longest);
        }
        
        return longest;
    }
};
