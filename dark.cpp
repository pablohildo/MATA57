#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct {
    int d;
    int m;
    int a;
} Date;

bool dateComparator(Date a, Date b){
    if(a.a != b.a) return a.a < b.a;
    if(a.m != b.m) return a.m < b.m;
    if(a.d != b.d) return a.d < b.d;
}

int main(int argc, char const *argv[])
{
    int n;
    Date dateAux;
    vector<Date> dates;
    while (cin >> dateAux.d >> dateAux.m >> dateAux.a) {
        dates.push_back(dateAux);
    }
    sort(dates.begin(), dates.end(), dateComparator);
    for (int i = 0; i < dates.size(); i++)
    {
        cout << dates[i].d << " " << dates[i].m << " " << dates[i].a << endl;
    }
    return 0;
}

