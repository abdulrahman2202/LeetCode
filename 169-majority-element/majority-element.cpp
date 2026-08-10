class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int voteCount = 0;

        for(int i=0;i<nums.size();i++){
            if(voteCount == 0){
                candidate = nums[i];
            }

            if(candidate == nums[i]){
                voteCount++;
            }else{
                voteCount--;
            }
        }

        return candidate;
        
    }
};