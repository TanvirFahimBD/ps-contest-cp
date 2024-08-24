#include<stdio.h>
int main()
{
    double a, b , c, d, e, m, mf;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m = ((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    printf("Media: %.1lf\n", m);
    if(m>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(m>=5.0){    //4.9 or less how goes under this condition need to find it.
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        mf = (m+e)/2;
        if(mf>=5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",mf);
    }

    else if(m<5.0){
        printf("Aluno reprovado.\n");
    }
    return 0;
}
