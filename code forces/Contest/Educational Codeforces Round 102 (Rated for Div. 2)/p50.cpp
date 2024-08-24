///C++ Bangla Tutorials 64

#include<iostream>
#include<conio.h>
using namespace std;

//int x = 10; //Global variable
//
//void display()
//{
//    cout<<"Display x : "<<x<<endl;
//}
//
//int main()
//{
//    int x = 40; //local variable
//    cout<<"Main x : "<<x<<endl;
//    display();
//    getch();
//}


//
//int x = 10; //Global variable
//
//int main()
//{
//    int x = 40; //local variable & its priority more
//    cout<<"Main x : "<<x<<endl;

//    getch();
//}


//
//int y = 10; //Global variable & scope resolution operator it priority
//
//int main()
//{
//    int x = 40; //local variable
//    cout<<"Global y : "<<:: y<<endl;  //scope resolution operator
//    getch();
//}
//

int x = 10;
int main()
{
    int x = 40;
    :: x = 200;
    cout<<"Global x : "<<:: x<<endl;
    getch();
}
























