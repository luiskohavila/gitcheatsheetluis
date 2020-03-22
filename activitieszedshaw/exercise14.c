#include <stdio.h>
#include <ctype.h>

//forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;

	for(i = 0;i < argc; i++){
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;

	for(i = 0; arg[i] != '\0'; i++) {
		char ch = arg[i];

		if(can_print_it(ch)) {
			printf("'%c' == %d ",ch,ch);
		}
	}
	printf("\n");
}

int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}


/*

EXTRA CREDIT 14

1.- Rework these functions so that you have fewer functions.
For example, do you really need can_print_it ?

#include <stdio.h>
#include <ctype.h>

//forward declarations

void print_letters(char arg[]);

void print_letters(char arg[])
{
        int i = 0;

        for(i = 0; arg[i] != '\0'; i++) {
                char ch = arg[i];

        }
        printf("\n");
}

int main(int argc, char *argv[])
{
        int i;
        for (i = 0; i <argc; i++){

        print_letters(argv[i]);
        }

        return 0;
}

2.- Have print_arguments figure how long each argument string is using the strlen
function, and then pass that length to print_letters . Then, rewrite print_letters
so it only processes this fixed length and doesn't rely on the '\0' terminator.
You will need the #include <string.h> for this.

I insert the function strlen in to count the number of characters in the
array to see how many do I have with an integer value

       for(i = 0;i < argc; i++){
                print_letters(argv[i], strlen(argv[i]));
        }


4.- Go read about how different people like to format their functions.
Never use the "K&R syntax" as it's antiquated and confusing, but understand
what it's doing in case you run into someone who likes it.

Function K&R is obsolete, because it only describes the parameters of the function
such as how many are, and what their types. Programers prefers to use ANSI syntax because
provides a more precise way of specifying joins.


*/
