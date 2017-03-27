#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

void welcome();
void game_over();
ushort choose_level(ushort *attempts);

int main(){
	ushort number, level, attempts = 0, correct = 0;

  	//generating a pseudo random number
  	srand(time(0));
  	ushort secret_number = rand() % 100;
  
  	welcome();
  	level = choose_level(&attempts);

  	for(ushort i = 1; i <= attempts; i++){
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

        } else {
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
	printf("          _        _                  _           _           _        \n" \
	       "         /\\ \\     /\\_\\               /\\ \\        / /\\        / /\\      \n" \
	       "        /  \\ \\   / / /         _    /  \\ \\      / /  \\      / /  \\     \n" \
	       "       / /\\ \\_\\  \\ \\ \\__      /\\_\\ / /\\ \\ \\    / / /\\ \\__  / / /\\ \\__  \n" \
	       "      / / /\\/_/   \\ \\___\\    / / // / /\\ \\_\\  / / /\\ \\___\\/ / /\\ \\___\\ \n" \
	       "     / / / ______  \\__  /   / / // /_/_ \\/_/  \\ \\ \\ \\/___/\\ \\ \\ \\/___/ \n" \
	       "    / / / /\\_____\\ / / /   / / // /____/\\      \\ \\ \\       \\ \\ \\       \n" \
	       "   / / /  \\/____ // / /   / / // /\\____\\/  _    \\ \\ \\  _    \\ \\ \\      \n" \
	       "  / / /_____/ / // / /___/ / // / /______ /_/\\__/ / / /_/\\__/ / /      \n" \
	       " / / /______\\/ // / /____\\/ // / /_______\\\\ \\/___/ /  \\ \\/___/ /       \n" \
	       " \\/___________/ \\/_________/ \\/__________/ \\_____\\/    \\_____\\/        \n");
}

void game_over(){
	printf("      _____          __  __ ______    ______      ________ _____  _       \n" \
	       "     / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\| |      \n" \
	       "    | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) | |      \n" \
	       "    | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /| |      \n" \
	       "    | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\|_|      \n" \
	       "     \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_(_)      \n" \
	       " ________________________________________________________________________ \n" \
	       "|________________________________________________________________________|\n");
}

ushort choose_level(ushort *attempts){
	int level;

	printf("Choose your level:\n" \
	       "[1] Easy, [2] Hard, [3] Tom Cruise\n");

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

