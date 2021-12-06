#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int action;
int dead = 0;
int wimp = 0;
int room = 1;
int haskey = 0;

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
printf("1) Enter\n");
printf("2) Run Away\n");
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
"│                                         │\n"
"│                                         │\n"
"│                                         │\n"
"│                                         │\n"
"│Exit    Factory       Testing            │\n"
"├───┐    ┌─────┐       ┌─────┐            │\n"
"│   │    │     │       │     │            │\n"
"│   │    │     │       │     │            │\n"
"│   │    │     │       │     │    ┌─┬─┬─┐ │\n"
"│   │    │     │       │     │    │┼│0│┼│ │\n"
"└───┴────┴─────┴───────┴─────┴────┴─┴─┴─┴─┘\n");
printf("You are now inside\n"); 
printf("Which way do you want to go\n");
printf("1) Into the factory\n");
printf("2) Into the testing room\n");
printf("3) Open the box\n");
printf("4) Exit back outdoors\n");
action = choice();
switch (action)
{
  case 1: room = 3;
  break;
  
  case 2: room = 4;
  break;
  
  case 3: room = 5;
  break;
  
  case 4: room = 1;
  break;
  
  default: error();
  break; 
   }
   move();
}

void room3(){
printf(
"┌─────────────────────────────────────────┐\n"
"│                                         │\n"
"│                x                        │\n"
"│              x │ x                      │\n"
"│             x──┼──x                     │\n"
"│              x │ x                      │\n"
"│                x                        │\n"
"│                                         │\n"
"│                                 ┌─┬─┬─┐ │\n"
"│       ┌─┐            Testing    │┼│0│┼│ │\n"
"├───┐   │ │            ┌─────┐   ─┴─┴─┴─┴─┤\n"
"│   │   o │     ┌┬─┬┐  │     │            │\n"
"│   │   ┌─┴┐   ┌┼│ ││  │     │            │\n"
"│   │   │  │  ┌┴─┴─┴┴┐ │     │    ┌─┬─┬─┐ │\n"
"│   │   │  │  │      │ │     │    │┼│0│┼│ │\n"
"└───┴───┴──┴──┴──────┴─┴─────┴────┴─┴─┴─┴─┘\n");
printf("This is where all materials used to make the bombs were processed\n"); 
printf("Be aware that bombs may be kept anywhere and might be live\n");
printf("1) Go into testing room\n");
printf("2) Open lower box\n");
printf("3) Open upper box\n");
action = choice();
switch (action)
{
  case 1: room = 4;
  break;
  
  case 2: room = 6;
  break;
  
  case 3: room = 8; //to be changed in future//
  break;
   
  default: error();
  break; 
   }
   move();
}

void room4(){
printf(
"┌─────────────────────────────────────────┐\n"
"│                                         │\n"
"│                                         │\n"
"│                                         │\n"
"│          TESTING IN PROGRESS            │\n"
"│                                         │\n"
"│        ┌───────┬──────────────┐         │\n"
"│        │       │              │         │\n"
"│        │       │   xxx        │  CODE   │\n"
"│        │       └─xxxxxx       │  LOCKED │\n"
"├───┐    │           xxx        │ ┌─────┐ │\n"
"│   │    │       ┌─────┐        │O│     │O│\n"
"│   │    │       │┼┼┼┼┼│        │O│     │O│\n"
"│   │    └───────┴─────┴────────┘O│     │O│\n"
"│   │                             │     │ │\n"
"└───┴──────┬─────┬────────────────┴─────┴─┘\n"
"           └──┼──┘\n"
 "              │\n"
  "              ▼\n");
printf("To enter the main lab you need the code\n");
printf("1) Go down trap door into storage\n");
printf("2) Go to the factory\n");
printf("TO OPEN THE DOOR ENTER CODE\n");
action = choice();
switch (action)
{
  case 1: room = 9;
  break;
  
  case 2: room = 3;
  break;
  
  case 5784: room = 10;
  break;
   
  default: error();
  break; 
   }
   move();
}

