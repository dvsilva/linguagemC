#include<stdio.h>
int main(){
    int x=20, y, z, w;
        while ( x < 23){
        z = ++x;
        y = x++;
        w = z--;
        printf("\n  X=%d  Y=%d  Z=%d  W=%d",x,y,z,w);
        }
        getch();
}

