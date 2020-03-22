#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;

	if(argc == 1){
		printf("You only have one argument. You suck.\n");
	}else if(argc > 1 && argc < 4){
		printf("Here's your arguments:\n");

	for(i=0;i < argc; i++){
		printf("%s ", argv[i]);
	}
	printf("\n");
	}else {
		printf("You have too many arguments. You suck.\n");
	}
	return 0;
}

/*
EXTRA CREDIT 12

1.- You were briefly introduced to && , which does an "and" comparison, so go
research online the different "boolean operators".
There are two more
The || operator which means or and could take two conditions in a difference with
and that only see if all is accomplish
4 || 6
The ! operator which means not and is used when we dont want to select
a value in our condition.
A!= 1
2.- Write a few more test cases for this program to see what you can come up with.

I noticed that if I change the == for != I broke the code and only appears:
You only have one argument. You suck.
Also if I change the && for || it continuous working in some cases


3.- Go back to Exercises 10 and 11, and use if-statements to make the loops exit
early. You'll need the break statement to do that. Go read about it.
Exercise 10.
I include the break in the for loop to limit to one the states, it will only
appear the state of California and then the code will break

for (i = 0; i < num_states; i++)
{
 	if (i == 1) {
	 	break; }
	 	printf("state %d: %s\n", i, states[i]);
}


Exercise 11.
I used the break in this part to limit the number of states that will be
appear in this case it will appear only one that is California and then
the code will break
while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;

        if (i == 1) {
            break;
        }
    }


4.- Is the first test really saying the right thing? To you the "first argument"
isn't the same first argument a user entered. Fix it.
We have to subtract one to the argc an then will be appear the real first argument,
because we have to have in consideration the space of the name of the program
a.out
for(i=0;i < argc - 1; i++){
                printf("%s ", argv[i]);
        }
*/
