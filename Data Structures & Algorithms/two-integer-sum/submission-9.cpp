class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //store needed residval and index of the initval in hashmap and push until one found
        std::unordered_map<int, int> hmp;
        int l = size(nums);
        for(int i = 0; i<l ; i++){
            int residval = target - nums[i];
            if(hmp.find(nums[i]) == hmp.end()){
                hmp[residval] = i;
            } 
            else {
                return {hmp[nums[i]], i};
            }
        }
    }
};
