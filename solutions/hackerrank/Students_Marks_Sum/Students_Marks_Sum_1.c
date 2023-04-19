// QUESTION URL: https://www.hackerrank.com/challenges/students-marks-sum/problem
// STATUS: Accepted



//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int total = 0;
    
    if (gender == 'g'){
        for (int i=0; i<number_of_students; i++){
            if (i%2 != 0)
                total += marks[i];
        }
    } else {
        for (int i=0; i<number_of_students; i++){
            if (i%2 == 0)
                total += marks[i];
        }
    }
    
    return total;
    
}

