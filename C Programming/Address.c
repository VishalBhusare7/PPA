#include <stdio.h>

int main()
{

    int no = 11;

    printf("%d\n", no); //21
    printf("%d\n", sizeof(no)); //4
    printf("%p\n", &no); //Assumed 100

    return 0;
}