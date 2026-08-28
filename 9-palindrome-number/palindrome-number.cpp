class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0){
        return false;
       }

       int temp = x;
       long long reverse = 0;// long interger so thats why using long long


       while(temp!=0){
        // reversing the number
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
       }

        // checking reverse
       return (reverse == x);
    }
};