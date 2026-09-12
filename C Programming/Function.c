#include <stdio.h>

int Addition(int value1, int value2)
{

    int result = 0;

    result = value1 + value2;

    return result;

}

int main()
{

    int no1 = 10;
    int no2 = 11;
    int ans = 0;

    ans = Addition(no1 , no2);

    printf("Addition is : %d\n", ans);

    return 0;

}