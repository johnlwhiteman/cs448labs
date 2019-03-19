#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	volatile int isAuthenticatedFlag = 0;
	char buffer[7];
	if (argc < 2) return 1;
	strcpy(buffer, argv[1]);
	printf("isAuthenticatedFlag: %d\n", isAuthenticatedFlag);
	if (0 != isAuthenticatedFlag) {
		printf("Congratulations. You are authenticated!\n");
	} else {
		printf("Sorry. You are not authenticated!\n");
	}
	return 0;
}

