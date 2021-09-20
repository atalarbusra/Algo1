#include<stdio.h>
int main()
{
	
	int array[100];
	int n,i,j;
	int sonuc=1;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i != j)
			{
				sonuc*=array[j];
			}
		
				
		}
		printf("%d ",sonuc);
		sonuc=1;
		
	}
	
	
	
	
	
	
	
	
}
