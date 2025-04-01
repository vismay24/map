class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;

        for(size_t i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

    vector<pair<int,int>>ele(m.begin(),m.end());

    sort(ele.begin(),ele.end(), [](pair<int,int>a,pair<int,int>b){
        return a.second>b.second;
    });

    vector<int>result;
    for(int i=0; i<k; i++){
        result.push_back(ele[i].first);
    }
    return result;
    }
};
