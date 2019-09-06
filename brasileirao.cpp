#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string input;
    cin >> n;
    vector<string> times;
    for (int i = 0; i <= n; i++)
    {
        getline(cin, input);
        times.push_back(input);
    }
    for (int j = 1; j <= (times.size()/2); j++)
    {
        cout << times[j] << " X " << times[n-j+1] << endl;
    }
    
    return 0;
}
