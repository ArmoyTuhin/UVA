#include<bits/stdc++.h>
using namespace std ;
#define pb push_back
int main()
{
   string s,s1,s2,s3 ;
   map<string,int> mp;
   map<string,string>mp2;
    map<string,int>:: iterator it;
     map<string,string>:: iterator chk;
     std::set<string> my;
  std::set<string>::iterator sit1;
  std::set<string> myset;
  std::set<string>::iterator sit2;
 while(cin>>s)
 {
     if(s[0]=='#')
        break;
        s1=s;
     transform(s.begin(),s.end(),s.begin(), ::tolower);
     sort(s.begin(), s.end());
     mp2.insert(pair<string,string>(s1,s));
     mp[s]++;

 }
     for(it=mp.begin() ; it!=mp.end() ; it++)
     {
         if(it->second==1)
         {
             s2=it->first;
              for(chk=mp2.begin() ; chk!=mp2.end() ; chk++)
              {
                  if(chk->second==s2)
                  {
                      s3=chk->first;
                      if(s3[0]>='A' && s3[0]<='z')
                      {
                          my.insert(s3);
                      }
                      else myset.insert(s3);
                  }
              }
         //cout<<it->first<<endl;
     }
     }
     for(sit1=my.begin() ; sit1!=my.end() ; sit1++)
     {
       cout<<*sit1<<endl;
     }
     for(sit2=myset.begin() ; sit2!=myset.end() ; sit2++)
     {
         if(sit2==myset.end())
       cout<<*sit2;
       else cout<<*sit2<<endl;
     }
     return 0;
 }
