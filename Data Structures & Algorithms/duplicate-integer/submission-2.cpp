class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>x;
        //constant-time lookup

        for (int num:nums){
            if (x.count(num)){
                return true;
            }
            x.insert(num);
        }
        return false;
    }
};