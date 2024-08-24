#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a, aw = 3.5, b, bw = 7.5;
    cin >> a >> b;
    float avg = ((a*aw)+(b*bw))/(aw+bw);
    cout << "MEDIA = " << fixed << setprecision(5)<< avg << endl;

    return 0;
}
