#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    string nome;
    int energia;
} Pacote;

bool comparePacotes(Pacote a, Pacote b){
    if(a.nome != b.nome) return a.nome < b.nome;
    return a.energia > b.energia;
}

int main(int argc, char const *argv[])
{
    int p;
    cin >> p;
    Pacote auxPacote;
    vector<Pacote> pacotes;
    for (int i = 0; i < p; i++)
    {
        cin >> auxPacote.nome >> auxPacote.energia;
        pacotes.push_back(auxPacote);
    }
    sort(pacotes.begin(), pacotes.end(), comparePacotes);
    for (int i = 0; i < p; i++)
    {
        cout << pacotes[i].nome << " " << pacotes[i].energia << endl;
    }
    return 0;
}
