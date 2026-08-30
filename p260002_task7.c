#include <stdio.h>
int main()
{
float vi=23.40;
float a= 4.60;
float t=7.62;
float vf=vi+(a*t);
float totaldistance=(vi*t)+(0.5*a*t*t);
printf ("=================KINEMATICS MOTION REPORT==================\n");
printf("Initial Velocity (vi):\t%.f\n",vi);
printf ("Acceleration (a):\t%.f\n",a);
printf ("Time elapsed (t):\t%.f\n",t);
printf("------------------------------------------------------------\n");
printf("Calculated Final Velocity (vf):\t%.2f\n",vf);
printf("Calculated Distance (s):\t%.2f\n",totaldistance);
printf("============================================================\n");
return 0;
}