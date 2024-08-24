#include<iostream>
using namespace std;

int main()
{
    int team1, team2, response, match = 0, goal1 = 0, goal2 = 0, draw = 0;
    while(1){
        cin >> team1 >> team2;
        if(team1 > team2) goal1++;
        else if(team1 < team2) goal2++;
        else draw++;
        cin>> response;
        if(response == 1) {
            match++;
            cout << "Novo grenal (1-sim 2-nao)" <<endl;
            continue;
        }
        if(response == 2) {
            match++;
            cout << "Novo grenal (1-sim 2-nao)" <<endl;
            break;
        }
    }
    cout << match << " grenais" << endl;
    cout << "Inter:" << goal1 << endl;
    cout << "Gremio:" << goal2 << endl;
    cout << "Empates:" << draw << endl;
    if(goal1 > goal2){
    cout << "Inter venceu mais" << endl;
    }
    if(goal2 > goal1){
    cout << "Gremio venceu mais" << endl;
    }

    return 0;

}
