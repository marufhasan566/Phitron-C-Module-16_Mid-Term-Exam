// 01. This function has both return and parameter
// #include <stdio.h>
// int summation(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int result = summation(a, b);
//     printf("Sum = %d\n", result);
//     return 0;
// }

// 02. This function has parameter but no return
// #include <stdio.h>
// void even_odd(int a)
// {
//     if (a % 2 == 0)
//     {
//         printf("Even\n");
//     }
//     else
//     {
//         printf("Odd\n");
//     }
// }
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     even_odd(a);
//     return 0;
// }

// 03. This function has return but no parameter
// #include <stdio.h>
// #include <limits.h>
// int findMax(void)
// {
//     int count;
//     scanf("%d", &count);
//     int arr[count];
//     int max = INT_MIN;
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int main()
// {
//     int result = findMax();
//     printf("%d", result);
//     return 0;
// }

// 04. This function has no parameter and no return
#include <stdio.h>
#include <limits.h>
void findMin(void)
{
    int count;
    scanf("%d", &count);
    int arr[count];
    int Min = INT_MAX;
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    printf("%d", Min);
}
int main()
{
    findMin();
    return 0;
}