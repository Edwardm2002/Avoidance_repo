//This code needs to be ran on a linux operating system using the gcc compiler in order to run as expected. This code has been tested on ubuntu 21.10 and Ubuntu 21.04//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int action;
int dead = 0;
int wimp = 0;
int room = 1;
int haskey = 0;
int hassword = 0; 
int gotrecipe = 0;  //Declaration of variables//

void error(){
printf("Error Occured\n"); //Function that runs if the switch statements encounters an error//
}

int choice(){
 char actionstring[50];
 fgets(actionstring, sizeof (actionstring), stdin); //takes input and stores it in actionstring//
 return atoi(actionstring);; //takes string and turns it into int so it can be used in the cases on switch statments//
}

void move(){
system ("clear");
fflush(stdout);  //clears buffer and clears screen (Used after a case is met)//
}

void inventory(){
printf("\033[1;31m");  //sets colour to red//
printf("Inventory   ");
printf("\033[0m"); //sets the colour back to default//
if (haskey) 
{  
printf("\033[1;31m");
printf("Key   ");
printf("\033[0m");
}

if (hassword) 
{  
printf("\033[1;31m");
printf("Sword   ");
printf("\033[0m");
}
printf("\033[1;31m");
printf("\n -------------------------------------------------------------------------\n");
printf("\033[0m");
}

void room1(){
inventory(); //runs the inventory function so the inventory is displayed at the top//
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

//prints the scene then the options for the user to choose from//

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

//cases statments are chosen based on user input then appropriate action is taken//

void room2(){
inventory();
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
inventory();
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
  
  case 3: room = 8; 
  break;
   
  default: error();
  break; 
   }
   move();
}

void room4(){
inventory();
printf(
"┌─────────────────────────────────────────┐\n"
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
inventory();
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
inventory();
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
   sleep (2);
   printf("\n");
  }
   else if (haskey){ 
  room = 11;
  }
  break;
  
  case 2: if (!haskey){
  system("clear");
  printf("\n");
  printf("You found a key!\n");
  haskey = 1;
  sleep (2);
  printf("\n");
  }
  else if (haskey){
  system("clear");
  printf("\n");
  printf("You have already looked here\n");
  sleep (2);
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
inventory();
printf(
"┌─────────────────────────────────────────┐\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│   ┌─┬───┬─┐                             │\n"
"│   │┼│000│┼│                             │\n"
"│   └─┴───┴─┘                        │    │\n"
"│                                    │    │\n"
"│                                   ─┼─   │\n"
"│                                    │    │\n"
"│                                         │\n"
"└─────────────────────────────────────────┘\n");
printf("What's this....?\n");
sleep(1); 
printf("A sword!!!\n");
sleep(1); 
printf("This may be useful later\n");
sleep(1);
printf("1) Grab the sword \n");
printf("2) Go on without the sword\n");
printf("3) Go back\n");

action = choice();
switch (action)
{
  case 1: room = 12;
  hassword = 1;
  break;

  case 2: room = 12;
  break;
  
  case 3: room = 10;
  break;
  
  default: error();
  break; 
   }
   move();
}


void room8(){
inventory();
printf(
"┌─────────────────────────────────────────┐\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│   ┌─┬───┬─┐                             │\n"
"│   │┼│000│┼│                             │\n"
"│   └─┴───┴─┘                             │\n"
"│                                         │\n"
"│           _ ┌─┐                         │\n"
"│          _  │0│                         │\n"
"│         _┌──┼─┼┐                        │\n"
"└──────────┴─────┴────────────────────────┘\n");
printf("There is a creature\n");
sleep(1); 
printf("Slay it to stay alive\n");
sleep(1); 
printf("1) Try to slay the creature\n");
printf("2) Go back\n");

action = choice();
switch (action)
{
  case 1: if (!hassword){
  system("clear");
  printf("\n\n\n");
  printf("You are too weak\n");
  sleep (3);
  dead = 1;
  }
   else if (hassword){ 
  room = 13;
  }
  break;
  
  case 2: wimp = 1;
  break;
  
  default: error();
  break; 
   }
   move();
}


void room9(){
inventory();
printf(
"┌─────────────────────────────────────────┐\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│    0     0                              │\n"
"│   ┌─┬───┬─┐                             │\n"
"│   │┼│000│┼│                             │\n"
"│   └─┴───┴─┘                             │\n"
"│                                         │\n"
"│                                         │\n"
"│                             ┌─┐         │\n"
"│                        ┌────┤x│         │\n"
"└────────────────────────┴────┴─┴─────────┘\n");
printf("You have slain the creature\n");
sleep(1); 
printf("Lets open the box\n");
sleep(1); 
printf("Press 1 to continue\n");


action = choice();
switch (action)
{
  case 1: gotrecipe = 1;
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

system("clear");
printf("It seems like you have stumbled upon a bomb\n"); 
printf("\n\n\n");
printf("3\n");
sleep (1);
printf("2\n");
sleep (1);
printf("1\n\n");
sleep (1);
printf("You have been blown up\n");
printf("Press 1 to Restart\n");
printf("Press 2 to quit\n");
action = choice();
switch (action)
{
  case 1: 
  room = 1;
  break;
   
  case 2: 
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

while (!dead && !wimp && !gotrecipe){   //loops the game until you die, run away or get the recipe, therefore winning the game//

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
  
  case 11: room7();
  break;
  
  case 12: room8();
  break;
  
  case 13: room9();
  break;
 }
 //Assigns a room function to a room variable for example box4 - room = 8 //
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
 printf("You are a coward!!!!\n");  //Statements to check which scenario has happened//
 printf("\n\n\n");
 sleep (2);
 printf("Thank you for playing!\n");
}

else if (gotrecipe){
printf("\n");
 printf("You have beaten the game and retreved the lost formula\n");
 sleep (1);
 printf("It contains information on how to make deadly bombs which could bring the world to its knees!\n\n");
 sleep (1);
 printf("Well done :)\n\n");
 sleep (2);
 printf("Thank you for playing!\n");
}

}

int splashscreen()
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
 sleep (3);
 
system("clear");
}



int menuinstructions(){
   printf("------------------------\n");
   printf("Press 1 to play \n");
   printf("Press 2 for help \n"); 
   printf("Press 3 to exit \n");
   printf("------------------------\n");
   }
   
int menu(){
action = choice();
switch (action)
{
  case 1: Game();
  break;
  
  case 2: 
  system("clear"); 
  
       printf("The aim of the game is to retrieve the hidden formula \n");
       printf("Each stage of the game will give you options. \n");
       printf("Enter the number of your choice then hit enter. \n");
       printf("Some stages may require certain items or codes. \n");
       menuinstructions();
       menu();
  break;
  
  case 3:
        printf("Exiting the game...\n");
         sleep(1);
	 printf("Thank you for playing!\n");
          break;

      default:
        //If entered number for menu is not a valid input
        printf("Error occured, please enter a valid number from 1-3\n");
        
        menu();
        break;
   }
 }   
   
  int main(){
splashscreen();
menuinstructions();
menu();
}


  



