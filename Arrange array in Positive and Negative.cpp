/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int> pos;
        vector<int> neg;
        for(int v : nums){
            if(v >= 0) pos.push_back(v);
            else neg.push_back(v);
        }
        vector<int> ans;
        int i = 0;
        int j = 0;
        while(i < pos.size() && j < neg.size()){
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }
        return ans;
    }
};

Time Complexity-O(N)
Space Complexity -O(N)
