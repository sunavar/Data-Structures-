#include<conio.h>
#include<stdio.h>
int main()
{
	int a[100],i,k,n,temp;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	for(k=1;k<=n-1;k++)
	{
		temp=a[k];
		i=k-1;
		while(i>=0 && temp<a[i])
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=temp;
	}
	printf("sorted list");
	for(k=0;k<=n-1;k++)
	{
		printf("%d",a[k]);
	}
	getch();
}
