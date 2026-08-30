#include<stdio.h>
int main()
{
float Celsius=42.50;
float Farenhite=(Celsius*9.0/5.0)+32;
float Kelvin=Celsius+273.15;
printf("\n=============TEMPERATURE CONVERSION ================\n");
printf("Temperature in Celsius:\t\t%.2fC\n",Celsius);
printf("Temperature in Farenhite:\t%.2fF\n",Farenhite);
printf("Tempertaure in Kelvin:\t\t%.2fK\n",Kelvin);
printf("====================================================\n");
return 0;
}
