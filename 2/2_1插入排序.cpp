#include<bits/stdc++.h>
using namespace std;
int a[]={5,2,5,6,1,18,0,-9,4,3,8,-5,3};
int len=sizeof(a)/sizeof(a[0]);
int main()
{
	for(int j=1;j<len;j++)
	{
		int key=a[j];
		int i=j-1;
		while(i>=0 && a[i]>key)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
    for(int i=0;i<len;i++) cout<<a[i]<<" ";
    cout<<endl;
	

    return 0;
}
