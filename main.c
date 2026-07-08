#include <stdio.h>

extern size_t ft_strlen(const char *s);
extern void ft_strcpy(const char *dest, const char *src);

int main(void)
{
    printf("%lu\n", ft_strlen("HELLO"));
    printf("%lu\n", ft_strlen("                "));
    printf("%lu\n", ft_strlen("A"));
    printf("%lu\n", ft_strlen("This is a test"));
    char *src = "Hello";
    char dst[6];
    ft_strcpy(dst, src);
    printf("%s\n", dst);
//    printf("%lu\n", ft_strlen(NULL));
    return 0;
}