/*
In this piece of code which I learned in data structures , I have used two functions to sort an array in such a way that 
the negative numbers and the positive numbers are seperated on the right and left side of the array respectively 
without any alterations in the positions of the numbers
*/
#include<stdio.h>
#define n 6

void swap(int *s1, int *s2)
{
    int temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}



void segregateElements(int arr[])
{
	int i =0,j = 0;
	for (i = 0; i < n; i++)
	{
	if (arr[i] < 0)
	{
	if (i != j)
	{
	swap(&arr[i],&arr[j]);
	}
	j++;
}
}
}	



int main(){
	int i;
	int arr[n];
	printf("INPUT\n\n");
	printf("Enter 6 numbers : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Array before shifting:");
	for(i=0;i<n;i++)
		printf("%d  \t",arr[i]);
	printf("\n");
	
	segregateElements(arr);
	
	printf("OUTPUT\n\n");
	printf("array after shifting\n\t\t");
	for(i=0;i<n;i++)
		printf("%d  \t",arr[i]);
	printf("\n\n");
}
