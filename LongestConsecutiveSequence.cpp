class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int>numset(nums.begin(),nums.end());
        int length = 0;

        for(auto i = numset.begin(); i != numset.end(); i++){
            int num= *i;
            if(numset.find(num-1) == numset.end()){
                int currentnum = num;
                int currentlength = 1;

                while(numset.find(currentnum + 1) != numset.end()){
                    currentnum++;
                    currentlength++;
                }
                length = max(length,currentlength);
            }
        }
        return length;
    }
};
