#include<bits/stdc++.h>
using namespace std;
int main(){

    int s, sd1, sd2, d1, d2, d3, d4, h1, h2, h3, h4, m1, m2, m3, s1, s2, s3;
    char str1[10], str2[10], c1, c2, c3, c4;
    cin>>str1>>d1;
    cin>>h1>>c1>>m1>>c2>>s1;

    cin>>str2>>d2;
    cin>>h2>>c3>>m2>>c4>>s2;

    sd1 = (86400*d1)+(3600*h1)+(60*m1)+s1;
    sd2 = (86400*d2)+(3600*h2)+(60*m2)+s2;
    s = sd2 - sd1;

    d3 = s/86400;
    d4 = s%86400;
    cout<<d3<<" dia(s)"<<endl;
    h3 = d4/3600;
    h4 = d4%3600;
    cout<<h3<<" hora(s)"<<endl;
    m3 = h4/60;
    cout<<m3<<" minuto(s)"<<endl;
    s3 = h4%60;
    cout<<s3<<" segundo(s)"<<endl;

    return 0;
}

