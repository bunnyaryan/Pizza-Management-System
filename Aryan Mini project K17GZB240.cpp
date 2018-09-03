#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<ctype.h> 

/***************************************************************************************************************************
                                           VARIABLE DECLARATION
****************************************************************************************************************************/


int Smallpizza,Midpizza,Largepizza,NonVeg,Waterbottle,snikers,Colddrink,dessert,beverage;//types initilize
int n,j,r,z;
int cost[6]={99,65,89,100,75,45};//array decleration 
int od;
int total=0, price;  
char c[20],d[20]={"loveumaa"},ap[20],ag[20]={"bunnyaryan"};


/*********************************************************************************************************
												Function Beverage(bev)
******************************* LAST CASE 7 *******************************************************************/

void bev()
	{
		int bb[6]={100,60,120,210,50,160};
	   //int price;
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Beverage\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n1.Butter_Milk=100\n\n2.Lassi=60\n\n3.Cold_Coffee=120\n\n4.Badam_Milk=210\n\n5.Tea=50\n\n6.Balma_Green_Tea=160\n\n");
        scanf("%d",&r);
        switch(r)
        {
        	case 1:// beverage();
        		printf("\nYour Choice is Butter_Milk");
        		printf("\nQuantity\n");
        		scanf("%d",&r);
        		price=bb[0]*r;
        		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\nPayments of Ruppees=%d",price);
        	    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\n::     Thank you        ::\n");
        	    printf("Visit again");
        	    break;
        	case 2:
        		printf("\nYour Choice is Lassi");
        		printf("\nQuantity\n");
        		scanf("%d",&r);
        		price=bb[1]*r;
        		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\nPayments of Ruppes=%d",price);
        	    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\n::     Thank you        ::\n");
        	    printf("Visit again");
        	    break;
        	case 3:
        		printf("\nYour Choice is Cold_Coffee");
        		printf("\nQuantity\n");
        		scanf("%d",&r);
        		price=bb[2]*r;
        		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\nPayments of Ruppes=%d",price);
        	    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\n::     Thank you        ::\n");
        	    printf("Visit again");
        	    break;
        	case 4:
        	    printf("\nYour Choice is Badam_Milk");
        		printf("\nQuantity\n");
        		scanf("%d",&r);
        		price=bb[3]*r;
        		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\nPayments of Ruppes=%d",price);
        	    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\n::     Thank you        ::\n");
        	    printf("Visit again");
        	    break;
			case 5:
			     printf("\nYour Choice is Tea");
        		printf("\nQuantity\n");
        		scanf("%d",&r);
        		price=bb[4]*r;
        		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\nPayments of Ruppes=%d",price);
        	    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\n::     Thank you        ::\n");
        	    printf("Visit again");
        	    break;
			case 6:
			    printf("\nYour Choice is Badam_Milk");
        		printf("\nQuantity\n");
        		scanf("%d",&r);
        		price=bb[5]*r;
        		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\nPayments of Ruppes=%d",price);
        	    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\n::     Thank you        ::\n");
        	    printf("Visit again");
        	    break;
			case 7:
			     printf("\nYour Choice is Balma_Green_Tea");
        		printf("\nQuantity\n");
        		scanf("%d",&r);
        		price=bb[6]*r;
        		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\nPayments of Ruppes=%d",price);
        	    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        	    printf("\n::     Thank you        ::\n");
        	    printf("Visit again");
        	    
        	
        	}
	}


/**************************************************************************************************************************
											MAIN PROGRAM START FROM HERE
***************************************************************************************************************************/

