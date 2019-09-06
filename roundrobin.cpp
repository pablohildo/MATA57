#include <queue>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, input;
    cin >> n >> m;
    queue<int> fila;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        fila.push(input);
    }
    for (int i = 0; i < m; i++)
    {
        if(!fila.empty()){
            int elemento = fila.front();
            fila.pop();
            elemento--;
            if(elemento != 0) fila.push(elemento);
        }
    }
    if(fila.empty()) cout << "pronto" << endl;
    else {
        cout << fila.size() << endl;
        while (!fila.empty())
        {
            cout << fila.front() << " ";
            fila.pop();
        }
        cout << endl;
    }
    return 0;
}
