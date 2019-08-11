#include <bits/stdc++.h>
using namespace std;

int main() {
    string strr;
    int i = 0;
    while(cin >> strr && strr != "*")
    {

        if("Hajj" == strr)
        cout << "Case " << ++i << ": " <<  "Hajj-e-Akbar" << endl;
        else if("Umrah" == strr)
        cout << "Case " << ++i << ": " <<  "Hajj-e-Asghar" << endl;
    }
    return 0;
}
