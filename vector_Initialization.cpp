#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6,7,8};
    v.insert(v.begin()+5,100);
    for(int x:v){
        cout<<x<<" ";
    }


    return 0;
} 