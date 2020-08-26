//
// Created by LCX on 2020/8/25.
//

#include <stdio.h>

//const double PI = 3.14159;   c99
#define PI 3.14159   //c99之前
#define FORMAT "%f\n"
#define PI2 2*PI
//多行宏定义
#define PRT printf("%f ",PI); \
            printf("%f\n",PI2)


int main()
{

    //printf(FORMAT,PI2*3.0);
    PRT;
    return 0;
}