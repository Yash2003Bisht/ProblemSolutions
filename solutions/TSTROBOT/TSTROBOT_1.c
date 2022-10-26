// QUESTION URL: https://www.codechef.com/problems/TSTROBOT

#include <stdio.h>
int main ()
{
    int T;
    scanf ("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N, X;
        scanf ("%d%d", &N, &X);
        int min, max;
        min = max = X;
        char c;
        for (int i = 0; i < N; i++)
        {
            scanf (" %c", &c);
            if (c == 'R')
            {
                X++;
                if (X > max)
                {
                    max = X;
                }
            }
            else
            {
                X--;
                if (X < min)
                {
                    min = X;
                }
            }
        }
        printf ("%d\n", max - min + 1);
    }
    return 0;
}

