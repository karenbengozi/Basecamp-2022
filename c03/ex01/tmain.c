#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

// int                ft_strcmp(char *s1, char *s2);
// char            *ft_strcat(char *dest, char *src);
// char            *ft_strstr(char *str, char *to_find);
// char            *ft_strncat(char *dest, char *src, unsigned int nb);
// unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
int                ft_strncmp(char *s1, char *s2, unsigned int n);
// void            test_00(void);
void            test_01(void);
// void            test_02(void);
// void            test_03(void);
// void            test_04(void);

int main()
{
    // test_00();
    test_01();
    // test_02();
    // test_03();
    // test_04();
}


// void    test_00(void)
// {
//     printf("Test 00\n");
//     printf("\t0 %d\n", ft_strcmp("aa", "aa"));
//     printf("\t-1 %d\n", ft_strcmp("aA", "aa"));
//     printf("\t1 %d\n", ft_strcmp("aa", "aA"));
//     printf("\t0 %d\n", ft_strcmp("aa", "a"));
//     printf("\t0 %d\n", ft_strcmp("a", "aa"));
// }

void    test_01(void)
{
    printf("Test 01\n");
    printf("\t-84 %d\n", ft_strncmp("aa\n", "aa^", 3));
    printf("\t-32 %d\n", ft_strncmp("aA\n", "aa", 2));
    printf("\t32 %d\n", ft_strncmp("a\n", "Aa", 10));
    printf("\t0 %d\n", ft_strncmp("nao", "NAO", 0));
}

// void    test_02(void)
// {
//     char    dest[20];
//     char    *pointer;

//     dest[0] = '\0';
//     pointer = ft_strcat(dest, "belle");
//     printf("%p %p\n", dest, pointer);
//     printf("Esperado \"belle\", recebido \"%s\"\n", dest);
// }

// void    test_03(void)
// {
//     char    dest[10];
//     char    *pointer;

//     dest[0] = '4';
//     dest[1] = '2';
//     dest[2] = 0;
//     pointer = ft_strncat(dest, " + 42 = 2", 5);
//     printf("%p %p\n", dest, pointer);
//     printf("Esperado \"42 + 42\", recebido \"%s\"\n", dest);
// }

// void    test_04(void)
// {
//     char    *str;

//     str = "marvinbrabo";
//     printf("%p == %p\n", str, ft_strstr(str, ""));
//     printf("%p == %p\n", str, ft_strstr(str, "mar"));
//     printf("%p == %p\n", (str + 4), ft_strstr(str, "vin"));
// }