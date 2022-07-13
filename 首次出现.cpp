#include <iostream>
using namespace std;
int main()
{
	int n,i,b;
	cin>>n;
	char a[n];
		for(i=0;i<n;i++)
			{
			cin>>a[i];
			}
			
	char m;
	int j;
	cin>>m;
		for(j=0;j<n;j++)
			{
				if(a[j]==m)
					{
						b=1;
						break;
					}
			}
	if(b==1)
		cout<<j;
	else
		cout<<-1;

			
		
	return 0;

 } 
