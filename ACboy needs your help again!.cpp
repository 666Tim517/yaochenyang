#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

int main()
{
	char x[100],y[100];
	int a,b,c;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		scanf("%d",&b);
		scanf("%s",x[2]);
		scanf("%s",y[0]);
		for(int j;j<=b;j++)
		{
			if(x[2]=='F')
			{
				queue<int>que;
				if(y[0]=='I')
				{
					scanf("%d",&c);
					que.push(c);
				}
				else
				{
					if(!que.empty())
					{
						printf("%d\n",que.front());
						que.pop();
					}
					else
					printf("None\n");
				}
			}
			else
			{
				stack<int>sta;
				if(y[0]=='O')
				{
					scanf("%d",&c);
					sta.push(c);
				}
				else
				{
					if(!sta.empty())
					{
						printf("%d\n",sta.top());
						sta.pop();
					}
					else
					printf("None\n");
				}
			}
		}
	}
}
