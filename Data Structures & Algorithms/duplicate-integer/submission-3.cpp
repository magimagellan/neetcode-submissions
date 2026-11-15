using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = size(nums);
        for(int n; n + 1 < l; n++){
            if(nums[n] == nums[n+1]){
                return true;
            }
        }
        return false;
    }
};