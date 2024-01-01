// QUESTION URL: https://www.hackerrank.com/challenges/js10-arrays/problem
// STATUS: Wrong Answer



function getSecondLargest(nums) {
    nums = Array.from(new Set(nums));
    nums.sort(function (a, b){
        return a-b;
    });
    console.log(typeof nums[0]);
    return nums[nums.length - 2];
}

