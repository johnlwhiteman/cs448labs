#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	char buffer[7];
	if (argc < 2) return 1;
	printf("Input [%d]: %s\n", strlen(argv[1]), argv[1]);
	strcpy(buffer, argv[1]);
	return 0;
}

