#include<bits/stdc++.h>
using namespace std;
int a[]={5,2,5,6,1,18,0,-9,4,3,8,-5,3};
int len=sizeof(a)/sizeof(a[0]);
int main()
{
	int v;
	cin>>v;
	int flag=-5;
	for(int i=0;i<len;i++)
	{
		if(a[i]==v) 
		{
			flag=i;
			break;
		} 
	}
	if(flag==-5) cout<<"NIL"<<endl;
	else cout<<flag<<endl;

    return 0;
}
