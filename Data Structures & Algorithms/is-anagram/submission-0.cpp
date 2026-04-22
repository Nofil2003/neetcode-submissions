class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> seen_s;
        unordered_map<char,int> seen_t;
        // race | acer
        int increment = 1;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(!seen_s.count(s[i])){
                seen_s[s[i]] = increment;
            }
            else{
                seen_s[s[i]] += 1;
            }
            if(!seen_t.count(t[i])){
                seen_t[t[i]] = increment;
            }
            else{
                seen_t[t[i]] += 1;
            }
        }

        // check and compare frequency of each char in both maps
        if(seen_s == seen_t){
            return true;
        }

        return false;
    }
};
