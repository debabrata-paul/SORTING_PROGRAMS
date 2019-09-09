#include<stdio.h>
void main()
{
	int n,i,j,temp=0,num;
	printf("\nENTER THE RANGE OF ARRAY");
	scanf("%d",&n);
	int a[n];
	printf("\nENTER THE ELEMENTS");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(a[j]>temp&&j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("\nsorted array\n");
	for(i=0;i<n;i++)
	{
		
		printf("\n%d",a[i]);
	}
}
		
