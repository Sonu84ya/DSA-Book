#include<stdio.h>
#include<conio.h>
 
 float Sp(float* ,float*);

 int main(){
    float mp,Vat_rate,Dis_rate;

     printf("Enter the mp of the item: ");
     scanf("%f",&mp);

    //  printf("Enter the rate of vat: ");
    //  scanf("%f",&Vat_rate);
      
     printf("Enter the rate of discount: ");
     scanf("%f",&Dis_rate);

     int result;

     Sp(&mp,&Dis_rate);


return 0;
 }

 float Sp(float *mp,float *Dis_rate){

   int vat,dis,sp,sp_with_vat,vat_rate;

   vat_rate=13;
   
   dis=(*Dis_rate/100)*(*mp);
   
   sp=*mp-dis;
   
   vat=(vat_rate/100)*sp;
   
   sp_with_vat=sp+vat;
  
   printf("The discount amount in the item is Rs%d\n",dis);
   printf("The vat amount in the item is %d\n",vat);
   printf("The sp of the item is RS%d\n",sp);
   printf("The total selling price with vat leaved is Rs%d",sp_with_vat);

 }

