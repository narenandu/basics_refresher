#include <iostream>

int bitsOn(int val)
{
    int n=0;
    while (val)
    {
        val &= val-1;
        n++;
    }
    return n;
}

int main()
{
	int num;
	cout<<"enter a number:";
	cin>>num;
    cout<<endl<<"there are "<<bitsOn(num)<<" of 1s in its binary form"<<endl;
}