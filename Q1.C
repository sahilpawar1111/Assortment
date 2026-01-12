#include<stdio.h>

int main()
{
	int i,num;
	
	printf("Enter the array size");
	scanf("%d", &num);
	
	int arr[num];
	
	printf("\n Enter array elements");
	for (i=1; i<num; i++)
	{
		printf("\n arr[%d]",i);
		scanf("%d",arr[i]);
	}
	
	printf("Neagtive Elements from array");
	for(i=1; i<num; i++)
	{
		if(arr[i]< 0)
	{
		printf("%d",arr[i]);		
	}
	}
	return 0;
}
