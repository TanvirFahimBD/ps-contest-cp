#include<stdio.h>
int main()
{
    int pc, qn;
    double t1, t2, t3, t4, t5;
    scanf("%d %d", &pc, &qn);
    if(pc==1){
        t1 = (float)qn*4.00;
        printf("Total: R$ %.2lf\n", t1);
    }
    else if(pc==2){
        t2 = (float)qn*4.50;
        printf("Total: R$ %.2lf\n", t2);
    }
    else if(pc==3){
        t3 = (float)qn*5.00;
        printf("Total: R$ %.2lf\n", t3);
    }
    else if(pc==4){
        t4 = (float)qn*2.00;
        printf("Total: R$ %.2lf\n", t4);
    }
    else{
        t5 = (float)qn*1.50;
        printf("Total: R$ %.2lf\n", t5);
    }
    return 0;
}
