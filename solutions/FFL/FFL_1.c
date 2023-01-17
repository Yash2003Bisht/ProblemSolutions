// QUESTION URL: https://www.codechef.com/problems/FFL
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#define MIN(a, b) (a > b ? b : a)

int main(void)
{
    int t, n, s, player, p_cost, d_cost;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &n, &s);
        int price[n];
        s = 100 - s, p_cost = 100, d_cost = 100;

        for (int i = 0; i < n * 2; i++)
        {
            if (i < n)
                scanf("%d", &price[i]);
            else
            {
                scanf("%d", &player);

                if (player == 0)
                    d_cost = MIN(d_cost, price[i - n]);
                else
                    p_cost = MIN(p_cost, price[i - n]);
            }
        }

        if (p_cost + d_cost <= s)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}

