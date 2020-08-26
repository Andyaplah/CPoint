//
// Created by LCX on 2020/8/26.
//

#include <stdio.h>

//void f(void)
//{
//    printf("in f()\n");
//}

void f(int i)
{
    printf("in f(),%d\n",i);
}

void g(int i)
{
    printf("in g(),%d\n",i);
}

void h(int i)
{
    printf("in h(),%d\n",i);
}

int main()
{
//    int i = 20;
//    int *pi = &i;
//    printf("%p\n",pi);
//    *pi = 200;
//    printf("%p\n",main);
//    printf("%p\n",f);
//    void(*pf)(void) = f;
//    printf("%p\n",pf);
//    printf("-----------------\n");
//    f();
//    (*pf)();


//    printf("%p\n",f);
//    void(*pf)(int) = f;
//    printf("%p\n",pf);
//    printf("-----------------\n");
//    f(1);
//    (*pf)(1);


    //用处1:
    int i = 0;
    void (*fa[])(int) = {f,g,h};
    scanf("%d",&i);
    if(i >= 0 && i < sizeof(fa)/ sizeof(fa[0]))
    {
        (*fa[i])(0);
    }
    return 0;
}