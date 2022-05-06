class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0 ;
        for (int i = 0 ; i < words.size() ; ++i) {
            if (words[i].length() > s.length()) continue ;
            for (int j = 0 ; j < words[i].size() ; ++j) {
                if (words[i][j] != s[j]) break ;
                if (j == words[i].length() - 1) ++cnt ;
            }
        }
        return cnt ;
    }
};