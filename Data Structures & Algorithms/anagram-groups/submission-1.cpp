class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> result;
        for(int i =0;i<strs.size();i++){
            int count[26]={0};
            for(int j=0;j <strs[i].size();j++){
                count[strs[i][j] - 'a']++;
            }
            string key = "";
            for(int c : count)  key += to_string(c) + ",";
            map[key].push_back(strs[i]);
        }
        for(auto& p : map){
                result.push_back(p.second);
        }
        return result;
    }
};
