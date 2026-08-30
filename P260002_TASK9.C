#include <stdio.h>
int main()
{
double basic_salary=60000.00;
float HRA=(0.20*basic_salary);
float MA=(0.10*basic_salary);
float GRS=basic_salary+HRA+MA;
float ITD=(0.05*GRS);
float NETSalary=GRS-ITD;
printf("================MONTHLY SALARY SLIP===============\n");
printf("Basic Salary:\t\t\tPKR %.2f\n",basic_salary);
printf("House Rent Allowance(20%%):\t%.2f\n",HRA);
printf("Medical Allownce (10%%):\t\t%.2f\n",MA);
printf("--------------------------------------------------\n");
printf("Gross Salary:\t\tPKR %.2f\n",GRS);
printf("Tax Deduction(5%%):\tPKR %.2f\n",ITD);
printf("--------------------------------------------------\n");
printf("Net Payable Salary:\tPKR %.2f\n",NETSalary);
printf("==================================================\n");
return 0;
}