void room5(){
printf(
"┌─────────────────┬───┬───────────────────┐\n"
"│    1            ├───┤                   │\n"
"│ ┌─┬─┬─┐         │   │                   │\n"
"│ │┼│o│┼│         ├───┤              2    │\n"
"├─┴─┴─┴─┴──       │   │           ┌─┬─┬─┐ │\n"
"│                 ├───┤           │┼│o│┼│ │\n"
"│                 │   │          ─┴─┴─┴─┴─┤\n"
"│    3            ├───┤                   │\n"
"│ ┌─┬─┬─┐         │   │                   │\n"
"│ │┼│o│┼│         ├───┤                   │\n"
"├─┴─┴─┴─┴────     │   │                   │\n"
"│                 ├───┤                   │\n"
"│                 │   │                   │\n"
"│                 ├───┤                   │\n"
"│                 │   │                   │\n"
"└─────────────────┴───┴───────────────────┘\n");
printf("1) Open box 1\n");
printf("2) Open box 2\n");
printf("3) Open box 3\n");
printf("4) Go back to testing room\n");
action = choice();
switch (action)
{
  case 1: room = 6;
  break;
  
  case 2: room = 7;
  break;
  
  case 3: room = 6; 
  break;
   
  case 4: room = 4;
  break;
  
  default: error();
  break; 
   }
   move();
}

void room6(){
printf("You have been plunged into darkness\n");
printf("You have to feel around\n");
printf("You feel a door handle to the left \n");
printf("There is a box to the right\n");
printf("There is a box in front of you\n");
printf("You cannot go back now\n\n");
printf("1) Try open door\n");
printf("2) Open box to the right of you\n");
printf("3) Open box in front of you\n\n\n");
action = choice();
switch (action)
{
  case 1: if (!haskey){
   system("clear");
   printf("\n");
   printf("You need to find the key\n");
   sleep (4);
   printf("\n");
  }
   else if (haskey){ 
  room = 1;
  }
  break;
  
  case 2: if (!haskey){
  system("clear");
  printf("\n");
  printf("You found a key!\n");
  haskey = 1;
  sleep (4);
  printf("\n");
  }
  else{
  system("clear");
  printf("\n");
  printf("You have already looked here\n");
  printf("\n");
  }
  break;
  
  case 3: room = 6; 
  break;
   

  default: error();
  break; 
   }
   move();
}


void room7(){
printf(
"┌─────────────────┬───┬───────────────────┐\n"
"│    1            ├───┤                   │\n"
"│ ┌─┬─┬─┐         │   │                   │\n"
"│ │┼│o│┼│         ├───┤              2    │\n"
"├─┴─┴─┴─┴──       │   │           ┌─┬─┬─┐ │\n"
"│                 ├───┤           │┼│o│┼│ │\n"
"│                 │   │          ─┴─┴─┴─┴─┤\n"
"│    3            ├───┤                   │\n"
"│ ┌─┬─┬─┐         │   │                   │\n"
"│ │┼│o│┼│         ├───┤                   │\n"
"├─┴─┴─┴─┴────     │   │                   │\n"
"│                 ├───┤                   │\n"
"│                 │   │                   │\n"
"│                 ├───┤                   │\n"
"│                 │   │                   │\n"
"└─────────────────┴───┴───────────────────┘\n");
printf("1) Open box 1\n");
printf("2) Open box 2\n");
printf("3) Open box 3\n");
printf("4) Go back to testing room\n");
action = choice();
switch (action)
{
  case 1: room = 6;
  break;
  
  case 2: room = 7;
  break;
  
  case 3: room = 6; 
  break;
   
  case 4: room = 4;
  break;
  
  default: error();
  break; 
   }
   move();
}
void box1(){
printf(
"┌────────────────────────┐\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"├────────────────────────┤\n"
"│┼──────────────────────┼│\n"
"││                      ││\n"
"││  This is a secret    ││\n"
"││      Message !       ││\n"
"││                      ││\n"
"││ Avoid the bombs!!    ││\n"
"││ They will be hidden  ││\n"
"││ in boxes like this.  ││\n"
"│┼──────────────────────┼│\n"
"└────────────────────────┘\n");
printf("It appears you have found a useful hint\n"); 
printf("Don't go around opening too many boxes\n"); 
printf("You will need to \n");
printf("1) Exit Box\n");
action = choice();
switch (action)
{
  case 1: room = 2;
  break;
   
  default: error();
  break; 
   }
   move();
}

