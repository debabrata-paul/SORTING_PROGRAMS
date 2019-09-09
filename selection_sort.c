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
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];				
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nsorted array\n");
	for(i=0;i<n;i++)
	{
		
		printf("\n%d",a[i]);
	}
}		
