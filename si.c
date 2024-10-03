//program to determine people eligible for loan
/*
program to determine people eligible loan
Author:Saeed khalid; 
Reg NO:CT102/G/22699/24;
Date:30/9/2024;
*/
#include <stdio.h>
int main() {
	 
	 int principal ='p'//%d
	 ;float Time ='T';//%f
	 float Rate ='r';//%f
	 float simpleInterest ='ST';//%f
	 
	 printf("Enter the principal amont: ");
	 scanf("%d",&principal);
	 
	 printf("Enter the Time (in years):");
	 scanf("%.1f",&Time);
	 

	 
	 printf("Enter the rate of interest: ");
	 scanf("%f", &Rate);
	 printf("The Rate is\t%.2f\n",Rate);
	 
	 simpleInterest = (principal*Time* Rate) / 100;
	 
	 printf("the simple interest is:%.3f\n",simpleInterest);
	 
	 return 0;
}