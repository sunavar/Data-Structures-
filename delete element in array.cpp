// Delete third element in the given array//

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,location,item;
    int a[10]= {55,36,32,58,12,62,43,82,68,73};
	item=a[2];
	for(int i=2;i<=n-1;i++)
	{
		a[i]=a[i+1];
		
	}
	printf("resultant array\n");
	for(int i=0;i<n-1;i++)
	{
		printf("%d \n",a[i]);
	}
}
