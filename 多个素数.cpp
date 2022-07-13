#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	b=pow(10,8);
	int ai[a];
	for(int i=0;i<a;i++){
		scanf("%d",&ai[i]);
		for(int t=2;t<b;t++){
			c=sqrt(ai[i]);
			if(ai[i]%t==0&&ai[i]!=t){
				printf("No\n");
				break;
			}
			else if(c==t){
				printf("Yes\n");
				break;
			}
		}
	}
	return 0;
}
