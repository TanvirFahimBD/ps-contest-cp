#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a, aw = 2, b, bw = 3, c, cw = 5;
    cin >> a >> b >> c;
    float avg = ((a*aw)+(b*bw)+(c*cw))/(aw+bw+cw);
    cout << "MEDIA = " << fixed << setprecision(1)<< avg << endl;

    return 0;
}
