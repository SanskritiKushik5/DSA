#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    map<char, int> freq;
    string s = "banana";
    
    for (char c : s) freq[c]++;
    for (auto [ch, count] : freq)
        cout << ch << " : " << count << "\n";

    return 0;
}
