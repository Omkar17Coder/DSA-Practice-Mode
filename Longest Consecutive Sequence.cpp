Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.
  
  
  class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       // Think 
       // We can solve using O(N) space complexity

// Why use extra space 
    unordered_set<int>data;
    for(auto num:nums){
        data.insert(num);
    }
    int maxlength=0;

    for(auto num:nums){
        if(!data.count(num-1)){
            int currstreak=1;
            int currnum=num;
            while(data.count(currnum+1)){
                currstreak+=1;
                currnum+=1;
            }
            maxlength=max(maxlength,currstreak);
        }

    }
return maxlength;

    }
};
