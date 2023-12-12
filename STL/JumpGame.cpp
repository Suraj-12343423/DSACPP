class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int n = nums.size();
        int far = 0;

        for (int i = 0; i < n - 1; ++i) {
            far = std::max(far, i + nums[i]);

            if (far <= i) {
                return false;
            }
        }

        return true;
    }
};
