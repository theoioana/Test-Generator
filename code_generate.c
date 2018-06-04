// the test will be in the input file and that should be copied and then used in the main project
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE *g;

int main()
{

	g = fopen("input", "w");
	fprintf(g, " 10 tests generated: \n");

    time_t t;
    srand((unsigned)time(&t));

	int i;

    for( i = 0; i < 9; i++) {
		int number_of_children = rand() % 30000 + 1;

		fprintf(g, "%d", number_of_children);
		fprintf(g, "\n");
	}

	return 0;
}
