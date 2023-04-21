#include<stdio.h>

main()
{
	int unit,ele_bill,sr,total_ele_bill;
	printf("enter your unit=");
	scanf("%d",unit);
	
	if(unit<=50)
	{
		ele_bill=unit*0.50;
		printf("your bill is %d",ele_bill);
	}
	else if(unit<=150)
	{
		ele_bill=(unit-50)*0.75+25;
		printf("your bill is %d",ele_bill);
	}
	else if(unit<=250)
	{
		ele_bill=(unit-150)*1.20+100;
		printf("your bill is %d",ele_bill);
	}
	else 
	{
		ele_bill=(unit-250)*1.50+220;
		printf("your bill is %d",ele_bill);
	}
	
	sr=ele_bill*0.20;
	 total_ele_bill=ele_bill+sr;
	printf("\n your total electricity bill=%d",total_ele_bill);
	
    
}
