#include <stdio.h>
int main(void){
int location;
int length_decimals;
int price;
printf("What is the region location of the plot\?\n1.Central Uganda\n2.Northern Uganda\n3.Eastern Uganda\n4.Western Uganda\n");
printf("NOTE: The answer should be 1,2,3 OR 4 only\n");
scanf("%d",&location);
printf("Enter the boundary length of the plot in decimals\n");
scanf("%i", &length_decimals);
if (location==1){
    price= length_decimals*2000000;
    printf("The price of the land is %i\n", price);
}else if (location==2){
price= length_decimals*1000000;
printf("The price of the land is %i\n", price);
}else if (location==3){
price= length_decimals*1500000;
printf("The price of the land is %i\n", price);
}else if (location==4){
price= length_decimals*1200000;
printf("The price of the land is %i\n", price);
}else{
printf("Have some sense and read \"1 to 4\"\n");
}

return 0;
}
