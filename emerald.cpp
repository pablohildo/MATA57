#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, c, input;
    vector<int> list;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        list.push_back(input);
    }
    cin >> c;
    if(find(list.begin(), list.end(), c) != list.end()){
        cout << c << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
