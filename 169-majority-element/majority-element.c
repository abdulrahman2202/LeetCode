int majorityElement(int* nums, int numsSize) {
    int candidate = 0; 
    int votecount = 0;

    for(int i = 0;i<numsSize;i++){
        if(votecount == 0){
            candidate = nums[i]; // assigning the value to the candidate
        }
        if(nums[i] == candidate){ // checking repeating candidate
            votecount++; // if find then add the count
        }else{
            votecount--;// if not then cancel the count with new value
        }
    }
    return candidate;
}