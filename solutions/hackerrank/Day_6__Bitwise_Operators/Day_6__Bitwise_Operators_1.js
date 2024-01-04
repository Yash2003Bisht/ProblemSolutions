// QUESTION URL: https://www.hackerrank.com/challenges/js10-bitwise/problem
// STATUS: Accepted



function getMaxLessThanK(n, k){
    let maxNum = 0;
    for (let i=1; i<n; i++){
        for (let j=i+1; j<=n; j++){
            const num = i & j;
            if (num < k){
                maxNum = maxNum > num ? maxNum : num;
            }
        }
    }

    return maxNum;

}

