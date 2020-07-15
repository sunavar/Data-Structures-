#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j,k,item,a[100],n;
	printf("enter no. of elements");
	scanf("%d",n);
	printf("enter elements");
	for(i=1;i<=n;i++)
	{
		scanf("%d",a[i]);
	}
	j=n;
	while(j>k)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[k]=item;
	getch();
}
