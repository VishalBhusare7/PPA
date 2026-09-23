#include<stdio.h>
int main()
{
    int Arr[] = {11, 21, 51, 101, 111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[3]);

    printf("%d\n", *q);  // Output: 101

    q = q - 3;

    printf("%d\n", *q); // Output: 11

    return 0;
}