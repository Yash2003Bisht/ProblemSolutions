// DATE: 25/03/2023, 08:45:47
// PROBLEM NAME: Your Name is Mine
// PROBLEM URL: https://www.codechef.com/problems/NAME2
// PROBLEM DIFFICULTY RATTING: 1285
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

int subsequence_string(char arr1[], char arr2[], int size1, int size2){
    int i = 0, j = 0;

    while (i < size1 && j < size2){
        if (arr1[i] == arr2[j])
            i++;
        j++;
    }

    if (i == size1)
        return 1;
    
    return 0;

}

int main(void) {
    int t, flag, m_len, w_len;
    char m[25001], w[25001];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s %s", m, w);
        m_len = strlen(m), w_len = strlen(w);

        if (m_len < w_len)
            flag = subsequence_string(m, w, m_len, w_len);
        else
            flag = subsequence_string(w, m, w_len, m_len);

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



