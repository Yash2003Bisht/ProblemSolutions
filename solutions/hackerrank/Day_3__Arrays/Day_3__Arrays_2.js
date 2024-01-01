// QUESTION URL: https://www.hackerrank.com/challenges/js10-arrays/problem
// STATUS: Accepted



function getSecondLargest(nums) {
    nums = Array.from(new Set(nums));
    nums.sort(function (a, b){
        return a-b;
    });
    return nums[nums.length - 2];
}

