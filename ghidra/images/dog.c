#include <stdio.h>
#include <stdlib.h>

int DOG_YEARS_FACTOR=7;
int HUMAN_YEARS_FACTOR;

int convertToDogYears(int humanYears) {
	return humanYears * DOG_YEARS_FACTOR;
}

int main(int argc, char **argv) {
	int humanYears = 0;
	int dogYears = 0;	
	if (argc < 2) {
		printf("Usage: ./dog <HUMAN YEARS>\n");
		return 1;
	}
	humanYears = atoi(argv[1]);
	dogYears = convertToDogYears(humanYears);
	printf("Human Years: %d\n", humanYears);
	printf("Dog Years:   %d\n", dogYears);
	return 0;
}
