//
// Created by LCX on 2020/8/26.
//

#include <stdio.h>

int plus(int a, int b)
{
    return a+b;
}

int minus(int a, int b)
{
    return a-b;
}

//第二个用法
void cat(int (*f)(int, int))
{
    printf("%d\n",(*f)(2,3));
}


int main()
{
    cat(plus);
    cat(minus);
    return 0;
}