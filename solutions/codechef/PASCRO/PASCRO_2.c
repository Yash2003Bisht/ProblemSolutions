// DATE: 10/11/2023, 09:04:59
// PROBLEM NAME: Rock Paper Scissor
// PROBLEM URL: https://www.codechef.com/problems/PASCRO
// PROBLEM DIFFICULTY RATTING: 1226
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.7M

#include <stdio.h>

int chef_wins(int size, char *a, char *b, int *draw){
    int chef_points = 0;

    for (int i=0; i<size; i++){
        if ((a[i] == 'R' && b[i] == 'S') ||
            (a[i] == 'S' && b[i] == 'P') ||
            (a[i] == 'P' && b[i] == 'R'))
            chef_points++;
        else if ((a[i] == 'R' && b[i] == 'R') ||
                 (a[i] == 'S' && b[i] == 'S') ||
                 (a[i] == 'P' && b[i] == 'P'))
            *draw = *draw + 1;
    }

    return chef_points;

}

int main(void) {
    int t, n, chef_points, draw, points;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char a[n+1], b[n+1];
        scanf("%s", a);
        scanf("%s", b);

        draw = 0;
        chef_points = chef_wins(n, a, b, &draw);
        points = n - draw - chef_points;

        if (points >= chef_points)
            printf("%d\n", ((chef_points + points)/2 + 1) - chef_points);
        else
            printf("0\n");

    }

	return 0;
}



