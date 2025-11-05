#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

char test_mapi(unsigned int i, char c)
{
    (void)i;
    return c - 32;
}

void test_iteri(unsigned int i, char *c)
{
    (void)i;
    *c = *c + 1;
}

int main(void)
{
    printf("===== TEST IS FUNCTIONS =====\n");
    printf("ft_isalpha('A') = %d | isalpha = %d\n", ft_isalpha('A'), isalpha('A'));
    printf("ft_isdigit('5') = %d | isdigit = %d\n", ft_isdigit('5'), isdigit('5'));
    printf("ft_isalnum('Z') = %d | isalnum = %d\n", ft_isalnum('Z'), isalnum('Z'));
    printf("ft_isascii(100) = %d | (100>=0&&100<=127) = %d\n",
           ft_isascii(100), (100 >= 0 && 100 <= 127));
    printf("ft_isprint(' ') = %d | isprint = %d\n", ft_isprint(' '), isprint(' '));

    printf("\n===== TEST MEM FUNCTIONS =====\n");
    char mem1[20] = "Hello World";
    char mem2_ft[20];
    char mem2_std[20];
    ft_bzero(mem2_ft, 20);
    bzero(mem2_std, 20);
    printf("ft_bzero | bzero => OK (not visible test)\n");

    printf("ft_memcpy = %s | memcpy = %s\n",
        (char *)ft_memcpy(mem2_ft, mem1, 11),
        (char *)memcpy(mem2_std, mem1, 11)
    );

    char overlap_ft[] = "123456789";
    char overlap_std[] = "123456789";
    ft_memmove(overlap_ft + 2, overlap_ft, 5);
    memmove(overlap_std + 2, overlap_std, 5);
    printf("ft_memmove = %s | memmove = %s\n", overlap_ft, overlap_std);

    char mem3_ft[10];
    char mem3_std[10];
    ft_memset(mem3_ft, 'A', 5); mem3_ft[5]='\0';
    memset(mem3_std, 'A', 5);   mem3_std[5]='\0';
    printf("ft_memset = %s | memset = %s\n", mem3_ft, mem3_std);

    printf("ft_memchr = %s | memchr = %s\n",
        (char *)ft_memchr("Hello", 'e', 5),
        (char *)memchr("Hello", 'e', 5)
    );

    printf("ft_memcmp('ABC','ABD',2) = %d | memcmp = %d\n",
        ft_memcmp("ABC","ABD",2), memcmp("ABC","ABD",2));

    printf("\n===== TEST CALLOC =====\n");
    int *tab = ft_calloc(5, sizeof(int));
    int *tab2 = calloc(5, sizeof(int));
    printf("ft_calloc[0]=%d | calloc[0]=%d\n", tab[0], tab2[0]);
    free(tab); free(tab2);

    printf("\n===== TEST STRINGS =====\n");
    printf("ft_strlen('Hello') = %zu | strlen = %zu\n",
        ft_strlen("Hello"), strlen("Hello"));

    char dst1_ft[20];
    char dst1_std[20];
    ft_strlcpy(dst1_ft, "Salut", 20);
    strlcpy(dst1_std, "Salut", 20);
    printf("ft_strlcpy = %s | strlcpy = %s\n", dst1_ft, dst1_std);

    char dst2_ft[20] = "Yo ";
    char dst2_std[20] = "Yo ";
    ft_strlcat(dst2_ft, "man", 20);
    strlcat(dst2_std, "man", 20);
    printf("ft_strlcat = %s | strlcat = %s\n", dst2_ft, dst2_std);

    printf("ft_strdup = %s | strdup = %s\n",
        ft_strdup("Test"), strdup("Test"));

    printf("ft_toupper('a') = %c | toupper = %c\n",
        ft_toupper('a'), toupper('a'));
    printf("ft_tolower('A') = %c | tolower = %c\n",
        ft_tolower('A'), tolower('A'));

    printf("ft_strchr = %s | strchr = %s\n",
        ft_strchr("Bonjour", 'j'),
        strchr("Bonjour", 'j'));

    printf("ft_strrchr = %s | strrchr = %s\n",
        ft_strrchr("Bonjour", 'o'),
        strrchr("Bonjour", 'o'));

    printf("ft_strncmp = %d | strncmp = %d\n",
        ft_strncmp("abc","abd",2),
        strncmp("abc","abd",2));

    printf("ft_strnstr = %s | (strnstr no Linux)\n",
        ft_strnstr("HelloWorld","World",10));

    char *map = ft_strmapi("abc", test_mapi);
    printf("ft_strmapi('abc') = %s\n", map);
    free(map);

    char iter_ft[] = "abc";
    ft_striteri(iter_ft, test_iteri);
    printf("ft_striteri('abc'+1) = %s\n", iter_ft);

    printf("\n===== TEST ATOI / ITOA =====\n");
    printf("ft_atoi('42') = %d | atoi = %d\n", ft_atoi("42"), atoi("42"));
    char *itoa = ft_itoa(1234);
    printf("ft_itoa(1234) = %s\n", itoa);
    free(itoa);

    printf("\n===== TEST PUT FD =====\n");
    ft_putstr_fd("ft_putchar_fd/putstr_fd/putendl_fd/putnbr_fd:\n", 1);
    ft_putchar_fd('X', 1);
    ft_putstr_fd("\nHello", 1);
    ft_putendl_fd(" world", 1);
    ft_putnbr_fd(123, 1);
    ft_putchar_fd('\n', 1);

    printf("\n===== TEST SUBSTR / JOIN / TRIM / SPLIT =====\n");
    printf("ft_substr = %s\n", ft_substr("Hello", 1, 3));
    printf("ft_strjoin = %s\n", ft_strjoin("Hello ", "World"));
    printf("ft_strtrim = %s\n", ft_strtrim("--Hello--", "-"));

    char **split = ft_split("Un deux trois", ' ');
    int i = 0;
    while (split[i])
    {
        printf("split[%d] = %s\n", i, split[i]);
        free(split[i]);
        i++;
    }
    free(split);

    printf("\n✅ FIN DES TESTS ✅\n");
    return 0;
}

