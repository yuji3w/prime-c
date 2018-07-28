#include <stdio.h>
#include <stdlib.h>

unsigned long long trial = 1234567890;

int main()
{
    unsigned long long *p = malloc(sizeof(unsigned long long)*2048);
    for(int x = 0; x < 2048; x++){
        p[x] = 0;
    }
    p[0] = trial;
    int flag = 1;
    for(unsigned long long x = 2; x <= p[0]; x++){
        while(p[0]%x == 0){
            p[0] /= x;
            p[flag++] = x;
        }
    }
    for(int x = 1; x < flag-1; x++){
        printf("%d*",p[x]);
    }
    printf("%d",p[flag-1]);
    free(p);
}
