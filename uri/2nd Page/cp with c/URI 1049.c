#include<stdio.h>
int main()
{
    char a[100], b[100], c[100];
    scanf("%s %s %s", a, b, c);
    if(strcmp(a,"vertebrado") == 0){
        if(strcmp(b,"ave") == 0){
            if(strcmp(c,"carnivoro") == 0){
                printf("aguia\n");
            }
            else if(strcmp(c,"onivoro") == 0){
                printf("pomba\n");
            }
        }
        else if(strcmp(b,"mamifero") == 0){
            if(strcmp(c,"onivoro") == 0){
                printf("homem\n");
            }
            else if(strcmp(c,"herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(a,"invertebrado") == 0){
        if(strcmp(b,"inseto") == 0){
            if(strcmp(c,"hematofago") == 0){
                printf("pulga\n");
            }
            else if(strcmp(c,"herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(b,"anelideo") == 0){
            if(strcmp(c,"hematofago") == 0){
                printf("sanguessuga\n");
            }
            else if(strcmp(c,"onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }
    return 0;
}








//#include <stdio.h>
//int main() {
//    char a[100],b[100],c[100];
//    scanf("%s %s %s", a, b, c);
//    if(strcmp(a,"vertebrado") == 0)   //The strcmp() function compares two strings and returns 0 if both strings are identical.
//    {
//        if(strcmp(b,"ave") == 0)
//        {
//            if(strcmp(c,"carnivoro")==0)
//            {
//                printf("aguia\n");
//            }
//            else if(strcmp(c,"onivoro") == 0)
//            {
//                printf("pomba\n");
//            }
//        }
//        else if(strcmp(b,"mamifero") == 0)
//        {
//            if(strcmp(c,"onivoro") == 0)
//            {
//                printf("homem\n");
//            }
//            else if(strcmp(c,"herbivoro") == 0)
//            {
//                printf("vaca\n");
//            }
//        }
//    }
//    else if(strcmp(a,"invertebrado") == 0)
//    {
//        if(strcmp(b,"inseto") == 0)
//        {
//            if(strcmp(c,"hematofago") == 0)
//            {
//                printf("pulga\n");
//            }
//            else if(strcmp(c,"herbivoro") == 0)
//            {
//                printf("lagarta\n");
//            }
//        }
//        else if(strcmp(b,"anelideo" )== 0)
//        {
//            if(strcmp(c,"hematofago") == 0)
//            {
//                printf("sanguessuga\n");
//            }
//            else if(strcmp(c,"onivoro") == 0)
//            {
//                printf("minhoca\n");
//            }
//        }
//    }
//    return 0;
//}

///Bootforce doesn't Work

//#include<stdio.h>
//int main()
//{
//    char a[100], b[100], c[100];
//    scanf("%s %s %s", &a, &b, &c);
//    if(a[100] == "vertebrado"){
//
//        if(b[100] == "ave"){
//
//            if(c[100] == "carnivoro"){
//                printf("aguia");
//            }
//            else{
//                printf("pomba");
//            }
//        }
//        else if(b[100] == "mamifero"){
//
//            if(c[100] == "onivoro"){
//                printf("homem");
//            }
//            else{
//                printf("vaca");
//            }
//        }
//    }
//    else{
//        printf("Pora");
//    }
//
//    return 0;
//}


