/*
Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.For example,
Input:
Enter any number: 15

Output:
The given number is divisible by both 3 & 5.

------------------------------------------

For example,
Input:
Enter any number: 10

Output:
The given number is not divisible by both 3 & 5.
*/

#include<stdio.h>

	void udf(){
		int a;
		
		printf("Enter any number:- ");
		scanf("%d",&a);
		(a%3==0 && a%5==0)?printf("The given number is divisible by both..")
			:printf("The given number is not divisible..");
	}
	
void main(){
	udf();
}

/*
Enter any number:- 15
The given number is divisible by both..

Enter any number:- 13
The given number is not divisible..
*/
