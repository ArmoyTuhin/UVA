#include<bits/stdc++.h>
using namespace std ;
int main()


{
    map<string , string> mp;
     std::map<string,string>::iterator it;
     char name1[11] , name2[11] ,s[25], str;

  getline (cin,name1,name2);
  while(name1 && name2)
  {
      str=getline (cin,name1,name2);
      mp[name2]=name1;
  }

  while(cin>>s)
  {
     it = mp.find(s);
  if (it != mymap.end())
   cout<< mp.find(s)->second<<endl;
   else cout<<"eh"<<endl;
  }


}
