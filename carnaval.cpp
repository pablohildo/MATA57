#include <iostream>
#include <queue>
#include <string>

using namespace std;

typedef struct
{
    string nome;
    char genero;
} Pessoa;
int main(int argc, char const *argv[])
{
    int n;
    queue<Pessoa> manR, womanR, manW, womanW;
    Pessoa aux;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> aux.nome >> aux.genero;
        womanW.push(aux);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> aux.nome >> aux.genero;
        manW.push(aux);
    }

    for (int i = 0; i < womanW.size(); i++)
    {
        if (womanW.front().genero == 'M')
        {
            womanR.push(womanW.front());
            womanW.pop();
        }    
    }

    for (int i = 0; i < manW.size(); i++)
    {
        if (manW.front().genero == 'H')
        {
            manR.push(manW.front());
            manW.pop();
        }    
    }

    while (!womanW.empty())
    {
        manR.push(womanW.front());
        womanW.pop();
    }

    while (!manW.empty())
    {
        womanR.push(manW.front());
        manW.pop();
    }
    
    cout << "Fila Feminina:" << endl;
    if (!womanR.empty())
    {
        while (!womanR.empty())
        {
            cout << womanR.front().nome << endl;
            womanR.pop();
        }
    }
    else
    {
        cout << "Vazia" << endl;
    }

    cout << "Fila Masculina:" << endl;

    if (!manR.empty())
    {
        while (!manR.empty())
        {
            cout << manR.front().nome << endl;
            manR.pop();
        }
    }
    else
    {
        cout << "Vazia" << endl;
    }
    return 0;
}
