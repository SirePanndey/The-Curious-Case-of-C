#include<stdio.h>
void main()
{
int arr[6]={1,2,3,4,5},index,num;
printf("Enter index:-\n");
scanf("%d",&index);
printf("Enter number to be inserted:-");
scanf("%d",&num);
for(int i=4;i>=index;i--)
arr[i+1]=arr[i];
arr[index]=num;
printf("New array:-");
for(int j=0;j<6;j++)
printf("%d ",arr[j]);
}
