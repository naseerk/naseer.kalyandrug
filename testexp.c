
#include<stdio.h>

void main()
{

	int size = 0, i =0;

	printf("\n Enter Size of array:");
	scanf("%d", &size);

	int arr[size];

	printf("\n Enter the elements of array");

	while( i < size)
	{
		scanf("%d", &arr[i]);
		i++;
	}


	printf("\n Printing the Elements of array");
	i = 0;
	while(i < size)
	{
		printf(" %d", arr[i]);
		i++;
	}
	

}

