class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> hashMap = new HashMap<>();
        for (int num : nums) {
            if (hashMap.containsKey(num))
                return true;
            hashMap.put(num, hashMap.getOrDefault(num, 0) + 1);
        }
        return false;
    }
}