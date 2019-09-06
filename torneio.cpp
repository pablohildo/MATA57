#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;

typedef struct{
    string  nome;
    int poder;
} guerreiro;

bool compareWarrior(guerreiro a, guerreiro b) {
    return a.poder > b.poder;
}

int main(int argc, char const *argv[])
{
    int n, j, k;
    string p;
    cin >> j >> k;
    vector<guerreiro> guerreiros;
    guerreiro aux;
    for (int i = 0; i < j; i++)
    {
        cin >> p >> n;
        aux.nome = p;
        aux.poder = n;
        guerreiros.push_back(aux);
    }

    sort(guerreiros.begin(), guerreiros.end(), compareWarrior);
    for (int i = 0; i < k; i++)
    {
        cout << guerreiros[i].nome << " " << guerreiros[i].poder << endl;
    }
    
    return 0;
}

