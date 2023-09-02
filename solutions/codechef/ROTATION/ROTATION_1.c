// DATE: 01/09/2023, 08:35:01
// PROBLEM NAME: Fun with Rotation
// PROBLEM URL: https://www.codechef.com/problems/ROTATION
// PROBLEM DIFFICULTY RATTING: 1446
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.9M

#include <stdio.h>

int rotate_pos(char query, int dis, int size, int crr_idx){
    int idx, total;

    if (query == 67)
        idx = size > dis ? size-dis : size-(dis%size);
    else
        idx = size > dis ? dis : dis%size;

    total = crr_idx + idx;

    if (total >= size)
        return total % size;

    return total;

}

int get_idx(int position, int dis, int size){
    return dis < position ? size - position + dis : dis - position;
}

int main(void) {
    int n, m, d, idx, pos = 0;
    char query;
    scanf("%d%d", &n, &m);

    int a[n];

    for (int i=0; i<n; i++)
        scanf("%d ", &a[i]);

    for (int i=0; i<m; i++){
        scanf("%c %d\n", &query, &d);

        if (query == 82){
            idx = get_idx(pos, d-1, n);
            printf("%d\n", a[idx]);
        } else
            pos = rotate_pos(query, d, n, pos);

    }

    return 0;
}


