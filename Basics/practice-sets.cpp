#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    set<int> st = {1, 2, 2, 2, 2, 3};
    st.insert(4);
    for (int x : st) cout << x << " ";  // 1 2 3 4

    return 0;
}
