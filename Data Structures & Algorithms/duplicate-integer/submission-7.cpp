class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num: nums){
            //if number is already in the set return 
            //true because a duplicate has been found
            if (seen.count(num)){
                return true;
            }
            //otherwise add it to the set
            seen.insert(num);
        }
        return false;
    }
};