void box2(){
printf(
"┌────────────────────────┐\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"├────────────────────────┤\n"
"│┼──────────────────────┼│\n"
"││                      ││\n"
"││ ┌┐   xxxxxxxxxx      ││\n"
"││ │┼──xxxxxxxxxxxxx    ││\n"
"││ ││ xxxxxxxxxxxxxxx   ││\n"
"││ │┼──xxxxxxxxxxxxx    ││\n"
"││ └┘   xxxxxxxxxx      ││\n"
"││                      ││\n"
"│┼──────────────────────┼│\n"
"└────────────────────────┘\n");
printf("It seems like you have stumbled upon a bomb\n"); 
printf("Press 1 to continue\n");
action = choice();
switch (action)
{
  case 1: 
  system("clear");
  printf("\n\n\n");
  printf("3\n");
  sleep (1);
   printf("2\n");
  sleep (1);
   printf("1\n");
  sleep (1);
  printf("You have been blown up\n");
  dead = 1;
  break;
   
  default: error();
  break; 
   }
   move();
}

void box3(){
printf(
"┌────────────────────────┐\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"├────────────────────────┤\n"
"│┼──────────────────────┼│\n"
"││                      ││\n"
"││                      ││\n"
"││                      ││\n"
"││         5784         ││\n"
"││                      ││\n"
"││                      ││\n"
"││                      ││\n"
"│┼──────────────────────┼│\n"
"└────────────────────────┘\n"); 
printf("1) Exit Box\n");
action = choice();
switch (action)
{
  case 1: room = 9;
  break;
   
  default: error();
  break; 
   }
   move();
}

void box4(){
printf(
"┌────────────────────────┐\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"│                        │\n"
"├────────────────────────┤\n"
"│┼──────────────────────┼│\n"
"││                      ││\n"
"││                      ││\n"
"││                      ││\n"
"││                      ││\n"
"││                      ││\n"
"││                      ││\n"
"││                      ││\n"
"│┼──────────────────────┼│\n"
"└────────────────────────┘\n"); 
printf("1) Exit Box\n");
action = choice();
switch (action)
{
  case 1: room = 3;
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
  
  case 3: room3();
  break;
  
  case 4: room4();
  break;
  
  case 5: box1();
  break;
  
  case 6: box2();
  break;
  
  case 7: box3();
  break;
  
  case 8: box4();
  break;
  
  case 9: room5();
  break;
  
  case 10: room6();
  break;
 }
}

if (dead) {
 printf("\n");
 printf("You have died\n");
 printf("\n\n\n");
 sleep (1);
 printf("Thank you for playing!\n");
}

else if (wimp){
 printf("\n");
 printf("You are a coward!!!!\n");
 printf("\n\n\n");
 sleep (1);
 printf("Thank you for playing!\n");
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
       printf("The aim of the game is to retrieve the hidden formula \n");
       printf("Each stage of the game will give you options. \n");
       printf("Enter your choice then hit enter. \n");
       printf("Some stages may require certain items or codes. \n");
      break;
      }

      case 3:
      {
        printf("Exiting the program...\n");
         sleep(1);
	 printf("Thank you for playing!\n");
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



