#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{

//clears terminal//
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
 


int menu_option;
   printf("------------------------\n");
   printf("Welcome to Avoidance \n");
   printf("The aim of the game is to reach the end without dying \n" );
   printf("------------------------\n");


do
  {
    printf("MAIN MENU\n");
    printf("Press 1 to play, 0 to exit: ");
    scanf("%d", &menu_option);
    switch(menu_option){
      case 0:
      {
        printf("Alright, exiting the program...\n");
                sleep(1);
                break;
      }

      case 1:
      {
        
        break;
      }

      default:
      {
        //If entered number for menu is not a valid input
        printf("Unrecognized input, enter a valid number\n\n");
        break;
      }
    }
  }while(menu_option != 0); //End the program after user enters "0 " in the main menu

  printf("Thanks for playing!\n");  //Bye bye message
  return 0;
}









