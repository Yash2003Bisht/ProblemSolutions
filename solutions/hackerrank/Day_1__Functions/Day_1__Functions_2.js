// QUESTION URL: https://www.hackerrank.com/challenges/js10-function/problem
// STATUS: Accepted


/*
 * Create the function factorial here
 */

function factorial(n){
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

