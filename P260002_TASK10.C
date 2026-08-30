#include <stdio.h>
int main()
{
float PF_MARKS=89.0;
int PF_CREDIT_HOURS=3;
float CALCULAS_MARKS=86.0;
int CALCULAS_CREDIT_HOURS=3;
float APPLIED_PHYSICS_MARKS=87.6;
int APPLIED_PHYSICS_CREDIT_HOURS=2;
float TOTAL_SCORE=(PF_MARKS*PF_CREDIT_HOURS)+(CALCULAS_MARKS*CALCULAS_CREDIT_HOURS)+(APPLIED_PHYSICS_MARKS*APPLIED_PHYSICS_CREDIT_HOURS);
int TOTAL_HOURS=(PF_CREDIT_HOURS+CALCULAS_CREDIT_HOURS+APPLIED_PHYSICS_CREDIT_HOURS);
float WEIGHTED_PERCENTAGE=(TOTAL_SCORE/TOTAL_HOURS);
printf ("===================SEMESTER ACADEMIC REPORT===================\n");
printf ("Course\t\tCredit Hours\tObtained Marks\n");
printf ("--------------------------------------------------------------\n");
printf ("Programming Fund\t%d\t\t%.2f\n",PF_CREDIT_HOURS,PF_MARKS);
printf ("Calculas\t\t%d\t\t%.2f\n",CALCULAS_CREDIT_HOURS,CALCULAS_MARKS);
printf ("Applied Physics\t\t%d\t\t%.2f\n",APPLIED_PHYSICS_CREDIT_HOURS,APPLIED_PHYSICS_MARKS);
printf ("-------------------------------------------------------------\n");
printf ("Total Credits:\t%d",TOTAL_HOURS);
printf ("\tWeighted Average:\t%.2f%%\n",WEIGHTED_PERCENTAGE);
printf ("==================================================================================\n");
return 0;
}
