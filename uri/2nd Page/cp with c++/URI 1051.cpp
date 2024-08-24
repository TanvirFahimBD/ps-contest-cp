//Mine First Try


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//
//    double a, b;
//    cin>>a;
//        if(a>=0 && a<=2000){
//             cout<<"Isento"<<endl;
//        }
//        else if(a>=2000.01 && a<=3000){
////            m1 = a-2000;
////            v1 = m1*(8/100);
//            a -= 2000;
//            b = a*0.8;
//        cout<< fixed << setprecision(2) <<"R$ "<<b<<endl;
//        }
//        else if(a>=3000.01 && a<=4500){
////            m1 = a-2000;
////            m2 = m1-1000;
////            v1 = (m1*(8/100));
////            v2 = (m2*(18/100));
////            v = v1 + v2;
//            a -= 3000;
//            b = a*.18+80;       //1000*.8=80
//        cout<< fixed << setprecision(2)<<"R$ "<<b<<endl;
//        }
//        else{
////            m1 = a-2000;
////            m2 = m1-1000;
////            m3 = m2-1500;
////            v1 = m1*(8/100);
////            v2 = m2*(18/100);
////            v3 = m3*(28/100);
////            v = v1 + v2 + v3;
//            a -= 4500;
//            b = a*.28+350;      //1500*.18+80=270+80=350
//        cout<< fixed << setprecision(2) <<"R$ "<<b<<endl;
//        }
//    return 0;
//}


//Mine 2nd Try


#include<bits/stdc++.h>
using namespace std;
int main(){

    double n, r, f1, f2, f3;
    cin>>n;
        if(n<=2000){
             cout<<"Isento"<<endl;
        }
        else{
            if(n>2000 && n<=3000){
                f1 = n - 2000;
                f1 = (f1*8)/100;
                r = f1;
            }
            else if(n>=3000.01 && n<=4500){
                f1 = n - 2000;
                f2 = f1 - 1000;
                f1 -= f2;           //Like --> 1002-2 = 1000
                f1 = (f1*8)/100;
                f2 = (f2*18)/100;
                r = f1+f2;
            }
            else{
                f1 = n - 2000;
                f2 = f1 - 1000;
                f3 = f2 - 1500;
                f1 -= f2;
                f2 -= f3;
                f1 = (f1*8)/100;
                f2 = (f2*18)/100;
                f3 = (f3*28)/100;
                r = f1+f2+f3;
            }
        cout<< fixed << setprecision(2) <<"R$ "<<r<<endl;
        }
    return 0;
}




//Other CODE 1



//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//    double a,b;
//    cin>>a;
//    if(a>=0 && a<=2000){
//        cout<<"Isento"<<endl;
//    }else if(a>=2000.01 && a<=3000){
//        a-=2000;
//        b= a*.08;
//        cout<<fixed;
//        cout<<setprecision(2)<<"R$ "<<b<<endl;
//    }else if(a>=3000.01 && a<=4500){
//        a-=3000;
//        b= a*.18+80;
//        cout<<fixed;
//        cout<<setprecision(2)<<"R$ "<<b<<endl;
//    }else{
//        a-=4500;
//        b= a*.28+350;
//        cout<<fixed;
//        cout<<setprecision(2)<<"R$ "<<b<<endl;
//    }
//
//    return 0;}


//Other CODE 2


//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
// float n, r, f1, f2, f3;
// cin >> n;
//
// if(n <= 2000){
//  cout << "Isento" << endl;
// }else{
//  if(n > 2000 && n <= 3000){
//   f1 = n - 2000;
//   f1 = ((f1 * 8) / 100);
//   r = f1;
//  }else if(n > 3000 && n <= 4500){
//   f1 = n - 2000;
//   f2 = f1 - 1000;
//   f1 -= f2;
//   f1 = ((f1 * 8) / 100);
//   f2 = ((f2 * 18) / 100);
//   r = f2 + f1;
//  }else{
//   f1 = n - 2000;
//   f2 = f1 - 1000;
//   f3 = f2 - 1500;
//   f1 -= f2;
//   f2 -= f3;
//   f1 = ((f1 * 8) / 100);
//   f2 = ((f2 * 18) / 100);
//   f3 = ((f3 * 28) / 100);
//   r = f3 + f2 + f1;
//  }
//
//  cout << "R$ " << fixed << setprecision(2) << r << endl;
// }
//
// return 0;
//}



