#include<iostream>
#include<bits/stdc++.h>
#include<string.h>          //! String comparison header file
using namespace std;

int main()
{
        int n, i;
        char sh[10], rj[10];
        cin >> n;
        for(i=1; i<=n; i++){
            scanf("%s %s", &sh, &rj);
            if(!strcmp(sh, rj))              //! String comparison
            {
                cout << "Caso #" << i <<": De novo!" << endl;
            }

            else if (!strcmp(sh, "lagarto")){
                if(!strcmp(rj, "Spock") || !strcmp(rj, "papel")){
                    cout << "Caso #" << i <<": Bazinga!" << endl;
                }
                else if(!strcmp(rj, "tesoura") || !strcmp(rj, "pedra")){
                    cout << "Caso #" << i <<": Raj trapaceou!" << endl;
                }
            }

            else if (!strcmp(sh, "tesoura")){
                if(!strcmp(rj, "lagarto") || !strcmp(rj, "papel")){
                    cout << "Caso #" << i <<": Bazinga!" << endl;
                }else if(!strcmp(rj, "Spock") || !strcmp(rj, "pedra")){
                    cout << "Caso #" << i <<": Raj trapaceou!" << endl;
                }
            }

            else if (!strcmp(sh, "papel")){
                if(!strcmp(rj, "Spock") || !strcmp(rj, "pedra")){
                    cout << "Caso #" << i <<": Bazinga!" << endl;
                }
                else if(!strcmp(rj, "lagarto") || !strcmp(rj, "tesoura")){
                    cout << "Caso #" << i <<": Raj trapaceou!" << endl;
                }
            }

            else if (!strcmp(sh, "Spock")){
                if(!strcmp(rj, "tesoura") || !strcmp(rj, "pedra")){
                    cout << "Caso #" << i <<": Bazinga!" << endl;
                }
                else if(!strcmp(rj, "lagarto") || !strcmp(rj, "papel")){
                    cout << "Caso #" << i <<": Raj trapaceou!" << endl;
                }
            }

            else if (!strcmp(sh, "pedra")){
                if(!strcmp(rj, "tesoura") || !strcmp(rj, "lagarto")){
                    cout << "Caso #" << i <<": Bazinga!" << endl;
                }
                else if(!strcmp(rj, "Spock") || !strcmp(rj, "papel")){
                    cout << "Caso #" << i <<": Raj trapaceou!" << endl;
                }
            }
        }

    return 0;
}
