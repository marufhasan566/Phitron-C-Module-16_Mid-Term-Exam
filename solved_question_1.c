#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int digit = 1;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= digit; j++)
        {
            printf("%d", j);
        }
        if (i < n)
        {
            space--;
            digit += 2;
        }
        else
        {
            space++;
            digit -= 2;
        }
        printf("\n");
    }

    return 0;
}