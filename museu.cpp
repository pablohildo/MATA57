// WIP
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector <int> estatuas;
    int input;
    int necessarias;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        estatuas.push_back(input);
    }
    sort(estatuas.begin(), estatuas.end());
    reverse(estatuas.begin(), estatuas.end());
    for (int i = 0; i < n/2; i++)
    {
        necessarias += estatuas[i] - estatuas[i+1] - 1;       
    }
    cout << necessarias << endl;
    return 0;
}
