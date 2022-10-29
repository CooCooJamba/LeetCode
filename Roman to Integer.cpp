class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        map <char, int> roman_num = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length()) {
                if (roman_num.find(s[i])->second < roman_num.find(s[i + 1])->second) {
                    result += roman_num.find(s[i + 1])->second - roman_num.find(s[i])->second;;
                    i++;
                    continue;
                }
            }
            result += roman_num.find(s[i])->second;
        }
        return result;
    }
};
