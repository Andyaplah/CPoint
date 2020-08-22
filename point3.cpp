//
// Created by LCX on 2020/8/22.
//

#include <stdio.h>

int divide(int a, int b, int *result);

int divide(int a, int b, int *result)
{
    int ret = 1;
    if(b == 0)
        return 0;
    else
        *result = a / b;
    return ret;
}

int main()
{
    int a = 5;
    int b = 2;
    int c;
    if(divide(a,b,&c))
        printf("%d/%d=%d\n",a,b,c);
    return 0;
}