#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int i = 0;

    printf("rand() is at %p\n",rand);

    srand(time(NULL));

    while(1){
        i = rand();
        printf("Number: %d\n",i);
        sleep(1);
    }
    return 0;
}