#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, c, area, sa;
    while(1){
        cin >> a;
        if (a==0)break;
        cin >> b >> c;
           area = (a*b*100)/c;
            sa = sqrt(area);
            cout << sa << endl;
    }

    return 0;
}
