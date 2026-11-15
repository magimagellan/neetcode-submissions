using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int length = size(nums);
        for(int n = 0; n + 1 < length; n++){
            if (nums[n] == nums[n+1]){
                return true;
            }
        }
        return false;
    }
};  