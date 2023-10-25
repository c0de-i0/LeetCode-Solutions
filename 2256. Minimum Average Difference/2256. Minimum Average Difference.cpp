class Solution {
public:
    int minimumAverageDifference(std::vector<int>& nums) {
        int n = nums.size();
        if (n <= 1)
            return 0;
        
        long long lsum = 0;
        long long rsum = 0;

        for (int i = 0; i < n; i++)
            rsum += nums[i];

        long long min_diff = INT_MAX;
        int min_ind = -1;

        for (int i = 1; i < n + 1; i++) {
            lsum += nums[i - 1];
            rsum -= nums[i - 1];
            long long lavg = lsum / i;
            long long ravg = (n - i) == 0 ? 0 : rsum / (n - i);
            long long diff = std::abs(lavg - ravg);

            if (diff < min_diff) {
                min_diff = diff;
                min_ind = i - 1;
            }
        }
        return min_ind;
    }
};
