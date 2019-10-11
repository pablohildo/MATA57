#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n, m;
    string input1, input2;
    map<string, string> dicionario;
    map<string, string> ::iterator it;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input1 >> input2;
        dicionario[input1] = input2;        
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> input1;
        it = dicionario.find(input1);
        if (it != dicionario.end()) {
            cout << (*it).second;
        } else {
            cout << input1;
        }
        if (i != m-1) cout << " ";
    }
    cout << endl;
}