#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return 0; // not palindrome
        }
    }
    return 1; // palindrome
}

int main()
{
    char str[100];
    scanf("%s", str);
    if (is_palindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
