/*
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (void)
{
	printf("TEST ft_isalpha : \n test caractere 'a' : %d, Vrai %d \n test caractere '0' : %d, Vrai %d\n\n", ft_isalpha('a'), isalpha('a'), ft_isalpha('0'), isalpha('0'));
	printf("TEST ft_isdigit : \n test caractere '2' : %d, Vrai %d \n test caractere 'b' : %d, Vrai %d\n\n", ft_isdigit('2'), isdigit('2'), ft_isdigit('b'), isdigit('b'));
	printf("TEST ft_isalnum : \n test caractere '2' : %d, Vrai %d \n test caractere '{' : %d, Vrai %d\n\n", ft_isalnum('2'), isalnum('2'), ft_isalnum('{'), isalnum('{'));
	printf("TEST ft_isascii : \n test caractere '2' : %d, Vrai %d \n test caractere 130(non ascii) : %d, Vrai %d\n\n", ft_isascii('2'), isascii('2'), ft_isascii(130), isascii(130));
	printf("TEST ft_isprint : \n test caractere '2' : %d, Vrai %d \n test '\t' : %d, Vrai %d\n\n", ft_isprint('2'), isprint('2'), ft_isprint('\t'), isprint('\t'));
	printf("TEST ft_strlen : \n test caractere str = bonjour : %zu, Vrai %lu \n test str vide : %zu, Vrai %lu\n\n", ft_strlen("bonjour"), strlen("bonjour"), ft_strlen(""), strlen(""));

//MEMSET
char p[] = {'a', 'b', 'c', 'd'};
printf("TEST MEMSET :\n\n");
for (int i=0; p[i]; i++)
	printf("%c ", p[i]);
ft_memset(p, '5', 2);
printf("\nmon memset : \n");
for (int i=0; p[i]; i++)
	printf("%c ", p[i]);
char p2[] = {'a', 'b', 'c', 'd'};
memset(p2, '5', 2);
printf("\nvrai memset : \n");
for (int i=0; p2[i]; i++)
	printf("%c ", p2[i]);

//BZERO
char p3[] = {'a', 'b', 'c', 'd'};
printf("\n\nTEST BZERO :\n\n");
for (int i=0; p3[i]; i++)
	printf("%c ", p3[i]);
ft_bzero(p3, 2);
printf("\nmon bzero : \n");
for (int i=0; p3[i]; i++)
	printf("%c ", p3[i]);
char p4[] = {'a', 'b', 'c', 'd'};
bzero(p4, 2);
printf("\nvrai bzero : \n");
for (int i=0; p4[i]; i++)
	printf("%c ", p4[i]);

//MEMCPY

char p5[] = {'a', 'b', 'c', 'd'} ;
printf("\n\nTEST MEMCPY :\n\n");
for (int i=0; p5[i]; i++)
	printf("%c ", p5[i]);
char p6[2];
ft_memcpy(p6, p5, 2);
printf("\nmon memcpy : \n");
for (int i=0; p6[i]; i++)
	printf("%c ", p6[i]);
char p7[2];
memcpy(p7, p5, 2);
printf("\nvrai memcpy : \n");
for (int i=0; p7[i]; i++)
	printf("%c ", p7[i]);

//MEMMOVE
char p8[] = {'a', 'b', 'c', 'd'} ;
printf("\n\nTEST MEMMOVE :\n\n");
for (int i=0; p8[i]; i++)
	printf("%c ", p8[i]);
char p9[2];
ft_memcpy(p9, p8, 2);
printf("\nmon memmove : \n");
for (int i=0; p9[i]; i++)
	printf("%c ", p9[i]);
char p10[2];
memcpy(p10, p8, 2);
printf("\nvrai memmove : \n");
for (int i=0; p10[i]; i++)
	printf("%c ", p10[i]);

}

*/
