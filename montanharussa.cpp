#include <iostream>
#include <queue>

using namespace std;

typedef struct {
    int id;
    int dinheiro;
} Pessoa;

int main(int argc, char const *argv[])
{
    int n, m, x;
    Pessoa aux;
    queue<Pessoa> pessoas;   
    cin >> n >> m >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> aux.id >> aux.dinheiro;
        if (aux.dinheiro >= x) pessoas.push(aux);
    }
    while (m > 0)
    {
        if (pessoas.front().dinheiro >= x){
            pessoas.front().dinheiro -= x;
            if(pessoas.front().dinheiro != 0) pessoas.push(pessoas.front());
        } 
        pessoas.pop();
        m--;
    }
    if (pessoas.empty()) cout << "SEM FILA" << endl;
    else {
        while (!pessoas.empty())
        {
            cout << pessoas.front().id << " " << pessoas.front().dinheiro << endl;
            pessoas.pop();
        }
    }
    return 0;
}
