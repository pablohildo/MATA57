#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v1, v2, v3;
    int input;
    bool isDimension;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            switch (i)
            {
            case 0:
                v1.push_back(input);
                break;
            case 1: 
                v2.push_back(input);
                break;
            case 2:
                v3.push_back(input);
                break;
            }
        }   
    }
    for (int i = 0; i < n; i++)
    {
        isDimension = v1[i] + v2[i] == v3[i];      
    }

    if(isDimension) cout << "OK" << endl;
    else cout << "NOPE :(" << endl;
    
    return 0;
}
