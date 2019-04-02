#include<bits/stdc++.h>
using namespace std;
int a[]={1,1,0,0,1,1};
int b[]={1,1,1,1,0,1,1,1,0};
int c[100]={0};

int main()
{
	int alen=sizeof(a)/sizeof(a[0]);
	int blen=sizeof(b)/sizeof(b[0]);
	cout<<alen<<" "<<blen<<endl;
	int maxlen=max(alen,blen);
	int a1[maxlen+1]={0};
	int b1[maxlen+1]={0};
	int u[maxlen+1]={0};
	for(int i=0;i<alen;i++) a1[maxlen-alen+i+1]=a[i];
    for(int i=0;i<blen;i++) b1[maxlen-blen+i+1]=b[i];
    for(int i=0;i<maxlen+1;i++) cout<<a1[i]<<" ";cout<<endl;
    for(int i=0;i<maxlen+1;i++) cout<<b1[i]<<" ";cout<<endl;
    int flag=0;
    for(int i=maxlen;i>0;i--)
	{
		int t=a1[i]+b1[i]+u[i];
		cout<<t<<endl;
		if(i==1 && t>1) 
		{
		    flag=1;
		    c[1]=1;
		}
		if(t==0) c[i+1]=0;
		if(t==1) c[i+1]=1;
		if(t==2) {	c[i+1]=0;u[i-1]=1;	}
		if(t==3) {	c[i+1]=1;u[i-1]=1;	}
	}
	if(flag)
	{
	for(int i=1;i<maxlen+2;i++) cout<<c[i]<<" ";cout<<endl;
	}
	else
	{
		for(int i=2;i<maxlen+2;i++) cout<<c[i]<<" ";cout<<endl;
	}
    return 0;
}
