#include<stdio.h>
int main()
{
int TEA_Q=3;
float TEA_UP=70.0;
float TEA_SUBTOTAL=(TEA_Q*TEA_UP);
int SAMOSA_Q=9;
float SAMOSA_UP=30.0;
float SAMOSA_SUBTOTAL=(SAMOSA_Q*SAMOSA_UP);
int BIRYANI_Q=3;
float BIRYANI_UP=230.0;
float BIRYANI_SUBTOTAL=(BIRYANI_Q*BIRYANI_UP);
float BILL_SUBTOTAL=(TEA_SUBTOTAL+SAMOSA_SUBTOTAL+BIRYANI_SUBTOTAL);
float GST=(0.16*BILL_SUBTOTAL);
float FINAL_PAYABLE_AMOUNT=BILL_SUBTOTAL+GST;
printf ("================FAST CAFETERIA RECIEPT=================\n");
printf ("Item\t\tQty\tUnit Price (PKR)\tSubtotal(PKR)\n");
printf ("-------------------------------------------------------\n");
printf ("Tea\t\t%d\t%.2f\t\t%.2f\n",TEA_Q,TEA_UP,TEA_SUBTOTAL);
printf ("Samosa\t\t%d\t%.2f\t\t%.2f\n",SAMOSA_Q,SAMOSA_UP,SAMOSA_SUBTOTAL);
printf ("Biryani\t\t%d\t%.2f\t\t%.2f\n",BIRYANI_Q,BIRYANI_UP,BIRYANI_SUBTOTAL);
printf ("-------------------------------------------------------\n");
printf ("Subtotal:\t\t\tPKR %.2f\n",BILL_SUBTOTAL);
printf ("GST (16%%):\t\t\tPKR %.2f\n",GST);
printf ("-------------------------------------------------------\n");
printf ("Grand total:\t\t\tPKR%.2f\n",FINAL_PAYABLE_AMOUNT);
printf ("=================THANKS FOR YOUR VISIT=================\n");
return 0;
}



