class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int r = 0;
        int l = 0;
        vector<int> v;
        double ans = 0;
        while(l<nums1.size() and r<nums2.size())
        {
            if(nums1[l] < nums2[r])
                v.push_back(nums1[l++]);
            else
                v.push_back(nums2[r++]);
        }        
        while(l<nums1.size())
            v.push_back(nums1[l++]);
         while(r<nums2.size())
            v.push_back(nums2[r++]);
             
        int size = (nums1.size()+nums2.size());
        int mid = size % 2;
        if( mid != 0 )
            return (double)(v[size /2]);
        ans = (double)(v[size/2]) + (double) (v[(size/2)-1] );

        return ans/(double)2;
    }
};