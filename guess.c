#include <stdio.h>

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
  int secret_number = 42;
  int correct;

  for(int i = 0; i <= 3; i++){
    printf("\n\nGive me a number!\n");
    scanf("%d", &number);
    printf("You have 3 chances!! [Attempt %d]\n", i+1);
    correct = number == secret_number;
    if(correct){
      printf("Congratulations! The number is %d!!!\n", secret_number);
      break;
    }else{
      if(number > secret_number)
        printf("Your number is greater than Secret Number!!\n");
      else
        printf("Your number is less than Secret Number!!\n");
      printf("Sorry! You are WRONG!!!\n");
    }
  }

  return 0;
}
