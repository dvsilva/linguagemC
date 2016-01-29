#include<stdio.h>
main()
{
int x, y, z;
x = 1;
z = ++x;
y = x++;
printf("\n  %d  %d  %d ", y, z, x);
getch();      
}
