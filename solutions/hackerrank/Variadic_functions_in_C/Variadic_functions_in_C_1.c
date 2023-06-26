// QUESTION URL: https://www.hackerrank.com/challenges/variadic-functions-in-c/problem
// STATUS: Accepted


#define get_max(a, b)(a>b?a:b)
#define get_min(a, b)(a>b?b:a)

// Variadic Function
// https://www.geeksforgeeks.org/variadic-functions-in-c/

int  sum (int count,...) {
    int total = 0;
    va_list ptr;  // argument list pointer
    
    // initialize arguemnt to the list pointer
    va_start(ptr, count);
    
    for (int i=0; i<count; i++)
        total += va_arg(ptr, int);
    va_end(ptr);

    return total;
}

int min(int count,...) {
    int min_value = MAX_ELEMENT, temp;
    va_list ptr;  // argument list pointer

    // initialize arguemnt to the list pointer
    va_start(ptr, count);
    
    for (int i=0; i<count; i++){
        temp = va_arg(ptr, int);
        min_value = get_min(temp, min_value);
    }
    va_end(ptr);

    return min_value;
}

int max(int count,...) {
    int max_value = MIN_ELEMENT, temp;
    va_list ptr;  // argument list pointer

    // initialize arguemnt to the list pointer
    va_start(ptr, count);
    
    for (int i=0; i<count; i++){
        temp = va_arg(ptr, int);
        max_value = get_max(temp, max_value);
    }
    va_end(ptr);

    return max_value;
}

