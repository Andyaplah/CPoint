//
// Created by LCX on 2020/8/22.
//
#include <stdio.h>

void minmax(int a[],int len, int *max,int *min);

void minmax(int a[],int len, int *max,int *min)
{
    *max = *min = a[0];
    for (int i = 1; i < len; ++i) {
        if (a[i] < *min)
            *min = a[i];
        if (a[i] > *max)
            *max = a[i];
    }
}


int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,15,16,17,21,22,23,55};
    int max,min;
    minmax(a, sizeof(a)/ sizeof(int),&max,&min);
    printf("max = %d, min = %d\n",max,min);
    return 0;
}
