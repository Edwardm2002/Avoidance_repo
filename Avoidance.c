#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{

//clears terminal and prints splash screen and menu
system("clear");

printf(
"                                                                    \n"
"░█████╗░██╗░░░██╗░█████╗░██╗██████╗░░█████╗░███╗░░██╗░█████╗░███████╗\n"
"██╔══██╗██║░░░██║██╔══██╗██║██╔══██╗██╔══██╗████╗░██║██╔══██╗██╔════╝\n"
"███████║╚██╗░██╔╝██║░░██║██║██║░░██║███████║██╔██╗██║██║░░╚═╝█████╗░░\n"
"██╔══██║░╚████╔╝░██║░░██║██║██║░░██║██╔══██║██║╚████║██║░░██╗██╔══╝░░\n"
"██║░░██║░░╚██╔╝░░╚█████╔╝██║██████╔╝██║░░██║██║░╚███║╚█████╔╝███████╗\n"
"╚═╝░░╚═╝░░░╚═╝░░░░╚════╝░╚═╝╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝░╚════╝░╚══════╝\n");
 sleep (5);
 
system("clear");


int menu_option;
   printf("------------------------\n");
   printf("Welcome to Avoidance \n");
   printf("The aim of the game is to reach the end without dying \n" );
   printf("------------------------\n");


do
  {
    printf("Press 1 to play \n");
    printf("Press 2 for help \n"); 
    printf("Press 3 to exit \n");
    scanf("%d", &menu_option);
    switch(menu_option){

      case 1:
      {
       printf("game");
        break;
      }

      case 2:
      {
      system("clear");
       printf("This will be updated in future \n");
        break;
      }

      case 3:
      {
        printf("Alright, exiting the program...\n");
         sleep(1);
	 printf("Thanks for playing!\n");
          break;
      }

      default:
      {
        //If entered number for menu is not a valid input
        printf("Unrecognized input, enter a valid number\n\n");
        break;
      }
    }
  }while((menu_option != 3) && (menu_option !=1)); //Ends the menu after user enters "1 or 3"






  return 0;
}









