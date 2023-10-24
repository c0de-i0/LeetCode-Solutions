class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> set;
        int i = 0, j= 0;
        int ans = 0;
        while(i<s.size())
        {
           if(set.count(s[i]) == 0)
           {
                set.insert(s[i++]);
                ans = max(ans,(int)set.size());
           }
           else
           {
               set.erase(s[j++]);
           } 
       
        }
        return ans;
    }
};