#include<stdio.h>
int main()
{
	
		
	int array[100];
	int array1[100];
	int n,i,j;
	int sonuc=1;
	int counter=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		sonuc*=array[i];
	}
	
	
	for(i=1;i<=n;i++)
	{
		array1[i]=sonuc;
	}
	i=1;
	j=1;
	
	do
	{
		array1[i]-=array[i];
		counter++;
		
		if(array1[i]==0)
		{	
			printf("%d ",counter);
			i+=1;
			j=i;
			counter=0;
		}
		
	}while(i<=n);
	
}
	
	
	
	

		
		
		
		
	
	
	
	

