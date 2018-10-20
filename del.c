#include<stdio.h>
main()
{
	int i,j;
	int arr[5]={1,2,3,4,5};
	printf("where\n");
	scanf("%d",&j);
	for(i=j+1;i<5;i++)
	{
	arr[i-1]=arr[i];
	}
	for(i=0;i<4;i++)
	printf("%d ",arr[i]);
}
