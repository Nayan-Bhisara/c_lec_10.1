/*
Q.1 Write a Program to find the cube of a given number using UDF.For example,
Input:
Enter any number: 5

Output:
Cube is: 125
*/

#include<stdio.h>

	void udf(){
		int a;
		
		printf("Enter any number:- ");
		scanf("%d",&a);
		printf("the cube is:- %d",a*a*a);
	}
	
void main(){
	udf();
}

/*
Enter any number:- 5
the cube is:- 125
*/
