//
// Created by LCX on 2020/8/25.
//

#include <stdio.h>

struct date{
    int month;
    int day;
    int year;
}myday;

int main()
{
    struct date *p = &myday;
    (*p).month = 12;
    p->month = 12;
    return 0;
}