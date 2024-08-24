#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int count = 1, sum = 0;
    while(count<=3){
        getline(cin, str);
        if(str[0]=='c'){
            cout << sum << endl;
            count++;
            sum = 0;
        }else{
            if(str == "---") sum += 0;
            else if(str == "--*") sum += 1;
            else if(str == "-*-") sum += 2;
            else if(str == "-**") sum += 3;
            else if(str == "*--") sum += 4;
            else if(str == "*-*") sum += 5;
            else if(str == "**-") sum += 6;
            else if(str == "***") sum += 7;
        }
    }

    return 0;
}












//!!!!!!!!!!!!!!!!!!!! Need to explain properly !!!!!!!!!!!!!!!!!!
//#include<iostream>
//#include<bits/stdc++.h>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//
//    string ch;
//    int n=0, k=0;
//    for(;k!=3;){
//        getline(cin, ch);
//        if(ch[0]=='*'){
//            if(ch[1]=='-'){
//                if(ch[2]=='-')n+=4;
//                else n+=5;
//            }
//            else{
//                if(ch[2]=='-') n+=6;
//                else n+= 7;
//            }
//        }
//        else if(ch[0]=='-'){
//            if(ch[1]=='-'){
//                if(ch[2]=='-')n+=0;
//                else n+=1;
//            }
//            else{
//                if(ch[2]=='-')n+=2;
//                else n+=3;
//            }
//        }
//        if(ch[0]=='c'){
//            printf("%d\n",n);
//            k++;
//            n=0;
//        }
//    }
//
//    return 0;
//}
