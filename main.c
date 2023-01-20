#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int a,r,i,x,y;
  char play_again;
do {
  printf("\033c");
  printf("Please choose your desired difficulty:\n1.Easy(1-25)\n2.Medium(1-50)\n3.Hard(1-100)\n4.HARDCORE(1-1000)\n");
  printf("---------------\n");
  printf("Difficulty:");
  scanf("%d",&y);
  srand(time(NULL));
 while (y==1){
   r = rand() % 25 + 1;
   y=0;}
 while (y==2){
   r = rand() % 50 + 1;
   y=0;}
 while (y==3){
   r = rand() % 100 + 1;
   y=0;}
 while (y==4){
   r = rand() % 1000 + 1;
   y=0;}
  printf("%d\n",r);
  for(i = 1;i<6;i++){
  printf("Please enter your guess:");
 scanf("%d",&a);
  if (a==r){
    printf("--------------------------\nThe number is correct!\n-----------------------\nMy number was:%d",r);
    if (i==1)
    printf("\n--------------------------------\nIt took you %d try to guess the number!",i);
    else
      printf("\n--------------------------------\nIt took you %d tries to guess the number!",i);
    i=7;
    }
else
  {
    if(a>r)
      printf("Entered number is higher than my number\n");
      else
    printf("Entered number is lower than my number\n");
  }
    }
      if (i==6){
      printf("-------------------------------\nYou ran out of guesses!\nThe number was %d",r);
    printf("\nDo you want to play again? (y/n) ");
    scanf(" %c", &play_again);}
      else {
    printf("\nDo you want to play again? (y/n) ");
    scanf(" %c", &play_again);}
 }while (play_again == 'y');

printf("\nThanks for playing!\n");
  return 0;
  

  }
