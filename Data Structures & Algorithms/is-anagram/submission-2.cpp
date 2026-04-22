class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int count[26] = {0};
        for(int i = 0; i < s.size(); i++){
            count[s[i] - 'a']++; // count[0] for 'a' , count[1] for 'b' , count[25] for 'z'
            count[t[i] - 'a']--;
        }
        for(int c : count)
            if(c != 0) return false; // checks if all zero
        return true;

    }
};
