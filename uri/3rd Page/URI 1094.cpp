#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t, n, c = 0, r = 0, s = 0, total = 0;
    float pc, pr, ps;
    char ch;
    cin >> t;
    while(t>0){
        cin >> n >> ch;
        if(ch == 'C'){
            c += n;
        }else if(ch == 'R'){
            r += n;
        }else{
            s += n;
        }
        t--;
    }

    total = c + r + s;
    pc = ((float)c/total)*100;
    pr = ((float)r/total)*100;
    ps = ((float)s/total)*100;
    cout <<"Total: "<<total<<" cobaias"<< endl;
    cout <<"Total de coelhos: "<<c<< endl;
    cout <<"Total de ratos: "<<r<< endl;
    cout <<"Total de sapos: "<<s<< endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << pc << " %" << endl;
    cout << fixed << setprecision(2) <<"Percentual de ratos: " << pr << " %" << endl;
    cout << fixed << setprecision(2) <<"Percentual de sapos: " << ps << " %" << endl;

    return 0;
}
