using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hashmap;

        if(size(t) != size(s)){ return false;}

        for(char Ch : s){
            hashmap[Ch]++;
        }

        for(char Ch : t){
            if(hashmap[Ch] > 0){
                hashmap[Ch]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
