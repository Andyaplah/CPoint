//
// Created by LCX on 2020/8/22.
//

#include <stdio.h>

void swap(int *pa,int *pb){
    int index;
    index = *pa;
    *pa = *pb;
    *pb = index;
}

int main()
{

    int a = 5;
    int b = 6;
    swap(&a,&b);
    printf("a = %d, b = %d\n",a,b);

    int *pa = &a;
    printf("how = %d\n",*pa);
    return 0;
}

