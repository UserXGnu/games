#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void welcome(){
  printf("          _        _                  _           _           _        \n");
  printf("         /\\ \\     /\\_\\               /\\ \\        / /\\        / /\\      \n");
  printf("        /  \\ \\   / / /         _    /  \\ \\      / /  \\      / /  \\     \n");
  printf("       / /\\ \\_\\  \\ \\ \\__      /\\_\\ / /\\ \\ \\    / / /\\ \\__  / / /\\ \\__  \n");
  printf("      / / /\\/_/   \\ \\___\\    / / // / /\\ \\_\\  / / /\\ \\___\\/ / /\\ \\___\\ \n");
  printf("     / / / ______  \\__  /   / / // /_/_ \\/_/  \\ \\ \\ \\/___/\\ \\ \\ \\/___/ \n");
  printf("    / / / /\\_____\\ / / /   / / // /____/\\      \\ \\ \\       \\ \\ \\       \n");
  printf("   / / /  \\/____ // / /   / / // /\\____\\/  _    \\ \\ \\  _    \\ \\ \\      \n");
  printf("  / / /_____/ / // / /___/ / // / /______ /_/\\__/ / / /_/\\__/ / /      \n");
  printf(" / / /______\\/ // / /____\\/ // / /_______\\\\ \\/___/ /  \\ \\/___/ /       \n");
  printf(" \\/___________/ \\/_________/ \\/__________/ \\_____\\/    \\_____\\/        \n");
}

int main(){
  welcome(); 
  int number;
  int correct = 0;
  int attempts =1; 
  int score = 100;

  int seconds = time(0);
  srand(seconds);
  int secret_number = rand();
  secret_number = secret_number % 100;


  while(!correct){
    printf("\n\nGive me a number!\n");
    scanf("%d", &number);
    printf("[ Number of attempts %d ]\n", attempts);
    
    if(number < 0){
      printf("[ You can't use negative numbers!!! ]\n");
      continue;
    }
    
    if(number == secret_number){
      printf("Congratulations! The number is %d!!!\n", secret_number);
      correct = 1;
    }else{
      score = (number - secret_number) / 2;

      if(number > secret_number)
        printf("Your number is greater than Secret Number!!\n");
      else
        printf("Your number is less than Secret Number!!\n");
      printf("Sorry! You are WRONG!!!\n");
    }
    
    printf("!!! [SCORE: %d]!!!\n", score);
    attempts++;
  }

  return 0;
}
