#include <stdio.h>
#include <conio.h>
int main() {
char procode;
int  Qty;
float PPC, TC, Shipcost ;

printf("Enter your Product Details: \n");

printf("Enter Product Code: \n");
scanf("%c", &procode);
printf("Enter Number of Pieces: \n");
scanf("%d", &Qty);
printf("Enter Cost per Piece: \n");
scanf("%f", &PPC);
printf("Enter Shipping Cost Of the Product: \n");
scanf("%f", &Shipcost);

TC = Qty*PPC+Shipcost;


printf("For the product having product code %c, %d number of pieces, costing %.2f Rs. per piece ans also Having the Extra cost for shipping %.2f Rs. The Total Cost of the Product Purchased is %.2f:", procode, Qty, PPC, Shipcost, TC);






 }














