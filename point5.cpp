//
// Created by LCX on 2020/8/24.
//

#include <stdio.h>


int main()
{
    char ac[] = {0,1,2,3,4,5,6,7,8,9};
    char *p = ac;
    int i;
    for (int i = 0; i < sizeof(ac) / sizeof(char); ++i) {
        printf("%d\n",ac[i]);
    }
    printf("--------------\n");
    int ai[] = {0,1,2,3,4,5,6,7,8,9,-1};
    //int *q = ai;
    int *q = ai;
    while (*q!=-1)
    {
        printf("%d\n",*q++);
    }

    return 0;
}