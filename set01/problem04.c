#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("%d is the largest number\n", a);
    } 
    else if (b >= b && b >= c) {
        printf("%d is the largest number\n", b);
    } 
    else {
        printf("%d is the largest number\n",c);
    }
    return 0;
}
