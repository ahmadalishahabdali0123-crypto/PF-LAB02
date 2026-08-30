#include <stdio.h>
int main()
{
char a='A';
int  b=32;
float c=8.3512;
double d=67.054892;
printf("Type Name   Variable Value   Size In Memory\n");
printf("----------------------------------------------------------\n");
printf("char\t\t%c\t\t%zu byte(s)\n",a,sizeof(a));
printf("int\t\t%d\t\t%zu byte(s)\n",b,sizeof(b));
printf("float\t\t%f\t%zu byte(s)\n",c,sizeof(c));
printf("double\t\t%2f\t%zu byte(s)\n",d,sizeof(d));
printf("----------------------------------------------------------\n");
return 0;
}
