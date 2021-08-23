#include<iostream>
#include<string>

using namespace std;

int main()
{     string s;

      getline(cin,s);


      // cout<<s<<endl;

      for (int i = 0; i < s.length(); i++)
      {
            if(s[i]=='-' && s[i+1]=='.')
            {
                  s[i]='1';
                  i++;
            }
            else if(s[i]=='-' && s[i+1]=='-'){
                  s[i]='2';
                  i++;
            }
            else if(s[i]=='.'){
                  s[i]='0';
            }
      }

      // cout<<s<<endl;

      string str;

     for (int i = 0; i < s.length(); i++)
     {
           if(s[i]=='0' || s[i]=='1' || s[i]=='2'){
                 cout<<s[i];
           }
     }
     
      

      return 0;
}