#include<conio.h>
#include<stdio.h>
int main()
{
	int i,loc1=0,loc2=0,item1=55,item2=168;
	int a[10]= {55,36,32,58,12,62,43,82,68,73};
	for(int k=0;k<10;k++)
	{
		if(item1==a[k])
		{
			loc1=k+1;
		}
		else if(item2==a[k])
		{
			loc2=k+1;
		}
	}
	if(loc1==0 && loc2==0)
	{
		printf("elements not found");
	}
	else if(loc1==0 && loc2!=0)
	{
		printf("Item1 not found \n");
		printf("%d is the location of Item2",loc2);
	}
	else if(loc1!=0 && loc2==0)
	{
		printf("%d is the location of Item1 \n",loc1);
		printf("Item2 not found \n");
	}
	else
	{
		printf("%d is the location of Item1 \n",loc1);
		printf("%d is the location of Item2 \n",loc2);
	}
	getch();
}
