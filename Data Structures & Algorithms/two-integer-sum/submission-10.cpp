class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hmp;
        int l = size(nums);
        for(int i = 0; i<l ; i++){
            int residval = target - nums[i];
            auto duo = hmp.find(nums[i]);
            if (duo != hmp.end()){
                return {duo->second, i};
            }
            else {
                hmp[residval] = i;
            }
        }
    }
};
