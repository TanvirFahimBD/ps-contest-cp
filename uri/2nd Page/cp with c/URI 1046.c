#include<stdio.h>
int main()
{
    int x, y, t, t1;
    scanf("%d %d", &x, &y);
        t = y-x;
    if(x>y){
        t1 = 24+t;
        printf("O JOGO DUROU %d HORA(S)\n",t1);
    }
    else if(x == y){
        printf("O JOGO DUROU 24 HORA(S)\n");    //24 - x/y this does works only for output but condision is not right
    }
    else{
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    return 0;
}
