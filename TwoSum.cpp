//1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>nummap;
        for(int i=0; i<nums.size(); i++){
            int x = target - nums[i];
            if(nummap.find(x) != nummap.end()){
                return {nummap[x],i};
            }
            nummap[nums[i]] = i;
        } 
        return {};
    }
};
