#include <stdio.h>
#include <string.h>
#include "main.h"
int main()

/**
 * _strcat -concatenates two strings
 * @src: second string to copy from
 * @dest: string to be overwritten
 * Description: concatenates src to end of dest
 * Return: pointer to dest
 **/

{
	char destination[] = "src ";
	char source[] = "dest";
	strcat(destination,source);
	printf("%s/n", destination);
	return 0;
}
