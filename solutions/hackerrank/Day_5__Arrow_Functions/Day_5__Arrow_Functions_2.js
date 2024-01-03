// QUESTION URL: https://www.hackerrank.com/challenges/js10-arrows/problem
// STATUS: Accepted



/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 * 
 * Parameter(s):
 * nums: An array of numbers.
 */
function modifyArray(nums) {
    nums = nums.map((element) => (element%2 == 0 ? element * 2 : element * 3));
    return nums;
}

