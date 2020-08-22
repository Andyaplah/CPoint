//
// Created by LCX on 2020/8/22.
//

#include <stdio.h>

int main()
{
    int min = 4;
    int *pmin = &min;
    printf("*pmin = %d\n",*pmin);
    printf("pmin[0] = %d\n",pmin[0]);
    //int min[1]

    return 0;
}