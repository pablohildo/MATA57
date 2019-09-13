#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, l, input, dead = 0;
    queue<int> myMon;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        myMon.push(input);
    }
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        if (!myMon.empty())
        {
            cin >> input;
            if (myMon.front() >= input)
            {
                myMon.push(myMon.front());
                myMon.pop();
            } else {
                dead++;
                myMon.pop();
            }
        }
    }
    cout << dead << endl;
    return 0;
}
