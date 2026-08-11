int reverse(int x){
    long long reverse = 0;
    while(x!=0){
        reverse = (reverse * 10) + (x%10);
        x = x/10;
    }

    // checking if the value is not more then or less then 32 bit if true then return 0
    if(reverse> INT_MAX || reverse< INT_MIN){
        return 0;
    }

    return reverse;
}