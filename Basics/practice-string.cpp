#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s = "heheh";
    string t = s;
    cout << s[0] << endl;       // 'h'
    cout << s.size() << endl;
    cout << s.substr(1, 3) << endl;  // "ehe"


    reverse(s.begin(), s.end());
    if(s==t)
        cout << "palindrome" << endl;
    cout << s;  

    return 0;
}
