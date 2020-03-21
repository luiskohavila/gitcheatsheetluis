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









*/
