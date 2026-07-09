#include <stdio.h>
#include <string.h>
extern size_t ft_strlen(const char *s);
extern void ft_strcpy(const char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);

int main(void)
{
    printf("%lu\n", ft_strlen("HELLO"));
    printf("%lu\n", ft_strlen("                "));
    printf("%lu\n", ft_strlen("A"));
    printf("%lu\n", ft_strlen("This is a test"));
    char *src = "Hello";
    char dst[] = "bAAAAAAAAAAAAa";
    //ft_strcpy(dst, src);
    printf("%s\n", dst);
    printf("%d\n", ft_strcmp(src, dst));
    printf("%d\n", strcmp(src, dst));

//    printf("%lu\n", ft_strlen(NULL));
    return 0;
}