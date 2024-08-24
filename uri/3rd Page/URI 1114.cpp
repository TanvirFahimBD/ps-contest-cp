#include<iostream>
using namespace std;

int main()
{
    while(1)
    {
        int pass;
        cin >> pass;
        if(pass == 2002){
            cout << "Acesso Permitido" << endl;
            break;
        }else{
            cout << "Senha Invalida" << endl;
        }
    }

    return 0;
}
