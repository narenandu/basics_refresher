#include <iostream.h>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

void reverse(char *pStr)
{
     char *start = pStr;
     char *end = pStr;
     char temp;
     
     while(*end)
     {
       end++;
     } //end of the string

     for(--end; start < end; start++, end--)
     {
        temp = *start;
        *start = *end;
        *end = temp;       
     }
     
     cout<<"\n reveresed the string: ";     
     while(*pStr)
     {
      cout<<*pStr;
      pStr++;
     }
     cout<<endl;
}

int main()
{
    string s;
    char *pStr;
    cout<<"Enter a string to be reversed: ";
    cin>>s;
    pStr = &s[0];
    reverse(pStr);
}
