/*
Q.2 Write a Program to print the factorial of number N using for loop.
For example,
Input:
Enter any number: 5

Output:
The factorial is: 120
*/

#include<stdio.h>
 main(){
int n,i,sum=1;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	printf("%d\n",i);
	sum=sum*i;
	}
	printf("sum is %d",sum);

}
