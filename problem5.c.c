#include <stdio.h>
#include <string.h>  

int main()
{
    int customerid,consumedunit;
    float SurchargeAmount,AmountPaidByTheCustomer,AmountCharges,perunitcost;
    char name[25];

    printf("Input Customer ID :");
    scanf("%d", &customerid);
    printf("Input the Customer Name:");
    scanf("%s",name);
    printf("Input the unit consumed by the customer :");
    scanf("%d", &consumedunit);

    if (consumedunit < 200)
        perunitcost = 16.20;
    else if (consumedunit >= 200 && consumedunit < 300)
        perunitcost = 20.10;
    else if (consumedunit >= 300 && consumedunit < 500)
        perunitcost = 27.10;
    else
        perunitcost = 35.90;

    AmountCharges = consumedunit * perunitcost ; 

    if (AmountCharges > 18000)
        SurchargeAmount = AmountCharges * 0.15;

AmountPaidByTheCustomer = AmountCharges + SurchargeAmount ;

    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n", customerid);
    printf("Customer Name                       :%s\n", name);
    printf("unit Consumed                       :%d\n", consumedunit);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", perunitcost,AmountCharges);
    printf("Surchage Amount                     :%8.2f\n", SurchargeAmount);
    printf("Net Amount Paid By the Customer     :%8.2f\n", AmountPaidByTheCustomer);
    return 0;
}  
