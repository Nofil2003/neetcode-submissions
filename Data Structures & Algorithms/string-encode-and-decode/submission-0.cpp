class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(int i=0;i<strs.size();i++){
            result +=to_string(strs[i].size())+ "#"+strs[i];
        }
        return result;
         
    }

vector<string> decode(string& strs){
    vector<string> decode;
    int i =0;
    while(i < strs.size()){
        int j = strs.find('#',i);
        int length = stoi(strs.substr(i,j-i));
        string word = strs.substr(j+1,length);
        decode.push_back(word);
        i = j + 1 + length;
      }
      return decode;
}  
    
};
