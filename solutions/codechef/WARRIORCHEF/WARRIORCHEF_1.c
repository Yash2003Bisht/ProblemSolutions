// DATE: 21/09/2023, 08:08:17
// PROBLEM NAME: Warrior Chef
// PROBLEM URL: https://www.codechef.com/problems/WARRIORCHEF
// PROBLEM DIFFICULTY RATTING: 1433
// STATUS: accepted
// TIME: 0.07
// MEMORY: 1.8M

#include <stdio.h>

int get_max(int a[], int n){
    int value = 0;

    for (int i=0; i<n; i++){
        if (value < a[i])
            value = a[i];
    }

    return value;

}

int can_defeat_all(int n, int h, int a[], int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] <= x) {
            continue;
        } else{
            if (h > a[i]) {
                h -= a[i];
            } else {
                return 0;
            }
        }
    }
    return 1;
}

int find_min_resistance(int n, int h, int a[]) {
    int left = 0, right = get_max(a, n), result = 0, mid;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (can_defeat_all(n, h, a, mid)) {
            result = mid;
            right = mid - 1; 
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int t, n, h, resistance;
    scanf("%d", &t);

    while (t--) {
        scanf("%d%d", &n, &h);
        int a[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        resistance = find_min_resistance(n, h, a);
        printf("%d\n", resistance);

    }
    return 0;
}

