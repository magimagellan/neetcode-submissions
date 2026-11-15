class Solution {
public:
    bool isAnagram(string s, string t) {
        if(size(s) != size(t)){
            return false;
        }

        std::unordered_map<char, int> hmp;
        int sizel = size(s);
        for(int i = 0; i < sizel; i++){
            hmp[s[i]]++;
        }
        for(int i = 0; i < sizel; i++){
            if(hmp[t[i]] > 0){
                hmp[t[i]]--;
            } else{return false;}
        }
        return true;
    }
};
