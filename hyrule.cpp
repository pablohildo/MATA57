#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int q, p;
    string nome;
    map<string, int> inventario;
    map<string, int> ::iterator it;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> p;
        cin.ignore();
        getline(cin, nome);
        if (inventario.count(nome) == 0 || inventario[nome] < p){
                inventario[nome] = p;
        }
    }
    for (it = inventario.begin(); it != inventario.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}