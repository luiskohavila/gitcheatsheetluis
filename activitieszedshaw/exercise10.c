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

/*
EXTRA CREDITS

1.- Figure out what kind of code you can put into the parts of a for-loop .

It is divided into three parts: the first one is the initialization of the expression,
then separated by a semicolon is the condition, finally separated by a semicolon is the
counter, that will add or subtract numbers until the condition.

2.- Look up how to use the ',' (comma) character to separate multiple statements
in the parts of the for-loop , but between the ';' (semicolon) characters.

The comma is used to separate parameters in a list, and function as loops. On the
other hand the semicolon is used end all the lines of code in c, and, in loops for
the separation of the parts.

3.- Read what a NULL is and try to use it in one of the elements of the states
array to see what it'll print.

It prints (null) in the slot of the array:
state 0: California
state 1: (null)
state 2: Oregon
state 3: Washington

4.- See if you can assign an element from the states array to the argv array before
printing both. Try the inverse.

Yes I can, in my case I assigned the argument 1 to the the slot of Texas in the array and when I printed appeared:
arg 1: Texas
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas
When I tried the inverse I notice that the name of the state change for the argument I wrote:
arg 1: holaxd
state 0: California
state 1: Oregon
state 2: Washington
state 3: holaxd

*/
