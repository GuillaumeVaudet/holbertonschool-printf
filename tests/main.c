#include "../main.h"
#include <stdio.h>

/**
* main - entry point
* Return: int - 0 (successful)
*/

int main(void)
{
	char c = 'a';
	char *s = "Hello";
	char *s_null = NULL;

	int len1, len2;


	len1 = printf("Test avec printf : %c\n", c);
	len2 = _printf("Test avec _printf : %c\n", c);
	printf("printf retourne : %d\n", len1);
	printf("_printf retourne : %d\n", len2);

	printf("Test de comportement avec printf pour c = %c\n", c);
	printf("Test de comportement avec _printf pour c = %c\n", c);

	len1 = 	printf("Test de comportement avec printf pour s = %s\n", s);
	len2 = _printf("Test de comportement avec _printf pour s = %s\n", s);
	printf("printf retourne : %d\n", len1);
	printf("_printf retourne : %d\n", len2);

	len1 = printf("Test de comportement avec printf pour s (NULL) = %s\n", s_null);
	len2 = _printf("Test de comportement avec _printf pour s (NULL) = %s\n", s_null);
	printf("printf retourne : %d\n", len1);
	printf("_printf retourne : %d\n", len2);

	len1 = printf("Test de comportement avec printf pour %% \n");
	len2 = _printf("Test de comportement avec _printf pour %% \n");
	printf("printf retourne : %d\n", len1);
	printf("_printf retourne : %d\n", len2);

	printf("---------------------------------début % ----------------------------------------\n");

	len1 = printf("Test de comportement avec printf pour %");
	len2 = _printf("Test de comportement avec _printf pour %");
	printf("printf retourne : %d\n", len1);
	printf("_printf retourne : %d\n", len2);

	printf("---------------------------------fin % ----------------------------------------\n");

	len1 = printf("");
	len2 = _printf("");
	printf("printf retourne : %d\n", len1);
	printf("_printf retourne : %d\n", len2);

	len1 = printf("Test de comportement avec printf pour %y \n");
	len2 = _printf("Test de comportement avec _printf pour %y \n");
	printf("printf retourne : %d\n", len1);
	printf("_printf retourne : %d\n", len2);
	return (0);
}
