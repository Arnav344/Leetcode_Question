class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> patternToWord;
        unordered_map<string, char> wordToPattern;

        stringstream ss(s);
        string word;

        int i = 0;

        while (ss >> word) {

            
            if (i >= pattern.size()) {
                return false;
            }

            
            if (patternToWord.find(pattern[i]) != patternToWord.end()) {
                if (patternToWord[pattern[i]] != word) {
                    return false;
                }
            }

           
            if (wordToPattern.find(word) != wordToPattern.end()) {
                if (wordToPattern[word] != pattern[i]) {
                    return false;
                }
            }

           
            patternToWord[pattern[i]] = word;
            wordToPattern[word] = pattern[i];

            i++;
        }

        
        return i == pattern.size();
    }
};