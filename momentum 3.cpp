#include<stdio.h>

main()
{
	int a,b,c,d;
    	printf("enter of value a=");
	    scanf("%d",&a);
	    printf("enter of value b=");
	    scanf("%d",&b);
	   	printf("enter of value c=");
	    scanf("%d",&c);
	   	printf("enter of value d=");
	    scanf("%d",&d);
	    
	    if(a>b)
	    {
	        if(a>c)
	       {
	      	  printf("a is max");
		   }
		   else
		   {
		  	  printf("c is max");
		   }
     	}
		else
		{
			if(b>d)
			{
				printf("b is max");
			}
			else
			{
				printf("d is max");
			}
		}
		 if(c>d)
		{
		  	{
		  		printf("c is max");
		    }
		    
			
		}
		
}
