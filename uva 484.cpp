#include<bits/stdc++.h>
using namespace std ;
map <int,int> mp;
int main()
{
    int a ,i;
    vector<int> v;
    map <int,int>::iterator itr;
    vector <int>::iterator it ;
while(cin>>a)
    {
        itr=mp.find(a);
      if( itr==mp.end())
       {
        v.push_back(a);
        mp[a]=1;
       }

    else
        mp[a]++;
}
 for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] <<" "<< mp[v[i]] <<endl;
    }

}
