class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0 ;

        for (auto const num : nums ) {
            if (num != val ) {
                nums[i++] = num;
            }
        }
        return i ;
    }
};
