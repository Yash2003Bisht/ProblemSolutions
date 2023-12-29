// QUESTION URL: https://www.hackerrank.com/challenges/js10-loops/problem
// STATUS: Accepted



/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    const vowel = ["a", "e", "i", "o", "u"];
    
    for (let i=0; i<s.length; i++){
        for (let j=0; j<vowel.length; j++){
            if (s[i] == vowel[j]){
                console.log(s[i]);
                break;
            }
        }
    }

    for (let i=0; i<s.length; i++){
        let equal = false;
        for (let j=0; j<vowel.length; j++){
            if (s[i] == vowel[j]){
                equal = true;
                break;
            }
        }
        if (!equal)
            console.log(s[i]);
    }
}