int main()
{
	
lg:
system("cls");
system("COLOR 1E");
printf("\t\t\t\xB2\xDB\xB2\xDBlogin id: ");
scanf("%s", ap);
if(strcmp(ap,ag)==0)
{
printf("\n\t\t\tUser Id match");
}
else
exit(1);
printf("\n\t\t\tPassword:");
char ch;
for(int i=0; c[i]!=1; )
	{
		
		c[i]=(char)getch();
		
		//printf("%c", ap[i]);
		if(c[i]!=13 && c[i]!=8)	putch('*');
		if(c[i]==13)
		{
			c[i]='\0';
			break;
		}
		if(c[i]==8)
		--i;
		i++;
		
	  
	}
if(strcmp(c,d)==0)
{
	
	printf("\n\n\t\t\tPassword Matched");
	getch();
	system("cls");
}
 
 else
 exit(1);
                    // 1st year student 
                   //Programmer:- Aryan Sharma(K17GZ) Roll no.40
                  //Mini Project:-Pizza hut management system
                 //Lovely Professional University Punjab,Phagwara
                //Designed by-Aryan Sharma
 do
{                  
printf("\n\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
printf("\n\t::**********************************************************************::");
printf("\n\t::**********************************************************************::");
printf("\n\t::               ##Welcome to the(ARYAN) PIZZA HUT##                    ::");
printf("\n\t::**********************************************************************::");
printf("\n\t::**********************************************************************::");
printf("\n\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
printf("\t\n                          *****::               ::****");
printf("\t\n                             ****:: HELLO.     ::****");
printf("\t\n                               ****::  SIR. ::****");
printf("\n\n\n\t::    We Assure That Our Quality Is The Best Product In The World        ::");
printf("\n\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
printf("\n\t::**********************************************************************::");
printf("\n\t::               ##          YOUR ORDER          ##                     ::");
printf("\n\t::**********************************************************************::");
printf("\n\n\n\n1.Small_Pizza\t\t2.Midium_Pizza\t\t3.Large_Pizza\t\t\t4.Non_veg\n\n\n\n5.Cold_drink\t\t6.Dessert\t\t7.Beverage\n\n\n\n8.Description\t\t0.Exit\t\t420. Logout\n");
scanf("%d",&n);
switch(n)
{

case 420: goto lg;  //For logout.....using goto function

case 7: bev();
	break;
/******************************************************************************************
							Description....										
*******************************************************************************************/
	
case 8:system("COLOR 4F");
system("cls");
			{
				printf("\n\tPIZZA HUT MANAGEMENT\n");

                printf("\tMini Project in C\n");

                printf("\tIs brought to you by\n");

                printf("\tCode with C : Aryan Sharma\n");
 
                printf("******************************************\n\n");

                printf("******************************************\n");

                printf("******************************************\n\n");

                printf("********************************************\n\n\n");

                printf("Exiting in 3 second...........>");
                Sleep(3000);
                
            }

case 0: exit(0);



case 1:     //for small pizza 
       system("COLOR 4F");//for color change


      system("cls");
	  printf("\n\n\xDB\xDB\xDB\xDB 1.CHEESE_CORN=Rs.295\n\n\xDB\xDB\xDB\xDB 2.PANEER_MAKHAN=Rs.300\n\n\xDB\xDB\xDB\xDB 3.FARMHOUSE=Rs.365\n\n\xDB\xDB\xDB\xDB 4.PEPPY_PANEER=Rs.400\n\n\xDB\xDB\xDB\xDB 5.DELUXE_VEGGI=Rs.440\n\n\xDB\xDB\xDB\xDB 6.DOUBLE_VEG=Rs.320\n\n\xDB\xDB\xDB\xDB 7.CHEESY=Rs.89\n\n\xDB\xDB\xDB\xDB 0.Exit\n");
	  scanf("%d",&r);
      	    
		switch(r)
	  {
		      case 1:
         printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
		 printf("\nYOUR ORDER            ****                   CHEESE_CORN");
		 printf("\n\nHow many pizza box you want");
         scanf("\n%d",&r);
         price=(r*295);
         if(r>5)
         {
         printf("\n\n\t\tConguratulations You got one day extra meal...of Rs.100");
         printf("\n\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t\t\t____________________________");
		 printf("\n\t\t\t\t\t\t|                          |");
		 price=r*295;
		 printf("\n\t\t\t\t\t\t|   To Payment=%d          |",price);//calculation
		 printf("\n\t\t\t\t\t\t|                          |");
		 printf("\n\t\t\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
         printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
		 }
		 else{
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t\t\t____________________________");
		 printf("\n\t\t\t\t\t\t|                          |");
		 price=r*295;
		 printf("\n\t\t\t\t\t\t|   To Payment=%d          |",price);//calculation
		 printf("\n\t\t\t\t\t\t|                          |");
		 printf("\n\t\t\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n\t\tPlease come again!!-");
	     }
	     getch();
	     break;
		
              case 2:
         printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	
		 printf("\nYOUR ORDER            ****                 PANEER_MAKHAN");
		 printf("\n\n\nHow many pizza box you want");
		 scanf("%d",&r);
		 if(r>7)
		 {
		 	printf("\n\n\t\tConguratulations You 1 box extra of pizza");
		 }
		 else{
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*300;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	     printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n\t\tPlease come again!!-");
		 }
		 system("cls");
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*300;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	     printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n\t\tPlease come again!!-");
		 getch();
		 break;
		      case 3:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	
	     printf("\nYOUR ORDER            ****                     FARMHOUSE");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*365;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	     printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break; 
		      case 4:
		 printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	
		 printf("\nYOUR ORDER            ****                     PEPPY_PANEER");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 if(r>4){
		 	printf("Sir you got a Bumpper offer of Rs.100");
		 }
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*400;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	     printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	
		      case 5:
		 printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	
		 printf("\nYOUR ORDER            ****                     DELUXE_VEGGI");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*440;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	     printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	  
		      case 6:
		 printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	
		 printf("\nYOUR ORDER            ****                     DOUBLE_VEG");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*320;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	         printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	         printf("\n::     Thank you        ::");
	         printf("\n::::::::::::::::::::::::::");
	         printf("\n:::--Please come again--:::");
		 getch();
		 break;	   
		      case 7:
		 printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	
		 printf("\nYOUR ORDER            ****                        CHEESY");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*89;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	         printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	         printf("\n::     Thank you        ::");
	         printf("\n::::::::::::::::::::::::::");
	         printf("\n:::--Please come again--:::");
		 getch();
		 
    
}
break;
    case 2: system("COLOR 4F");
	 //Middium pizza
//Main case 2 start from here
 
	    printf("\n\n\xDB\xDB\xDB\xDB 1.SMALL_VEG=Rs.98\n\n\xDB\xDB\xDB\xDB 2.VEGGIE_PARADISE=Rs.365\n\n\xDB\xDB\xDB\xDB 3.VEG_EXTRAVAGANZA=Rs.440\n\n\xDB\xDB\xDB\xDB 4.GOLDEN_CORN=Rs.489\n\n\xDB\xDB\xDB\xDB 5.DOUBLE_CHEESY=Rs.465\n\n\xDB\xDB\xDB\xDB 6.PEPPY_PANEER=Rs.545\n\n\xDB\xDB\xDB\xDB 7.DELUXE_PANEER=Rs.589\n\n\xDB\xDB\xDB\xDB 0.Exit\n");
	    scanf("%d",&r);
	    
		switch(r)
	  {
		      case 1: system("cls");
	     printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	
		 printf("\nYOUR ORDER            ****                     SMALL_VEG");
		 printf("\nHow many pizza box you want");
         scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\t\t\t\nPlease Payment to counter no 1\t\t\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*98;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	         printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	         printf("\n::     Thank you        ::");
	         printf("\n::::::::::::::::::::::::::");
	         printf("\n:::--Please come again--:::");
		 getch();
		 break;
              case 2:
                 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
		 printf("\nYOUR ORDER            ****                  VEGGIE_PARADISE");
		 printf("\n\n\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*365;
	         printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	         printf("\n\t\t\t\t____________________________");
	         printf("\n::::::::::::::::::::::::::");
	         printf("\n::     Thank you        ::");
	         printf("\n::::::::::::::::::::::::::");
	         printf("\n:::--Please come again--:::");
		 getch();
		 break;
		      case 3:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
	     printf("\nYOUR ORDER            ****              VEG_EXTRAVAGANZA");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*440;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	     printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break; 
		      case 4:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                   GOLDEN_CORN");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*489;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	     printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	
		      case 5:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                 DOUBLE_CHEESY");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*465;
	   	 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
	     printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	  
		      case 6:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                  PEPPY_PANEER");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*545;
		 printf("\n\t\t\t\t|To payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	   
		      case 7:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                 DELUXE_PANEER");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\t\t");
		 printf("\n\t\t\t\t____________________________");
		 printf("\n\t\t\t\t|                          |");
		 price=r*589;
		 printf("\n\t\t\t\t|T0 payment=%d             |",price);
		 printf("\n\t\t\t\t|                          |");
		 printf("\n\t\t\t\t____________________________");
		 
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 
	   }break; 
	   
    case 3://  large pizza 
	    system("COLOR 4F");
	    system("cls");
	   printf("\n\n\xDB\xDB\xDB\xDB 1.FAMILY_FARMHOUSE=Rs.545\n\n\xDB\xDB\xDB\xDB 2.LOADED_VEG=Rs.598\n\n\xDB\xDB\xDB\xDB 3.CHOCOLATE_HUB=Rs.650\n\n\xDB\xDB\xDB\xDB 4.EXTRA_LARGE_CHEESE=Rs.698\n\n\xDB\xDB\xDB\xDB 5.RED_PAPRIKA=Rs.454\n\n\xDB\xDB\xDB\xDB 6.VEGETARIAN=Rs.565\n\n\xDB\xDB\xDB\xDB 7.CLASSIC_VEG=Rs.589\n\n\xDB\xDB\xDB\xDB 0.Exit\n\n");
	   scanf("%d",&r);

	    switch(r)
	  {
	        case 0:
	  	      	exit(0);
	  	      	break;
		    case 1:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	    	
		 printf("\nYOUR ORDER            ****                     FAMILY_FARMHOUSE");
		 printf("\nHow many pizza box you want");
         scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n");
		 price=r*545;
		 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\n\nTo Payment=%d",price);
		 printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;
              case 2:
         printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                  LOADED_VEG");
		 printf("\n\n\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*598;
		 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	     printf("\n\n\nTo payment=%d",price);
	     printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;
		      case 3:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
	     printf("\nYOUR ORDER            ****              CHOCOLATE_HUB");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*650;
		 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\nTo payment=%d",price);
		 printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break; 
		      case 4:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                   EXTRA_LARGE_CHEESE");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*698;
		 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\nTo payment=%d",price);
		 printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	
		      case 5:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                 RED_PAPRIKA");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*454;
		 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\nTo payment=%d",price);
		 printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	  
		      case 6:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                  PEPPY_PANEER");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\t\t");
		 price=r*565;
		 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\nTo payment=%d",price);
		 printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\n::::::::::::::::::::::::::");
		 printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	   
		      case 7:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****                 DELUXE_PANEER");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\t\t");
		 price=r*589;
		 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\nTo payment=%d",price);
		 printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		  
	   }break;
 case 4: //Non-veg pizza 
        system("COLOR 4F");
	    system("cls");
	  printf("\n\n\xDB\xDB\xDB\xDB 1.PEPPER_BARBECUE_CHICKEN=Rs.295\n\n\xDB\xDB\xDB\xDB 2.CHICKEN_TIKKA=Rs.365\n\n\xDB\xDB\xDB\xDB 3.CHICKEN_SAUSAGE=Rs.295\n\n\xDB\xDB\xDB\xDB 4.CHICKEN_GOLDEN_DELIGHT=Rs.440\n\n\xDB\xDB\xDB\xDB 5.NON_VEG_SUPRIME=Rs.535\n\n\xDB\xDB\xDB\xDB 6.CHICKEN_FIESTA=Rs.440\n\n\xDB\xDB\xDB\xDB 7.PEPRI_PEPRI_CHICKEN=Rs.365\n\n\xDB\xDB\xDB\xDB 8.CHICKEN_DOMINATOR=Rs.535\n\n\xDB\xDB\xDB\xDB 0.EXIT\n\n");
	  scanf("%d",&r);
	  
	    switch(r)
	  {
		      case 1:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****          PEPPER_BARBECUE_CHICKEN");
		 printf("\nHow many pizza box you want");
         scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*295;
		 printf("\nTo Payment=%d",price);
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;
              case 2:
         printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****          CHICKEN_TIKKA");
		 printf("\n\n\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*365;
	     printf("\n\n\nTo payment=%d",price);
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;
		      case 3:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
	     printf("\nYOUR ORDER            ****               CHICKEN_SAUSAGE");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*295;
		 printf("\nTo payment=%d",price);
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break; 
		      case 4:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     	
		 printf("\nYOUR ORDER            ****            CHICKEN_GOLDEN_DELIGHT");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*440;
		 printf("\nTo payment=%d",price);
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	
		      case 5: 
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
		 printf("\nYOUR ORDER            ****              NON_VEG_SUPRIME");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\n\t\t");
		 price=r*535;
		 printf("\nTo payment=%d",price);
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	  
		      case 6: 
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
		 printf("\nYOUR ORDER            ****                CHICKEN_FIESTA");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\t\t");
		 price=r*440;
		 printf("\nTo payment=%d",price);
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break;	   
		      case 7: 
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
		 printf("\nYOUR ORDER            ****             PEPRI_PEPRI_CHICKEN");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\t\t");
		 price=r*365;
		 printf("\nTo payment=%d",r*365);
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		 break; 
		      case 8: 
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
	     printf("\nYOUR ORDER            ****             CHICKEN_DOMINATOR");
		 printf("\nHow many pizza box you want");
		 scanf("%d",&r);
		 printf("\t\t\n\n::::::::::Your order is ready___::::::::::\n\n\t\t");
		 printf("\t\nPlease Payment to counter no 1\n\n(No Cash Is taken)\t\t");
		 printf("\nTo payment=%d",r*535);
		 price=r*535;
		 printf("\n::::::::::::::::::::::::::");
	     printf("\n::     Thank you        ::");
	     printf("\n::::::::::::::::::::::::::");
	     printf("\n:::--Please come again--:::");
		 getch();
		  
	   }break;
case 5:         //Cold drink
	                // Use of array is here....
	   	 printf("\n\n\xDB\xDB\xDB\xDB 1.Pepsi=Rs.99\n\n\xDB\xDB\xDB\xDB 2.Thumsup=Rs.65\n\n\xDB\xDB\xDB\xDB 3.Sprite=Rs.89\n\n\xDB\xDB\xDB\xDB 4.Dew=Rs.100\n\n\xDB\xDB\xDB\xDB 5.Fizz=Rs.75\n\n\xDB\xDB\xDB\xDB 6.Limca=Rs.45\n\n\xDB\xDB\xDB\xDB 0.Exit\n\n");
	     scanf("%d",&r);
	      switch(r)
	  {
		      case 1:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     		   
		 printf("\n****                    Pepsi");
		 printf("\n\nHow many bottles you wants:");
         scanf("%d",&r);
		 price=cost[0]*r;
		 printf("\n\t\t_____________________________");
		 printf("\n\t\t|                           |");
		 printf("\n\t\t|   To Payment=%d           |",price);
		 printf("\n\t\t|                           |");
		 printf("\n\t\t*****************************");
		 getch();
		 break;
              case 2:
         printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
		 printf("\n****                  Thumsup");
		 printf("\n\nHow many bottles you wants:");
		 scanf("%d",&r);
		 price=cost[1]*r;
		 printf("\n\t\t_____________________________");
		 printf("\n\t\t|                           |");
		 printf("\n\t\t|   To Payment=%d           |",price);
		 printf("\n\t\t|                           |");
		 printf("\n\t\t*****************************");
		 getch();
		 break;
		      case 3: 
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
	     printf("\n****                   Sprite");
		 printf("\n\nHow many bottles you wants:");
		 scanf("%d",&r);
		 price=cost[2]*r;
		 printf("\n\t\t_____________________________");
		 printf("\n\t\t|                           |");
		 printf("\n\t\t|   To Payment=%d           |",price);
		 printf("\n\t\t|                           |");
		 printf("\n\t\t*****************************");
	     getch();
		 break; 
		      case 4:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
		 printf("\n****                   Dew");
		 printf("\n\nHow many bottles you wants:");
		 scanf("%d",&r);
		 price=cost[3]*r;
		 printf("\n\t\t_____________________________");
		 printf("\n\t\t|                           |");
		 printf("\n\t\t|   To Payment=%d           |",price);
		 printf("\n\t\t|                           |");
		 printf("\n\t\t*****************************");
		 getch();
		 break;	
		      case 5:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
		 printf("\n****                     Fizz");
		 printf("\n\nHow many bottles you wants:");
		 scanf("%d",&r);
		 price=cost[4]*r;
		 printf("\n\t\t_____________________________");
		 printf("\n\t\t|                           |");
		 printf("\n\t\t|   To Payment=%d           |",price);
		 printf("\n\t\t|                           |");
		 printf("\n\t\t*****************************");
		 getch();
		 break;	  
		      case 6:
		 printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");     	     
		 printf("\n****                    Limca");
		 printf("\n\nHow many bottles you wants:");
		 scanf("%d",&r);
		 price=cost[5]*r;
		 printf("\n\t\t_____________________________");
		 printf("\n\t\t|                           |");
		 printf("\n\t\t|   To Payment=%d           |",price);
		 printf("\n\t\t|                           |");
		 printf("\n\t\t*****************************");
		 getch();
		 break;	   
    }

   break;
   
{
    case 6:  //Dessert
		int Biscuits,Cakes,Cookies,Ice_cream,Pudding,Custard,Apple_pie;
	    int cost[7]={35,69,65,150,120,220,99};
	    printf("\n\n\xDB\xDB\xDB\xDB 1.Biscuits=35\n\n\xDB\xDB\xDB\xDB 2.Cakes=69\n\n\xDB\xDB\xDB\xDB 3.\Cookies=65\n\n\xDB\xDB\xDB\xDB 4.Ice_cream=150\n\n\xDB\xDB\xDB\xDB 5.Pudding=120\n\n\xDB\xDB\xDB\xDB 6.Custard=220\n\n\xDB\xDB\xDB\xDB 7.Apple pie=99\n\n");
	    scanf("%d",&r);
	    switch(r)
	    {
	    	case 1:
	    		printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Biscuit \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
				printf("\n\n\t\tHow much packets you want sir:\n");
				scanf("%d",&r);
				price=cost[0]*r;
				printf("\n\t\t_____________________________");
		        printf("\n\t\t|                           |");
		        printf("\n\t\t|   To Payment=%d           |",price);
		        printf("\n\t\t|                           |");
		        printf("\n\t\t*****************************");
		        break; 
			case 2:
			    printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Cakes \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
			    printf("\n\n\t\tHow much you want sir:\n");
				scanf("%d",&r);
				price=cost[1]*r;
				printf("\n\t\t_____________________________");
		        printf("\n\t\t|                           |");
		        printf("\n\t\t|   To Payment=%d           |",price);
		        printf("\n\t\t|                           |");
		        printf("\n\t\t*****************************");
		        break; 
		    case 3:
		        printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Cookies \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
				printf("\n\n\t\tHow much packets you want sir:\n");
				scanf("%d",&r);
				price=cost[2]*r;
				printf("\n\t\t_____________________________");
		        printf("\n\t\t|                           |");
		        printf("\n\t\t|   To Payment=%d           |",price);
		        printf("\n\t\t|                           |");
		        printf("\n\t\t*****************************");
		        break; 
			case 4:
			    printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \Ice cream \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
				printf("\n\n\t\tHow much Bricks you want sir:\n");
				scanf("%d",&r);
				price=cost[3]*r;
				printf("\n\t\t_____________________________");
		        printf("\n\t\t|                           |");
		        printf("\n\t\t|   To Payment=%d           |",price);
		        printf("\n\t\t|                           |");
		        printf("\n\t\t*****************************");
		        break;
		    case 5:
		        printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \Pudding \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
				printf("\n\n\t\tHow much you want sir:\n");
				scanf("%d",&r);
				price=cost[4]*r;
				printf("\n\t\t_____________________________");
		        printf("\n\t\t|                           |");
		        printf("\n\t\t|   To Payment=%d           |",price);
		        printf("\n\t\t|                           |");
		        printf("\n\t\t*****************************");
		        break; 
		    case 6:
		        printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Custard \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
				printf("\n\n\t\tHow much Bowls you want sir:\n");
				scanf("%d",&r);
				price=cost[5]*r;
				printf("\n\t\t_____________________________");
		        printf("\n\t\t|                           |");
		        printf("\n\t\t|   To Payment=%d           |",price);
		        printf("\n\t\t|                           |");
		        printf("\n\t\t*****************************");
		        break;
		    case 7:
		       { printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Apple pie \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
				printf("\n\n\t\tHow much you want sir:\n");
				scanf("%d",&r);
				price=cost[6]*r;
				printf("\n\t\t_____________________________");
		        printf("\n\t\t|                           |");
		        printf("\n\t\t|   To Payment=%d           |",price);
		        printf("\n\t\t|                           |");
		        printf("\n\t\t*****************************");
			    break;
				}
			     
				   	
	   
		}
		break;
	
		
/*************************************************************************************************************************************************************	 	  
															CASE 7 is use in above  as function
***************************************************************************************************************************************************************/
		
}

      }
      total+=price;
   printf("\nDo you want to place order again?....(1 for again)");
   scanf("%d",&r);
   printf("\nTotal bill:%d",total);
      
   } 
while(r==1);
printf("\nTotal bill: %d", total);
printf("\n\nHave a nice day Sir/Maam\n\n");
printf("\n\nThank you Please come again\n\n");
 getch();
}
