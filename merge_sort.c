#include<stdio.h>
void ms(int [],int ,int);
void merge(int [],int ,int ,int ,int );
void main()
{
	int n,i;
	printf("\nENTER THE RANGE OF ARRAY");
	scanf("%d",&n);
	int a[n];
	printf("\nENTER THE ELEMENTS");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	ms(a,0,n-1);
	printf("\nsorted array\n");
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",a[i]);
	}
}
void ms(int a[],int i,int j)
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		ms(a,i,mid);
		ms(a,mid+1,j);
		merge(a,i,mid,mid+1,j);
	}
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
	int temp[j2+1];
	int k=0,i,j;
	i=i1;
	j=i2;
	while(i<=j1&&j<=j2)
	{
		if(a[i]>a[j])
			temp[k++]=a[j++];
		else
			temp[k++]=a[i++];
	}
	while(i<=j1)
		temp[k++]=a[i++];
	while(j<=j2)
		temp[k++]=a[j++];
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}

