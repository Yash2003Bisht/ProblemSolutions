// QUESTION URL: https://www.hackerrank.com/challenges/js10-switch/problem
// STATUS: Accepted



function getLetter(s) {
    const char = s.charAt(0)
    switch (char){
        case "a" || "e" || "i" || "o" || "u":
            return "A"
        case "b" || "c" || "d" || "f" || "g":
            return "B"
        case "h" || "j" || "k" || "l" || "m":
            return "C"
        default:
            return "D"
    }
}

