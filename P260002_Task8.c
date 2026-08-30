#include <stdio.h>
int main ()
{
double principal=232000.03;
float rate=8.5;
int time=4;
float I=(principal*rate*time)/100.0;
float A=principal+I;
float installment=A/(time*12.0);
printf ("=============BANK LOAN INTEREST SUMMARY===========\n");
printf ("Principal Amount:\tPKR%.2f\n",principal);
printf ("Annual Interest Rate:\t%.2f%%\n",rate);
printf ("Loan Duration:\t\t%dYears(48 Months)\n",time);
printf ("--------------------------------------------------\n");
printf ("Total Accrued Interest:\tPKR%.2f\n",I);
printf ("Total Payable Amount:\t PKR%.2f\n",A);
printf ("Monthly Installment:\tPKR%.2f\n",installment);
printf ("==================================================\n");
return 0;
}
