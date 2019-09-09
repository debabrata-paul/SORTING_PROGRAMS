#include<stdio.h>
void qs(int [],int ,int );

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
	qs(a,0,n-1);
	printf("\nTHE SORTED ARRAY IS\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void qs(int a[],int f,int l)
{
	int i,j,p=0,temp;
	if(f<l){
		p=f;
		i=f;
		j=l;
		while(i<j)
		{
			while(a[p]>a[i]&&i<l)
				i++;
			while(a[j]>a[p])
				j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[p];
	a[p]=a[j];
	a[j]=temp;
	qs(a,f,j-1);
	qs(a,j+1,l);
	}
	
}
