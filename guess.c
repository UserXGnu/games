#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void welcome();
void game_over();
int choose_level(int *attempts);

int main(){
  int number, level, attempts = 0, correct = 0;

  //generating a pseudo radom number
  srand(time(0));
  int secret_number = rand() % 100;
  
  welcome();
  level = choose_level(&attempts);

  for(int i = 1; i <= attempts; i++){
    printf("\n\nGive me a number!\n");
    scanf("%d", &number);
    printf("[ Attempt %d of %d !]\n", i, attempts);
    
    correct = number == secret_number;
    
    if(number < 0){
      printf("[ You can't use negative numbers!!! ]\n");
      continue;
    }
    
    if(correct){
      printf("Congratulations! The number is %d!!!\n", secret_number);
      break;
    }else{
      if(number > secret_number)
        printf("Your number is greater than Secret Number!!\n");
      else
        printf("Your number is less than Secret Number!!\n");
    }
  }

  if(!correct){
    game_over();
  }

  return 0;
}

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

void game_over(){
  printf("      _____          __  __ ______    ______      ________ _____  _       \n");
  printf("     / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\| |      \n");
  printf("    | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) | |      \n");
  printf("    | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /| |      \n");
  printf("    | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\|_|      \n");
  printf("     \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_(_)      \n");
  printf(" ________________________________________________________________________ \n");
  printf("|________________________________________________________________________|\n");
}

int choose_level(int *attempts){
  int level;

  printf("Choose your level:\n");
  printf("[1] Easy, [2] Hard, [3] Tom Cruise\n");
  scanf("%d", &level);

  switch(level){
    case 1:
      *attempts = 20;
      break;
    case 2:
      *attempts = 15;
      break;
    default:
      *attempts = 5;
      break;
  }

  return level;
}

