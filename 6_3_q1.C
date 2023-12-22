/*
Q.1 Write a Program to print the sum of all numbers from 1 to N using for loop.
For example,
Input:
Enter any number: 8

Output:
The sum of all numbers: 36
*/

#include<stdio.h>

main(){
int n,i,sum=0;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	printf("%d\n",i);
	sum=sum+i;
	}
	printf("sum is %d",sum);
}
