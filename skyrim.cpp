#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n, qtd;
    cin >> n;
    map<string, int> soulGems;
    string type;
    map<string, int> ::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin >> type >> qtd;
        if (soulGems.count(type) > 0){
            soulGems[type] += qtd;
        } else {
            soulGems[type] = qtd;
        }
    }
    for (it = soulGems.begin(); it != soulGems.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}