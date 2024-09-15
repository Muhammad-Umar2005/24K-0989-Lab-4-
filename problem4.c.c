#include<stdio.h>
int main(){
float COI,SavedAmount,AmountAfterDiscount;
printf("Cost of items=COI.\n");
printf("Enter the cost of items.\n");
scanf("%f\n",&COI);
if (500<=COI && COI<2000){
SavedAmount=COI/20;
printf("SavedAmount:%f\n",SavedAmount);
AmountAfterDiscount=COI-SavedAmount;
printf("AmountAfterDiscount:%f\n",AmountAfterDiscount);}
else if (2000<=COI && COI<4000){
SavedAmount=COI/10;
printf("SavedAmount:%f\n",SavedAmount);
AmountAfterDiscount=COI-SavedAmount;
printf("AmountAfterDiscount:%f\n",AmountAfterDiscount);}
else if (4000<=COI && COI<6000){
SavedAmount=COI/5;
printf("SavedAmount:%f\n",SavedAmount);
AmountAfterDiscount=COI-SavedAmount;
printf("AmountAfterDiscount:%f\n",AmountAfterDiscount);
}
else if (COI>=6000)
{
SavedAmount=(COI*7)/20;
printf("SavedAmount:%f\n",SavedAmount);
AmountAfterDiscount=COI-SavedAmount;
printf("AmountAfterDiscount:%f\n",AmountAfterDiscount);
}
else {
	printf("Error");
}
return 0;
} 
