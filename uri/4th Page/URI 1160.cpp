#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
        int pa, pb, y = 0;
        double g1, g2;
        cin >> pa >> pb >> g1 >> g2;
            while(pa<=pb){
                pa = pa + (pa*g1)/100;
                pb = pb + (pb*g2)/100;
                y++;
                if(y>100){
                    cout << "Mais de 1 seculo." << endl;
                    break;
            }
        }
            if(y<=100) cout << y << " anos." << endl;
        t--;
    }

    return 0;
}
