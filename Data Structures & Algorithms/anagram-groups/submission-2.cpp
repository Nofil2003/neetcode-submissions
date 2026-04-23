class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(string& w : strs){
            string key = w;
            sort(key.begin(),key.end());
            map[key].push_back(w);
        }
        vector<vector<string>> result;
        for(auto& m : map){
            result.push_back(m.second);
        }
        return result;
    }
};
