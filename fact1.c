//factorial with loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,ans=1;
	printf("\n\t ENTER A NUMBER : ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		ans=ans*i;
	}
	printf("\n\n----OUTPUT-----------------------\n");
	printf("\n\t FACTORIAL OF %d IS : %d",no,ans);
	getch();
}
