// DATE: 25/07/2023, 08:58:18
// PROBLEM NAME: Alternating subarray prefix
// PROBLEM URL: https://www.codechef.com/problems/ALTARAY
// PROBLEM DIFFICULTY RATTING: 1408
// STATUS: accepted
// TIME: 0.19
// MEMORY: 5.3M

// =========================================================
// =================== CHAT-GPT SOLUTION ===================
// =========================================================

#include <stdio.h>

// Function to find the lengths of the longest alternating subarrays for each x from 1 to N
void findLongestAlternatingSubarrays(int arr[], int N) {
    int lengths[N]; // Array to store the lengths of the longest alternating subarrays
    
    // Initialize lengths array with 1, as each element itself forms an alternating subarray of length 1
    for (int i = 0; i < N; i++) {
        lengths[i] = 1;
    }
    
    // Traverse from right to left to find the longest alternating subarray ending at each position
    for (int i = N - 2; i >= 0; i--) {
        if ((arr[i] > 0 && arr[i + 1] < 0) || (arr[i] < 0 && arr[i + 1] > 0)) {
            lengths[i] = lengths[i + 1] + 1;
        }
    }

    // Print the lengths of the longest alternating subarrays for each x from 1 to N
    for (int i = 0; i < N; i++) {
        printf("%d ", lengths[i]);
    }
    printf("\n");
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Size of the array
        scanf("%d", &N);
        
        int arr[N]; // Input array
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }
        
        // Find and print the lengths of the longest alternating subarrays for this test case
        findLongestAlternatingSubarrays(arr, N);
    }
    
    return 0;
}


