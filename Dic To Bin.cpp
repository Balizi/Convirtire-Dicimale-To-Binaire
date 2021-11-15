#include<stdio.h>
#include<conio.h>
main()
{
	int Nb,r,j,i=0;
	int Arr[50];
	do
	{
		printf("Taper un nomber Positive : ");
		scanf("%d",&Nb);	
	}while(Nb<=0);
	printf("\n%d en dicimale = ",Nb);
	while(Nb!=0)
	{
		Arr[i]=Nb%2;
		Nb=Nb/2;
		i++;
	}
	
	for(j=i-1;j>=0;j--)
	{
		printf("%d",Arr[j]);
	}
	printf(" en binaire \n");
	
	getch();
}
