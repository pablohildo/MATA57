#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, input;
    vector<int> ms;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        ms.push_back(input);
    }
    sort(ms.begin(), ms.end());
    cout << ms[floor(n/2)] << endl;    
    return 0;
}
