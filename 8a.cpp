#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int f=0,g=0;
   string s,s1,s2;
    cin>>s;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s.size();i++)
    {
        if(s.substr(i,s1.size())==s1)
        {
            for(int j=i+s1.size();j<s.size();j++)
            {
                if(s.substr(j,s2.size())==s2)
                {f++;}
            }
        }
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s.substr(i,s1.size())==s1)
        {
            for(int j=i+s1.size();j<s.size();j++)
            {
                if(s.substr(j,s2.size())==s2)
                {g++;}
            }
        }
    }
    if(f!=0 && g==0)
    {
        printf("forward\n");
    }
    if(f!=0 && g!=0)
       {
           printf("both\n");
       }
       if(f==0 && g!=0)
    {
        printf("backward\n");
    }
    if(g==0 && f==0)
    {
        printf("fantasy\n");
    }
    return 0;
}
