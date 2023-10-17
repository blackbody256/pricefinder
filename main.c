#include <stdio.h>
int main(void){
int location;
unsigned long long int Area_meters;//since there are no negative Areas
unsigned long long int Area_decimals;//because i need a large of area and prices
unsigned long long int price;
printf("What is the region location of the plot\?\n1.Central Uganda\n2.Northern Uganda\n3.Eastern Uganda\n4.Western Uganda\n");
printf("NOTE: The answer should be 1,2,3 OR 4 only\n");
scanf("%d",&location);
printf("Enter the boundary Area of the plot in Meters\n");
scanf("%i", &Area_meters);
Area_decimals = Area_meters*0.024;
if (location==1){
    price= Area_decimals*150000;
    printf("The price of the land is %i Uganda shillings\n", price);
}else if (location==2){
price= Area_decimals*100000;
printf("The price of the land is %i Uganda shillings\n", price);
}else if (location==3){
price= Area_decimals*1300000;
printf("The price of the land is %i Uganda shillings\n", price);
}else if (location==4){
price= Area_decimals*120000;
printf("The price of the land is %i Uganda shillings\n", price);
}else{
printf("Have some sense and read \"1 to 4\"\n");
}

return 0;
}