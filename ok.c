//documentation section
/* amirul erfan bin saat , 23/12/2021, question 1 assignment 2 */

//pre processor section
#include<stdio.h>

//global variable section

//main function section
int main ()
{
    int ConnectLite = 90 ;
    int ConnectPro = 128 ;
    char employee ;
    float price ;
    char plan ;
    int answr = 1 ;

    do 
    {
        printf("\nSelect Plan (L = ConnectLite / P = ConnectPro) :");
        scanf(" %c",&plan);
        printf("\n");
        printf("Government Employee (Y = Yes / N = No) :" );
        scanf(" %c",&employee);

        if(employee == 'Y' || employee =='y') 
        {
            if( plan == 'L' || plan == 'l' )
            {
                price = ConnectLite - (0.35*ConnectLite);
                printf("----------------------OUTPUT----------------------\n");
                printf("PLAN : ConnectLite \n");
                printf("EMPLOYEE : Yes \n");
                printf("PRICE : RM %0.2f" , price);
            }
            else (plan == 'P'|| plan == 'p' )
            {
                price = ConnectPro - (0.35*ConnectPro);
                printf("----------------------OUTPUT----------------------\n");
                printf("PLAN : ConnectPro \n");
                printf("EMPLOYEE : Yes \n");
                printf("PRICE : RM %0.2f" , price);    
            }
        }
        else if( employee == 'N' || employee == 'n');
        {
        	if( plan == 'L' || plan == 'l')
        	{
	            price = ConnectLite;
	            printf("----------------------OUTPUT----------------------\n");
	            printf("PLAN : ConnectLite \n");
	            printf("EMPLOYEE : No \n");
	            printf("PRICE : RM %0.2f" , price);
       		}

        	else if(plan == 'P'|| plan == 'l')
        	{
	            price = ConnectPro;
	            printf("----------------------OUTPUT----------------------\n");
	            printf("PLAN : ConnectPro \n");
	            printf("EMPLOYEE : No \n");
	            printf("PRICE : RM %0.2f" , price);
        	}
    	}
   		else 
       		printf("Plan not available\n");
            
        
        
        
        
    
        
        printf("\n");
        printf("Do You Want To Continue (1=Yes/2=No) :");
        scanf("%d",&answr);   


    }
    while (answr==1) ;
    return 0;

}
