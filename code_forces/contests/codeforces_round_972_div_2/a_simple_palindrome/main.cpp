#include <iostream>

using namespace std;

int main()
{
    int n,str_value;
    string str;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str_value;
        str = "";
        for (int j = 0; j <str_value; j++) {
            str += vowels[j%5];
        }
        cout << str << endl;
    }
}
