/*
Student Name : Kabir D Shrestha
Subject : Programming Fundamental
Lab No. : 07
Program : Write a C program tp fing roots of quadratic equation using
		  if-else.
Date : 2016-10-25
*/
#include<stdio.h>
#include<math.h>
	int main(){
	int a,b,c,d,r1,r2;
	
	printf("Enter the variable of x^2 :\n");
	scanf("%d",&a);
	
	printf("\nEnter the variable of x^1 :\n");
	scanf("%d",&b);
	
	printf("\nEnter the variable of x :\n");
	scanf("%d",&c);
	
	d=pow(b,2)-4*a*c;
	
	printf("\nDiscrimant :%d\n",d);
	if (d>0){
		r1=(-b+pow(d,0.5))/2*a;
		printf("\nValue of r1 is :%d\n",r1);
		
		r2=(-b-pow(d,0.5))/2*a;
		printf("\nValue of r2 is :%d\n",r2);
	}
	else {
		printf("imaginary root");
		
	}
	return 0;
}
		
