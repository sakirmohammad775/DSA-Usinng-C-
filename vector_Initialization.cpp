#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v(100);
    // vector<int>v(10,3);
    // vector<int>v2(v);
    vector<int>v;
    v.push_back(1);
    v.push_back(20);
    v.push_back(3);
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    cout << v[1] << endl;


    return 0;
}