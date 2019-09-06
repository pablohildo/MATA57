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
    int necessarias = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        estatuas.push_back(input);
    }
    sort(estatuas.begin(), estatuas.end());
    for (int i = 0; i < n; i++)
    {
        if(i!=0 && estatuas[i]!=estatuas[i-1]+1) necessarias += estatuas[i] - estatuas[i-1] - 1;       
        // cout << "A: " << estatuas[i] << " | B: " << estatuas[i+1] << " | SUB: " << estatuas[i] - estatuas[i-1] - 1 << endl;   }
    }
    cout << necessarias << endl;
}
