#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
        float num1, num2, num3, avg;
        cin >> num1 >> num2 >> num3;
        avg = ((num1*2) + (num2*3) + (num3*5))/(2+3+5);
        cout << fixed << setprecision(1) << avg << endl;
        t--;
    }

    return 0;
}


//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    float a, b, c, avg;
//    for(int i = 0; i < n; i++){
//        cin >> a >> b >> c;
//        avg = ((a*2)+(b*3)+(c*5)) / (2+3+5);
//        printf("%.1f\n", avg);
//    }
//
//    return 0;
//}










