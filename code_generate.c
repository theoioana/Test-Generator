// the test will be in the input file and that should be copied and then used in the main project

/**
* @file code_generate.c
* @brief C library implementation that generates inputs for the problem Order (Infoarena)
* @author Theodora Danciulescu
* @date 06/05/18.
*/

#include <stdio.h> /// > printf() , rand()
#include <stdlib.h> 
#include <time.h> /// > srand((unsigned)time)

FILE *g;

int main()
{

	g = fopen("input", "w");
	fprintf(g, " 10 tests generated: \n");

    time_t t;
    srand((unsigned)time(&t));

	int i;

	/// generate 10 inputs, 10 integers from the interval [1, 30000] 
    for( i = 0; i < 9; i++) {
		int number_of_children = rand() % 30000 + 1;

		fprintf(g, "%d", number_of_children);
		fprintf(g, "\n");
	}

	return 0;
}
