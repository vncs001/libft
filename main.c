/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:48:31 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/18 17:16:59 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);

//--------------
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

// --------------
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

// --------------
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// --------------
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// =====================================================
// AUX FUNCTIONS
// =====================================================

char	to_upper_map(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	striteri_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void	del_content(void *content)
{
	free(content);
}

void	*dup_content(void *content)
{
	return (ft_strdup((char *)content));
}

// =====================================================
// MAIN
// =====================================================

int	main(void)
{
	printf("===== TESTES LIBFT =====\n\n");

	// =====================================================
	// PARTE 1
	// =====================================================

	printf("----------------\n");
	printf("ft_isalpha:\n");
	printf("Expected: 1\n");
	printf("Result: %d\n", ft_isalpha('A'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_isdigit:\n");
	printf("Expected: 1\n");
	printf("Result: %d\n", ft_isdigit('5'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_isalnum:\n");
	printf("Expected: 0\n");
	printf("Result: %d\n", ft_isalnum('@'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_isascii:\n");
	printf("Expected: 1\n");
	printf("Result: %d\n", ft_isascii(127));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_isprint:\n");
	printf("Expected: 0\n");
	printf("Result: %d\n", ft_isprint('\n'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_strlen:\n");
	printf("Expected: 5\n");
	printf("Result: %zu\n", ft_strlen("hello"));
	printf("----------------\n\n");

	char buf[10] = "abcdef";
	ft_memset(buf, 'X', 3);

	printf("----------------\n");
	printf("ft_memset:\n");
	printf("Expected: XXXdef\n");
	printf("Result: %s\n", buf);
	printf("----------------\n\n");

	char bz[5] = "test";
	ft_bzero(bz, 2);

	printf("----------------\n");
	printf("ft_bzero:\n");
	printf("Expected: st\n");
	printf("Result: %s\n", bz + 2);
	printf("----------------\n\n");

	char src[] = "abc";
	char dst[10];
	ft_memcpy(dst, src, 4);

	printf("----------------\n");
	printf("ft_memcpy:\n");
	printf("Expected: abc\n");
	printf("Result: %s\n", dst);
	printf("----------------\n\n");

	char mm[10] = "123456";
	ft_memmove(mm + 2, mm, 4);

	printf("----------------\n");
	printf("ft_memmove:\n");
	printf("Expected: 121234\n");
	printf("Result: %s\n", mm);
	printf("----------------\n\n");

	char lcpy[10];
	ft_strlcpy(lcpy, "hello", 10);

	printf("----------------\n");
	printf("ft_strlcpy:\n");
	printf("Expected: hello\n");
	printf("Result: %s\n", lcpy);
	printf("----------------\n\n");

	char lcat[20] = "Hi ";
	ft_strlcat(lcat, "there", 20);

	printf("----------------\n");
	printf("ft_strlcat:\n");
	printf("Expected: Hi there\n");
	printf("Result: %s\n", lcat);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_toupper:\n");
	printf("Expected: A\n");
	printf("Result: %c\n", ft_toupper('a'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_tolower:\n");
	printf("Expected: a\n");
	printf("Result: %c\n", ft_tolower('A'));
	printf("----------------\n\n");

	char *s = "banana";

	printf("----------------\n");
	printf("ft_strchr:\n");
	printf("Expected: anana\n");
	printf("Result: %s\n", ft_strchr(s, 'a'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_strrchr:\n");
	printf("Expected: a\n");
	printf("Result: %s\n", ft_strrchr(s, 'a'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_strncmp:\n");
	printf("Expected: negative value\n");
	printf("Result: %d\n", ft_strncmp("abc", "abd", 3));
	printf("----------------\n\n");

	char mem[] = "hello";

	printf("----------------\n");
	printf("ft_memchr:\n");
	printf("Expected: llo\n");
	printf("Result: %s\n", (char *)ft_memchr(mem, 'l', 5));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_memcmp:\n");
	printf("Expected: negative value\n");
	printf("Result: %d\n", ft_memcmp("abc", "abd", 3));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_strnstr:\n");
	printf("Expected: world abc\n");
	printf("Result: %s\n",
		ft_strnstr("hello world abc", "world", 11));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_atoi:\n");
	printf("Expected: 123\n");
	printf("Result: %d\n", ft_atoi("123"));
	printf("----------------\n\n");

	// =====================================================
	// PARTE 2
	// =====================================================

	int *arr = (int *)ft_calloc(5, sizeof(int));

	printf("----------------\n");
	printf("ft_calloc:\n");
	printf("Expected: 0 0 0 0 0\n");
	printf("Result: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	printf("----------------\n\n");

	free(arr);

	char *dup = ft_strdup("Hello Libft");

	printf("----------------\n");
	printf("ft_strdup:\n");
	printf("Expected: Hello Libft\n");
	printf("Result: %s\n", dup);
	printf("----------------\n\n");

	free(dup);

	char *sub = ft_substr("Hello World", 6, 5);

	printf("----------------\n");
	printf("ft_substr:\n");
	printf("Expected: World\n");
	printf("Result: %s\n", sub);
	printf("----------------\n\n");

	free(sub);

	char *join = ft_strjoin("Hello ", "42");

	printf("----------------\n");
	printf("ft_strjoin:\n");
	printf("Expected: Hello 42\n");
	printf("Result: %s\n", join);
	printf("----------------\n\n");

	free(join);

	char *trim = ft_strtrim("   hello world   ", " ");

	printf("----------------\n");
	printf("ft_strtrim:\n");
	printf("Expected: hello world\n");
	printf("Result: %s\n", trim);
	printf("----------------\n\n");

	free(trim);

	char **split = ft_split("one,two,three", ',');

	printf("----------------\n");
	printf("ft_split:\n");
	printf("Expected:\none\ntwo\nthree\n");
	printf("Result:\n");

	for (int i = 0; split[i]; i++)
	{
		printf("%s\n", split[i]);
		free(split[i]);
	}

	free(split);

	printf("----------------\n\n");

	char *itoa = ft_itoa(-12345);

	printf("----------------\n");
	printf("ft_itoa:\n");
	printf("Expected: -12345\n");
	printf("Result: %s\n", itoa);
	printf("----------------\n\n");

	free(itoa);

	// =====================================================
	// PARTE 3
	// =====================================================

	char *mapped = ft_strmapi("libft", to_upper_map);

	printf("----------------\n");
	printf("ft_strmapi:\n");
	printf("Expected: LIBFT\n");
	printf("Result: %s\n", mapped);
	printf("----------------\n\n");

	free(mapped);

	char iteri[] = "libft";
	ft_striteri(iteri, striteri_upper);

	printf("----------------\n");
	printf("ft_striteri:\n");
	printf("Expected: LIBFT\n");
	printf("Result: %s\n", iteri);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_putchar_fd:\n");
	printf("Expected: A\n");
	printf("Result: ");
	fflush(stdout); //manda o buffer do printf para escrever
	ft_putchar_fd('A', 1);
	printf("\n");
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_putstr_fd:\n");
	printf("Expected: Hello\n");
	printf("Result: ");
	fflush(stdout); //manda o buffer do printf para escrever
	ft_putstr_fd("Hello", 1);
	printf("\n");
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_putendl_fd:\n");
	printf("Expected: Hello Endl\n");
	printf("Result: ");
	fflush(stdout); //manda o buffer do printf para escrever
	ft_putendl_fd("Hello Endl", 1);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_putnbr_fd:\n");
	printf("Expected: -4242\n");
	printf("Result: ");
	fflush(stdout); //manda o buffer do printf para escrever
	ft_putnbr_fd(-4242, 1);
	printf("\n");
	printf("----------------\n\n");

	// =====================================================
	// BONUS LIST
	// =====================================================

	t_list *lst = NULL;

	t_list *n1 = ft_lstnew(ft_strdup("Node 1"));
	t_list *n2 = ft_lstnew(ft_strdup("Node 2"));
	t_list *n3 = ft_lstnew(ft_strdup("Node 3"));

	printf("----------------\n");
	printf("ft_lstnew:\n");
	printf("Expected: Node 1\n");
	printf("Result: %s\n", (char *)n1->content);
	printf("----------------\n\n");

	ft_lstadd_back(&lst, n1);
	ft_lstadd_back(&lst, n2);
	ft_lstadd_back(&lst, n3);

	printf("----------------\n");
	printf("ft_lstsize:\n");
	printf("Expected: 3\n");
	printf("Result: %d\n", ft_lstsize(lst));
	printf("----------------\n\n");

	t_list *last = ft_lstlast(lst);

	printf("----------------\n");
	printf("ft_lstlast:\n");
	printf("Expected: Node 3\n");
	printf("Result: %s\n", (char *)last->content);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_lstiter:\n");
	printf("Expected:\nNode 1\nNode 2\nNode 3\n");
	printf("Result:\n");
	ft_lstiter(lst, print_content);
	printf("----------------\n\n");

	t_list *mapped_lst = ft_lstmap(NULL, dup_content, del_content);

	printf("----------------\n");
	printf("ft_lstmap:\n");
	printf("Expected:\nNode 1\nNode 2\nNode 3\n");
	printf("Result:\n");
	ft_lstiter(mapped_lst, print_content);
	printf("----------------\n\n");

	t_list *front = ft_lstnew(ft_strdup("Front Node"));
	ft_lstadd_front(&lst, front);

	printf("----------------\n");
	printf("ft_lstadd_front:\n");
	printf("Expected: Front Node\n");
	printf("Result: %s\n", (char *)lst->content);
	printf("----------------\n\n");

	t_list *back = ft_lstnew(ft_strdup("Back Node"));
	ft_lstadd_back(&lst, back);

	last = ft_lstlast(lst);

	printf("----------------\n");
	printf("ft_lstadd_back:\n");
	printf("Expected: Back Node\n");
	printf("Result: %s\n", (char *)last->content);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_lstdelone:\n");
	printf("Expected: delete single node\n");
	printf("Result: OK\n");

	t_list *temp = ft_lstnew(ft_strdup("Temp Node"));
	ft_lstdelone(temp, del_content);

	printf("----------------\n\n");

	printf("----------------\n");
	printf("ft_lstclear:\n");
	printf("Expected: list cleared\n");

	ft_lstclear(&lst, del_content);
	ft_lstclear(&mapped_lst, del_content);

	printf("Result: OK\n");
	printf("----------------\n\n");

	printf("===== FIM DOS TESTES =====\n");

	return (0);
}


//==================+++[ANTIGO]+++========================
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int		ft_isalpha(int c);
// int		ft_isdigit(int c);
// int		ft_isalnum(int c);
// int		ft_isascii(int c);
// int		ft_isprint(int c);
// size_t	ft_strlen(const char *s);
// void	*ft_memset(void *s, int c, size_t n);
// void	ft_bzero(void *s, size_t n);
// void	*ft_memcpy(void *dest, const void *src, size_t n);
// void	*ft_memmove(void *dest, const void *src, size_t n);
// size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// size_t	ft_strlcat(char *dst, const char *src, size_t size);
// int		ft_toupper(int c);
// int		ft_tolower(int c);
// char	*ft_strchr(const char *s, int c);
// char	*ft_strrchr(const char *s, int c);
// int		ft_strncmp(const char *s1, const char *s2, size_t n);
// void	*ft_memchr(const void *s, int c, size_t n);
// int		ft_memcmp(const void *s1, const void *s2, size_t n);
// char	*ft_strnstr(const char *big, const char *little, size_t len);
// int		ft_atoi(const char *nptr);
// //--------------
// void	*ft_calloc(size_t nmemb, size_t size);
// char	*ft_strdup(const char *s);
// // --------------
// char	*ft_substr(char const *s, unsigned int start, size_t len);
// char	*ft_strjoin(char const *s1, char const *s2);
// char	*ft_strtrim(char const *s1, char const *set);
// char	**ft_split(char const *s, char c);
// char	*ft_itoa(int n);
// // --------------
// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// void	ft_striteri(char *s, void (*f)(unsigned int, char*));
// void	ft_putchar_fd(char c, int fd);
// void	ft_putstr_fd(char *s, int fd);
// void	ft_putendl_fd(char *s, int fd);
// void	ft_putnbr_fd(int n, int fd);
// // --------------
// t_list	*ft_lstnew(void *content);
// void	ft_lstadd_front(t_list **lst, t_list *new);
// int		ft_lstsize(t_list *lst);
// t_list	*ft_lstlast(t_list *lst);
// void	ft_lstadd_back(t_list **lst, t_list *new);
// void	ft_lstdelone(t_list *lst, void (*del)(void*));
// void	ft_lstclear(t_list **lst, void (*del)(void*));
// void	ft_lstiter(t_list *lst, void (*f)(void *));
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


// int main(void)
// {
//     printf("===== TESTES =====\n\n");

//     // ft_isalpha, ft_isdigit, ft_isalnum
//     printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
//     printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
//     printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));

//     // ft_isascii, ft_isprint
//     printf("ft_isascii(128): %d\n", ft_isascii(128));
//     printf("ft_isprint(' '): %d\n", ft_isprint(' '));

//     // ft_strlen
//     printf("ft_strlen(\"hello\"): %zu\n", ft_strlen("hello"));

//     // ft_memset
//     char buf[10] = "abcdef";
//     ft_memset(buf, 'X', 3);
//     printf("ft_memset: %s\n", buf);

//     // ft_bzero
//     char bz[5] = "test";
//     ft_bzero(bz, 2);
//     printf("ft_bzero: %s\n", bz);

//     // ft_memcpy
//     char src[] = "abc";
//     char dst[10];
//     ft_memcpy(dst, src, 4);
//     printf("ft_memcpy: %s\n", dst);

//     // ft_memmove (overlap)
//     char mm[10] = "123456";
//     ft_memmove(mm + 2, mm, 4);
//     printf("ft_memmove: %s\n", mm);

//     // ft_strlcpy
//     char lcpy[10];
//     ft_strlcpy(lcpy, "hello", 10);
//     printf("ft_strlcpy: %s\n", lcpy);

//     // ft_strlcat
//     char lcat[20] = "Hi ";
//     ft_strlcat(lcat, "there", 20);
//     printf("ft_strlcat: %s\n", lcat);

//     // ft_toupper / ft_tolower
//     printf("ft_toupper('a'): %c\n", ft_toupper('a'));
//     printf("ft_tolower('A'): %c\n", ft_tolower('A'));

//     // ft_strchr / ft_strrchr
//     char *s = "banana";
//     printf("ft_strchr: %s\n", ft_strchr(s, 'a'));
//     printf("ft_strrchr: %s\n", ft_strrchr(s, 'a'));

//     // ft_strncmp
//     printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3));

//     // ft_memchr
//     char mem[] = "hello";
//     printf("ft_memchr: %s\n", (char *)ft_memchr(mem, 'l', 15));

//     // ft_memcmp
//     printf("ft_memcmp: %d\n", ft_memcmp("abc", "abcd", 3));

//     // ft_strnstr
//     printf("ft_strnstr: %s\n", ft_strnstr("hello world abc", "world", 11));

//     // ft_atoi
//     printf("ft_atoi(\"123\"): %d\n\n", ft_atoi("123"));

// 	//=========================================

// 	// ft_calloc
//     int *arr = (int *)ft_calloc(5, sizeof(int));
//     printf("ft_calloc: ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
//     free(arr);

//     // ft_strdup
//     char *dup = ft_strdup("Hello Libft");
//     printf("ft_strdup: %s\n", dup);
//     free(dup);

//     // // ft_substr
//     // char *sub = ft_substr("Hello World", 6, 5);
//     // printf("ft_substr: %s\n", sub);
//     // free(sub);

//     // // ft_strjoin
//     // char *join = ft_strjoin("Hello ", "42");
//     // printf("ft_strjoin: %s\n", join);
//     // free(join);

//     // // ft_strtrim
//     // char *trim = ft_strtrim("   hello world   ", " ");
//     // printf("ft_strtrim: '%s'\n", trim);
//     // free(trim);

//     // // ft_split
//     // char **split = ft_split("one,two,three", ',');
//     // printf("ft_split:\n");
//     // for (int i = 0; split[i]; i++)
//     // {
//     //     printf("  [%d]: %s\n", i, split[i]);
//     //     free(split[i]);
//     // }
//     // free(split);

//     // // ft_itoa
//     // char *itoa = ft_itoa(-12345);
//     // printf("ft_itoa: %s\n", itoa);
//     // free(itoa);

//     return 0;
// }