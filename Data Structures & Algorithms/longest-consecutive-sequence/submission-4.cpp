class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        int longest = 0;
        unordered_set<int> sequence(nums.begin(), nums.end());
        
        for(int element : sequence){
            if(!sequence.count(element - 1)){
                int streak = 1;
                while(sequence.count(element + streak)){
                    streak++;
                }
                longest = max(streak, longest);
            }
        }
        return longest;
    }
};