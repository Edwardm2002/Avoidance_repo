#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int action;
int dead = 0;
int wimp = 0;
int room = 1;

void error(){
printf("Error Occured\n"); //Prints if while loops dont have a case met//
}

int choice(){
 char actionstring[50];
 fgets(actionstring, sizeof (actionstring), stdin); //takes input and stores it in actionstring//
 return atoi(actionstring);; //takes string and turns it into int//
}

void move(){
system ("clear");
fflush(stdout);  //clears output buffer and clears screen//
printf("\n\n\n");
}

void room1(){
printf(
"┌─────────────────────────────────────────┐\n"
"│                                         │\n"
"│                ┌────────────────────┐   │\n"
"│                │ Danger Ahead!!!!!  │   │\n"
"│                │                    │   │\n"
"│                └────────────────────┘   │\n"
"│     ┌────────┐                          │\n"
"│     │┼┼┼┼┼┼┼┼│                          │\n"
"│     │┼┼┼┼┼┼┼┼│         ┌────┐           │\n"
"│     │┼┼┼┼┼┼┼┼│         │┼┼┼┼│           │\n"
"│     │┼┼┼┼┼┼┼┼│         └────┘           │\n"
"│     │┼┼┼┼┼┼┼┼│                          │\n"
"└─────┴────────┴──────────────────────────┘\n");
printf("You have come across the abandoned warehouse\n"); 
printf("it has been abandoned for many years therefore there will be many suprises\n");
printf("Do you want to enter?\n");
printf("1) I am fearless\n");
printf("2) No, I want to go home\n");
action = choice();
switch (action)
{
  case 1: room = 2;
  break;
  
  case 2: wimp = 1;
  break;
   
  default: error();
  break; 
   }
   move();
}


void room2(){
printf(
"┌─────────────────────────────────────────┐\n"
"│                                         │\n"
"│                ┌────────────────────┐   │\n"
"│                │ Danger Ahead!!!!!  │   │\n"
"│                │                    │   │\n"
"│                └────────────────────┘   │\n"
"│     ┌────────┐                          │\n"
"│     │┼┼┼┼┼┼┼┼│                          │\n"
"│     │┼┼┼┼┼┼┼┼│         ┌────┐           │\n"
"│     │┼┼┼┼┼┼┼┼│         │┼┼┼┼│           │\n"
"│     │┼┼┼┼┼┼┼┼│         └────┘           │\n"
"│     │┼┼┼┼┼┼┼┼│                          │\n"
"└─────┴────────┴──────────────────────────┘\n");
printf("You are now inside\n"); 
printf("Which way do you want to go\n");
printf("1) I am fearless\n");
printf("2) No, I want to go home\n");
action = choice();
switch (action)
{
  case 1: room = 2;
  break;
  
  case 2: wimp = 1;
  break;
  
  default: error();
  break; 
   }
   move();
}

int Game(){
system("clear");
room1();

while (!dead && !wimp){

 switch (room){
 
  case 1: room1();
  break;
  
  case 2: room2();
  break;
  
 }
}

if (dead) {
 printf("You died\n");
}

else if (wimp){
 printf("You are a coward!!!!\n");
}

}

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
       Game();
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




