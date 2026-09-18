class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() < 2){
            return false;
        }
        sort(nums.begin(), nums.end());
        int *a = nums.data();
        int *b = a + 1;
        int *end = nums.data() + nums.size();
        while (b != end){
            if (*a == *b){
                return true;
            }
            a++;
            b++;
        }
        return false;
    }
};