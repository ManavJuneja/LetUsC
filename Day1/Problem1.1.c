#include<stdio.h>
#include<conio.h>
int main(){
	float baseSalary;
	printf("Enter Base Salary\n");
	scanf("%f",&baseSalary);
	float grossSalary;
	grossSalary = baseSalary + 0.4*baseSalary + 0.2*baseSalary;
	printf("Gross Salary : %f\n",grossSalary);
	return 0;
}
