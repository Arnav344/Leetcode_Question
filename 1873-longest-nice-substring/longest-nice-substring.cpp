class Solution {
public:
    string longestNiceSubstring(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                string sub = s.substr(i, j - i + 1);
                bool nice = true;

                for (int k = 0; k < sub.size(); k++) {
                    char c = sub[k];

                    if (isupper(c)) {
                        if (sub.find(tolower(c)) == string::npos) {
                            nice = false;
                            break;
                        }
                    } else {
                        if (sub.find(toupper(c)) == string::npos) {
                            nice = false;
                            break;
                        }
                    }
                }

                if (nice && sub.size() > ans.size()) {
                    ans = sub;
                }
            }
        }

        return ans;
    }
};