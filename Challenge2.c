#include<stdio.h>  
 int main()    
{    
int num;
printf("Enter a number from 1-5\n");
scanf("\n%d",&num);
switch(num)
{
    case 1: printf("Item: Pasta\nPrice: Rs.179");
    break;
    case 2: printf("Item: Pizza\nPrice: Rs.189");
    break;
    case 3: printf("Item: French Fries\nPrice: Rs.99");
    break;
    case 4: printf("Item: Sandwich\nPrice: Rs.149");
    break;
    default: printf("Happy eating!");
}
    return 0;
}   
