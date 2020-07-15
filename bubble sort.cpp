#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,k,pass,temp;
	int a[15]={ 55,32 ,14 ,78 ,96};
	for(i=1;i<4;i++)
	{
		for(k=0;k<4-i;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp; 
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	
	getch();
}
