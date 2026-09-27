#include <stdio.h>
int length_of_string(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char s[100];
    int length;
    printf("Enter a string: ");
    scanf("%s", s);
    length = length_of_string(s);
    printf("The length of %s is %d\n", s, length);
    return 0;
}
