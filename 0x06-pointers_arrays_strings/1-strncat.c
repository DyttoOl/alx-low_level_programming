#include <stdio.h>
#include <string.h>
#include "main.h"

#define DEST_SIZE 40

int main()
{
	char src[] = "World Here";
	char dest[DEST_SIZE] = "Hello";

	strncat(dest, src, 5);
	printf(dest);

	return 0;
}

