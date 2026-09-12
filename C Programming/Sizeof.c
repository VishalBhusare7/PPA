#include <stdio.h>

int main()
{

    char ch = 'A';
    int value = 11;
    float no = 3.24f;
    double d = 90.785634;

    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(value));
    printf("%d\n", sizeof(no));
    printf("%d\n", sizeof(d));

    return 0;
}