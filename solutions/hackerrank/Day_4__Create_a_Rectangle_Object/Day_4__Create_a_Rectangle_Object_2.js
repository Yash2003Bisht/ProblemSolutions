// QUESTION URL: https://www.hackerrank.com/challenges/js10-objects/problem
// STATUS: Accepted



/*
 * Complete the Rectangle function
 */
function Rectangle(a, b) {
    const obj = {
        length: a,
        width: b,
        perimeter: 2*(a+b),
        area: a*b
    }
    return obj;
}

