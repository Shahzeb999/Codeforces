#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    unordered_set<int> s;

    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);

    cout <<4 - s.size();

    return 0;
}