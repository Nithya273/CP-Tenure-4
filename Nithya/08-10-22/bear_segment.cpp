#include <iostream>
using namespace std;
int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int count=0,index=-1;
    int i=0;
    for(i;i<s.size();i++)
    {
      if(s[i]=='1')
      {
        if(index==-1)
        index=i;
        count++;
      }
    }
    int j;
    int flag=1;
    if(index!=-1)
    {
      for(j=index;j<index+count;j++)
      {
        if(s[j]=='0')
        {
          flag=0;
          break;
        }
      }
    }
      
    else
    {
      flag=0;
    }
    
    if(flag==1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
  }
	return 0;
}
