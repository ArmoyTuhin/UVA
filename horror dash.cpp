#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,Test,i,t;
    cin >> Test;
    for(t = 1; t <= Test; t++)
        {
        cin >> n;
        int maxi = -1, a;
        for(i = 0; i < n; i++)
            {
            cin >> a;
            if(a > maxi)
            maxi = a;
        }
        cout << "Case " << t << ": " << maxi << endl;
    }
    return 0;
}
