#include<stdio.h>
int main(){
    int id,units,charge;
    float unit_price,bill,surcharge = 0;
    char name[10];
    printf("Enter Customer ID : ");
    scanf("%d",&id);
    printf("Enter Consumer Name : ");
    scanf("%s",&name);
    printf("Enter Units Consumed : ");
    scanf("%d",&units);
    if(units>0 && units<=199){
        unit_price=16.20;
        bill=units*unit_price;
        if(bill>18000){
        surcharge=bill*0.15;
        }
        printf("Consumer ID : %d \n",id);
        printf("Consumer Name : %s \n",name);
        printf("Units Consumed : %d \n",units);
        printf("Amount Charges @Rs %.2f per unit: %.2f \n",unit_price,bill);
        printf("Surchage Amount : %.2f \n",surcharge);
        printf("Net Amount To Be Paid By Customer : %.2f ",bill + surcharge);

    }
    else if(units>=200 && units<300){
        unit_price=20.10;
        bill=units*unit_price;
        if(bill>18000){
        surcharge=bill*0.15;
        }
        printf("Consumer ID : %d \n",id);
        printf("Consumer Name : %s \n",name);
        printf("Units Consumed : %d \n",units);
        printf("Amount Charges @Rs %.2f per unit: %.2f \n",unit_price,bill);
        printf("Surchage Amount : %.2f \n",surcharge);
        printf("Net Amount To Be Paid By Customer : %.2f ",bill + surcharge);
    }
    else if(units>=300 && units<500){
        unit_price=27.10;
        bill=units*unit_price;
        if(bill>18000){
        surcharge=bill*0.15;
        }
        printf("Consumer ID : %d \n",id);
        printf("Consumer Name : %s \n",name);
        printf("Units Consumed : %d \n",units);
        printf("Amount Charges @Rs %.2f per unit: %.2f \n",unit_price,bill);
        printf("Surchage Amount : %.2f \n",surcharge);
        printf("Net Amount To Be Paid By Customer : %.2f ",bill + surcharge);
    }
    else if(units>=500){
        unit_price=35.90;
        bill=units*unit_price;
        if(bill>18000){
        surcharge=bill*0.15;
        }
        printf("Consumer ID : %d \n",id);
        printf("Consumer Name : %s \n",name);
        printf("Units Consumed : %d \n",units);
        printf("Amount Charges @Rs %.2f per unit: %.2f \n",unit_price,bill);
        printf("Surchage Amount : %.2f \n",surcharge);
        printf("Net Amount To Be Paid By Customer : %.2f ",bill + surcharge);
    }
    else("Enter Valid Units Consumed\n");
    return 0;
}