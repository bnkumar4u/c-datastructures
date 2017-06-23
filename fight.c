#include<stdio.h>

int remaining(int n, int k);
int main()
{
		int i;
 
		int t,n;
		scanf("%d",&t) ;
 
 
		int array[100000000];
 
		for(i=1;i<=t;i++)
		{
			scanf("%d",&n);
 
			if(n>=0&&n<=100000000)
			{
				int k;
				scanf("%d",&k);
				array[i-1]= remaining(n,k)+1;
			}
		}
 
		for(i=0;i<t;i++)
		 printf("%d",(array[i]));
 
		return 0;
	
}
 


int remaining(int n, int k)
	{
		int i,r=0;
 
		for( i =2; i<=n;i++)
			r = (r+k)%i;
 
		return r;
	}