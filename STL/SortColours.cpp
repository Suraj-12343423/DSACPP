class Solution {
public:
    void sortColors(vector<int>& nums) {

        int low = 0, high = nums.size() - 1;
        int i = 0;

        while (i <= high) {
            if (nums[i] == 0) {
                nums[i] = nums[low];
                nums[low] = 0;
                low++;
                i++;
            } else if (nums[i] == 2) {
                nums[i] = nums[high];
                nums[high] = 2;
                high--;
            } else {
                i++;
            }
        }
    }
};
