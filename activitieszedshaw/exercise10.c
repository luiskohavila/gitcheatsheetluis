// Exercise 10

#include <stdio.h>

int main(int argc, char *argv[])
{
int i = 0;
// go through each string in argv
//For cycle to use unlimited number of arguments
//and print them
for(i = 1; i < argc; i++){
	printf("arg %d: %s\n", i, argv[i]);
	}
// let's make our own array of strings

char *states[] = { //Creating an array with those words
	"California", "Oregon",
	"Washington", "Texas"
	};
	int num_states = 4; //The total number of states if 4

	for(i = 0; i < num_states; i++) { //Print each state
	printf("state %d: %s\n", i, states[i]);
	}
    return 0; //To see if everythin goes well

}
