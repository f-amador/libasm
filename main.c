#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern size_t ft_strlen(const char *s);
extern void ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern int ft_write(int fd, const char *s, int len);


void test_strlen(void)
{
    const char *tests[] = {
        "HELLO",
        "                ",
        "A",
        "This is a test",
        "",
        "1234567890",
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
        "!@#$%^&*()_+-=[]{}|;:',.<>?/~`",
        "Hello World! This is a longer string with spaces and punctuation.",
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."
    };
    
    size_t num_tests = sizeof(tests) / sizeof(tests[0]);
    for (size_t i = 0; i < num_tests; i++)
    {
        size_t ft_len = ft_strlen(tests[i]);
        size_t std_len = strlen(tests[i]);
        printf("ft_strlen: %2zu | strlen: %2zu | %s\n", ft_len, std_len, 
               ft_len == std_len ? "✓" : "✗");
    }
}

void test_strcpy(void)
{
    const char *sources[] = {
        "Hello",
        "World",
        "This is a test",
        "",
        "A",
        "12345",
        "Copy this string exactly!"
    };
    
    size_t num_tests = sizeof(sources) / sizeof(sources[0]);
    for (size_t i = 0; i < num_tests; i++)
    {
        char dest[100] = "Original content that should be overwritten";
        char dest_std[100];
        strcpy(dest_std, "Original content that should be overwritten");
        
        ft_strcpy(dest, sources[i]);
        strcpy(dest_std, sources[i]);
        
        printf("ft_strcpy: \"%s\" | strcpy: \"%s\" | %s\n", 
               dest, dest_std, strcmp(dest, dest_std) == 0 ? "✓" : "✗");
    }
}

void test_strcmp(void)
{
    struct {
        const char *s1;
        const char *s2;
    } tests[] = {
        {"Hello", "Hello"},
        {"Hello", "World"},
        {"Hello", "Hell"},
        {"Hell", "Hello"},
        {"Hello", "Hello!"},
        {"Hello!", "Hello"},
        {"", ""},
        {"", "Hello"},
        {"Hello", ""},
        {"abc", "abc"},
        {"abc", "abd"},
        {"abd", "abc"},
        {"ABC", "abc"},
        {"abc", "ABC"},
        {"Apple", "Apple"},
        {"Apple", "Apples"},
        {"Apples", "Apple"},
        {"123", "123"},
        {"123", "124"},
        {"124", "123"}
    };
    
    size_t num_tests = sizeof(tests) / sizeof(tests[0]);
    for (size_t i = 0; i < num_tests; i++)
    {
        int ft_result = ft_strcmp(tests[i].s1, tests[i].s2);
        int std_result = strcmp(tests[i].s1, tests[i].s2);
        
        int ft_sign = (ft_result > 0) - (ft_result < 0);
        int std_sign = (std_result > 0) - (std_result < 0);
        
        printf("ft_strcmp: %+3d | strcmp: %+3d | %s | \"%s\" vs \"%s\"\n",
               ft_result, std_result, ft_sign == std_sign ? "✓" : "✗",
               tests[i].s1, tests[i].s2);
    }
}

int main(void)
{
    printf("=== Testing ft_strlen ===\n");
    test_strlen();
    
    printf("\n=== Testing ft_strcpy ===\n");
    test_strcpy();
    
    printf("\n=== Testing ft_strcmp ===\n");
    test_strcmp();
    
    char *src = "Hello World!";
    char dest[50];
    ft_strcpy(dest, src);
    printf("\n=== Additional strcpy test ===\n");
    printf("Source: \"%s\"\n", src);
    printf("Dest:   \"%s\"\n", dest);
    
    const char *s1 = "This is a test";
    const char *s2 = "This is a test";
    int cmp1 = ft_strcmp(s1, s2);
    int cmp2 = strcmp(s1, s2);
    printf("\n=== Additional strcmp test ===\n");
    printf("Comparing identical strings: ft=%d, std=%d\n", cmp1, cmp2);
    
    char buffer1[10] = "abcdefgh";
    char buffer2[10] = "abcdefgh";
    ft_strcpy(buffer1, "xyz");
    strcpy(buffer2, "xyz");
    printf("\n=== Buffer overwrite test ===\n");
    printf("ft_strcpy: \"%s\"\n", buffer1);
    printf("strcpy:    \"%s\"\n", buffer2);
    printf("\n\n");
    ft_write(1, "a", 1);
    
    return 0;
}