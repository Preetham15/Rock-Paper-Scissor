#include <stdio.h>
#include <stdlib.h>

int main() {

  int choice;
  int score=0;
  int cscore=0;

  for(int i=0; i<3; i++){
    printf("Enter your choice\n");
    printf("0.Rock 1.Paper 2.Sissor\n");

    scanf("%d", &choice);

    int computer = rand()%3;
    printf("computer choice %d\n", computer);

    if(choice == 0){
      if(computer == 1){
        printf("You Lost\n");
        cscore += 2;
      }else if(computer == 0){
        printf("Draw point\n");
        score++;
        cscore++;
      }else{
        printf("You Won\n");
        score += 2;
      }
    }else if(choice == 1){
      if(computer == 2){
        printf("You Lost\n");
        cscore += 2;
      }else if(computer == 1){
        printf("Draw Point\n");
        score++;
        cscore++;
      }else{
        printf("You Won\n");
        score += 2;
      }
    }else{
      if(computer == 0){
        printf("You Lost\n");
        cscore += 2;
      }else if(computer == 2){
        printf("Draw Point\n");
        score++;
        cscore++;
      }else{
        printf("You Won\n");
        score += 2;
      }
    }
  }


  if(cscore > score){
    printf("LOST THE GAME\n");
  }else if(cscore == score){
    printf("DRAW MATCH\n");
  }else{
    printf("WON THE GAME\n");
  }


  printf("YOUR SCORE: %d\n", score);
  printf("COMPUTER SCORE: %d\n", cscore);

  return 0;
}
