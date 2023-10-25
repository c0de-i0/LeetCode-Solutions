class Solution {
    public int minimumAverageDifference(int[] nums) {
        int n = nums.length;
        if (n<=1)
            return 0;
        
        long lsum = 0;
        long rsum = 0;

        for(int i=0;i<n;i++)
            rsum += nums[i];

        long min_diff = Integer.MAX_VALUE;
        int min_ind = -1;

        for(int i=1;i<n+1;i++){
            lsum += nums[i-1];
            rsum -= nums[i-1];
            long lavg = lsum/i;
            long ravg = (n-i) == 0 ? 0 : rsum/(n-i);
            long diff = Math.abs(lavg-ravg);

            if(diff < min_diff){
                min_diff = diff;
                min_ind = i-1;
            }
        }
        return min_ind;
    }
}
