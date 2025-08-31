#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};
    v.push_back(5);
    
    cout << v.back() << endl;
    cout << v[1] << endl;
    
    for(int i=v.size()-1; i>-1; i--)
        cout << v[i] << " ";
    
    sort(v.begin(), v.end());
    cout << endl;
    for(int i=0; i>=v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
