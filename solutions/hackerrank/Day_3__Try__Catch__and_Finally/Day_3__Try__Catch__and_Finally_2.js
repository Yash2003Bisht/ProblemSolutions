// QUESTION URL: https://www.hackerrank.com/challenges/js10-try-catch-and-finally/problem
// STATUS: Accepted



/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    try {
        const reverse_s = s.split('').reverse().join('');
        console.log(reverse_s);
    } catch(error){
        console.log(error.message);
        console.log(s);
    }
}

