#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2) { //Condition if you pass the number of arguments
		printf("ERROR: You need one argument.\n");
		//this is how to abort the program
		return 1;
	}

	int i = 0;
	//Take the first element of the text chain
	//For loop repites until reaches the last letter
	//of the text chain that is the null point
	for(i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];

		switch(letter) {
		case 'a':
		case 'A':
			printf("%d: 'A'\n",i);
			break; //Finish the compilation
		case 'e':
		case 'E':
			printf("%d: 'E'\n",i);
			break;//Finish the compilation
		case 'i':
		case 'I':
			printf("%d: 'I'\n",i);
			break;//Finish the compilation
		case 'o':
		case 'O':
			printf("%d: 'O'\n",i);
			break;//Finish the compilation
		case 'u':
		case 'U':
			printf("%d: 'U'\n",i);
			break;//Finish the compilation
		case 'y':
		case 'Y':
			if(i > 2) { //it´s only sometimes Y
			printf("%d: 'Y'\n",i);
			}
			break;//Finish the compilation
		default:
			printf("%d: %c is not a vowel\n",i,letter);
		}
	}
	return 0; //Everything goes well and finish the code
}

/*
EXTRA CREDITS


2.- Use the ',' (comma) to initialize letter in the for-loop .

char letter[]= ",";

4.- Convert this switch-statement to an if-statement.

#include <stdio.h>

int main(int argc, char *argv[])
{
        if(argc != 2) {
                printf("ERROR: You need one argument.\n");
                //this is how to abort the program
                return 1;
        }

        int i = 0;
        for(i = 0; argv[1][i] != '\0'; i++) {
                char letter = argv[1][i];

                if ((letter == 'a')  || (letter == 'A')){
                        printf("A\n");
                }else if((letter == 'e') || (letter == 'E')){
                        printf("E\n");
                }else if((letter == 'i') || (letter == 'I')){
                        printf("I\n");
                }else if((letter == 'o') || (letter == 'O')){
                        printf("O\n");
                }else if((letter == 'u') || (letter == 'U')){
                        printf("U\n");
                }else {
                        printf("Is not a vowel\n");
                        }
        }
        return 0;
}

5.- In the case for 'Y' I have the break outside the if-statement .
What's the impact of this and what happens if you move it inside the
if-statement .
It will appear that is not a vowel

*/
