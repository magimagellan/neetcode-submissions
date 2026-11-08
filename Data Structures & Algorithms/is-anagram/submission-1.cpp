class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> hmp;
        
        int n = s.size();
        for (int i = 0; i < n ; i++){
            hmp[s[i]]++;
        }
        for (int i = 0; i < n ; i++){
            hmp[t[i]]--;
        }

        for (const auto& [key, value] : hmp){
            if (hmp[key] != 0)
                return false;
        }

        return true;
        
    }
};
