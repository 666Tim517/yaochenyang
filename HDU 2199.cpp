#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int y,T,l,r;
	double mid;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>y;
		if(y<1||y>100)
		cout<<"没有解决方案"<<endl;
		break;
		while(l<r)
		{
			mid=(l+r)/2;
			while(8*pow(mid,4)+7*pow(mid,3)+2*pow(mid,2)+3*mid+6<y)
			{
				l=mid;
				if(8*pow(mid,4)+7*pow(mid,3)+2*pow(mid,2)+3*mid+6-y<10e-6)
				cout<<mid<<endl;
				break;
			}
			if(8*pow(mid,4)+7*pow(mid,3)+2*pow(mid,2)+3*mid+6>y)
			{
				r=mid;
				if(8*pow(mid,4)+7*pow(mid,3)+2*pow(mid,2)+3*mid+6-y<10e-6)
				cout<<mid<<endl;
				break;
			}
		}
	}
	return 0;
}
