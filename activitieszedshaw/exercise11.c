#include <stdio.h>

int main(int argc, char *argv[])
{
//go through each string in argv
	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n",i,argv[i]);
		i++;
	}
//let's make our own array of strings
	char *states[] = {
	"California", "Oregon",
	"Washington", "Texas"
	};

	int num_states = 4;
	i = 0;
	while(i < num_states){
		printf("state %d: %s\n",i,states[i]);
		i++;
	}
	return 0;
}

/*
EXTRA CREDITS
1.-
Those are the changed that I did in order to complete the code, I changed
the value of i to argc - 1 to take the arguments in the input
without taking the name of the program

        int i = argc - 1;
        while(i >= 0) {
                printf("arg %d: %s\n",i,argv[i]);
                i--;
        }

In the other loop I take the num of states minus 1, because I have in
cosideration the index of the array that starts in 0

        int num_states = 4;
        i = num_states - 1;
        while(i >= 0){
                printf("state %d: %s\n",i,states[i]);
                i--;
 and prints:
arg 4: 4
arg 3: 3
arg 2: 2
arg 1: 1
arg 0: ./a.out
state 3: Texas
state 2: Washington
state 1: Oregon
state 0: California

2.-
I did another while loop to store the states in the arguments

while(i < argc){
	states[i] = argv[i];
    i++;}

3.-
I made a for loop covering the while loop with the condition
for (j=0,j<argc,i++);
works and appeared lots of argument according to the typed

*/
