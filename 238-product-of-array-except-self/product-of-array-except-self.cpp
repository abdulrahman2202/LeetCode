class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> answer(n);

        answer[0] = 1;

        // prefix - multipling leftside [1,1,2,6]
        for(int i = 1;i<nums.size();i++){ // starting for value 2nd position
            answer[i] = answer[i-1] * nums[i-1];
        }
        // suffix - muliple rightside with prefix value
        int suffix = 1;

        for(int i = n - 1; i >= 0; i--){
            // starting from the last value and multiple with its right side values
            answer[i] *= suffix; 
            suffix *= nums[i]; // for the previous value we multiple
            // 3rd position on 4 = 1 except 4 so the product is 6
            // 2rd position on 3 = 1 * 4(rightside value) because leftside multiplcation is already done only right side is left and not taking 3
            // 1rd position on 2 = 1 * 12(3*4)(rightside value) because leftside multiplcation is already done only right side is left and not taking 2
            // 0rd position on 1 = 1 * 24(2*3*4)(rightside value) because leftside multiplcation is already done only right side is left and not taking 1
            
            // Because it this array we are not taking it self.
        }

        return answer;
        
    }
};