#include<conio.h>
#include<stdio.h>
int main()
{
	int i,n,a[100],beg,end,mid,item,loc;
	printf("enter no. of elemnts");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be searched");
	scanf("%d",&item);
	beg=0; end=n-1; mid=((beg+end)/2);
	while (beg<=end && a[mid]!=item)
	{
		if(item<a[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=((beg+end)/2);
	}
	if(a[mid]==item)
	{
		loc=mid+1;
		printf("%d is the location of element",loc);
	}
	else
	{
		printf("elemnt not found");
	}
	getch();
}

