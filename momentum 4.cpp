#include<stdio.h>

main()
{
	char ch;
	printf("press m for monday");
	printf("\n press t for tuesday ");
	printf("\n press w for wednesday ");
	printf("\n press T FOR thursday");
	printf("\n PRESS f for friday");
	printf("\n press s for saturday");
	printf("\n press S FOR sunday\n");
	printf("enter choice= ");
	scanf("%c",&ch);
	
	switch(ch) 
	{
		
		case 'm' :
		      printf("monday ");
		      break;
		case 't':
		      printf("tuesday ");
		      break;
	   	case 'w':
		      printf("wednesday") ;
		      break;
	   	case 'T':
		      printf("thursday" );
		      break;
     	case 'f':
		      printf("friday ");
		      break;
      	case 's':
		      printf("saturday ");
		      break;
      	case 'S':
		      printf("sunday ");
		      break;
		      	
		default:
	       	printf(" enter valid choice");
		    
	}
	
	
}
