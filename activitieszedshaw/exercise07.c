#include <stdio.h>
int main(int argc, char *argv[]){
	//Declaring the variables of type integer and double
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n",
			bugs, bug_rate);
	//Declaring a long variable because the result of the multiplication
	//has more than the soported by the type int
		long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	//After that prints the value with %ld which means long decimal
		printf("The entire universe has %ld bugs.\n",
		universe_of_defects);
	//Create another variable where multiplies two variables
		double expected_bugs = bugs * bug_rate;
		printf("You are expected to have %f bugs.\n",
		expected bugs);
	//Divide two variables using double because the numbes is too long
		double part_of_universe = expected_bugs / universe_of_defects;
		printf("That is only a %e portion of the universe.\n",
		part_of_universe);

	// this makes no sense, just a demo of something weird
		//Creates a variable char with a value of 0
		char nul_byte = '\0';
		//Thats why we can multiply and print the value
		int care_percentage = bugs * nul_byte;
		printf("Which means you should care %d%%,\n",
		care_percentage);

	return 0; //return 0 to see if everything goes well

}

/*
EXTRA CREDITS

1.- Make the number you assign to universe_of_defects various sizes
until you get a warning from the compiler.

exercise07.c:11:81: warning: integer overflow in expression [-Woverflow]
long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024 * 1024;

2.- What do these really huge numbers actually print out?
The entire universe has 0 bugs.

3.- Change long to unsigned long and try to find the number that makes that one too big.
Is the same result as the other one

4.- Go search online to find out what unsigned does.
Unsigned indicates that we can only use positive natural numbers starting with zero.
Can be used before char, short and long types.


*/
