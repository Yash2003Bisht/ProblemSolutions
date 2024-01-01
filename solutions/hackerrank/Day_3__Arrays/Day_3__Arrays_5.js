// QUESTION URL: https://www.hackerrank.com/challenges/js10-arrays/problem
// STATUS: Wrong Answer



function getSecondLargest(nums) {
    nums.sort();

    for (let i=nums.length - 2; i>=0; i--){
        if (nums[i] < nums[i+1])
            return nums[i];
    }

}

