class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) {
            return strs[0];
        }
        string result = "";
        sort(strs.begin(), strs.end(), [](string str1, string str2) {
            return str1.length() < str2.length();
            });
        string temp = strs[0];
        for (int i = 0; i < temp.size(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (temp[i] != strs[j][i]) {
                    i = temp.size();
                    break;
                }
                else if (j + 1 == strs.size()) {
                    result += temp[i];
                }
            }
        }
        return result;
    }
};
