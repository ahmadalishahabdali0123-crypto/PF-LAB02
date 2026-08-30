#include <stdio.h>
int main()
{
float radius=7.5;
float pi=3.14159;
float diameter=2*radius;
float circumference=2*pi*radius;
float area=pi*radius*radius;
printf("\n===============CIRCLE GEOMETRY REPORT===============\n");
printf("Given Radius:\t\t%.3f\n",radius);
printf ("Calculated Diameter:\t%.3f\n",diameter);
printf ("Calculated Circumference:  %.3f\n",circumference);
printf ("Calculated Area:\t%.3fsq.cm\n",area);
printf ("=====================================================\n");
return 0;
}
