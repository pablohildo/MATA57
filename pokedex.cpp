#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    float count = .0;
    string input = " ";
    map<string, float> pokedex;
    map<string, float> ::iterator it;
    cin >> input;
    while (input != "FIM")
    {
        pokedex[input]++;
        count++;
        cin >> input;
    }

    for (it = pokedex.begin(); it != pokedex.end(); it++)
    {
        cout << (*it).first << " " << fixed << setprecision(2) << ((*it).second*100)/count << endl;
    }
}