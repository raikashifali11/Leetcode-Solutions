class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) {
            return strs[0];
        }
        sort(strs.begin(),strs.end());
        string first = strs.front();
        string last = strs.back();
        string ans = "";

        // first.size() returns unsigned int therefore we cast it to int
        for(int i=0; i < (int)first.size();i++){
            if(first[i] == last[i]){
                ans += first[i];
            }else{
                break;
            }
        }
        return ans;
    }
};