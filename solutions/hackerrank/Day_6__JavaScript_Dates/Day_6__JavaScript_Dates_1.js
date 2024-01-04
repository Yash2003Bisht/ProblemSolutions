// QUESTION URL: https://www.hackerrank.com/challenges/js10-date/problem
// STATUS: Accepted



// The days of the week are: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
function getDayName(dateString) {
    let dayName;
    const days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
    const date = new Date(dateString);
    dayName = days[date.getDay()];    
    return dayName;
}

