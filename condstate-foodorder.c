#include<stdio.h>
main(){
	int fooditem;
	printf("Enter the fooditem no: ");
	scanf("%d",&fooditem);
	switch(fooditem)
	{
		case 1:
			printf("Food item-Pizza\n  \nPrice-Rs 239\n");
			break;
			
		case 2:
			printf("Food item-Burger\n  \nPrice-Rs 129\n");
			break;
			
		case 3:
			printf("Food item-Pasta\n  \nPrice-Rs 179\n");
			break;
			
		case 4:
			printf("Food item-French Fries\n  \nPrice-Rs 99\n");
			break;
			
		case 5:
			printf("Food item-Sandwich\n  \nPrice-Rs 149\n");
			break;
			
		default:
			printf("Food item doesnot exist\n");
			break;
	}
}
