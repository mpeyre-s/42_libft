/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mytests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:28:48 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/13 21:56:32 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

void test_ft_isalpha() {
	int test_values[] = {'A', '1', 'b', '!', 'z'};
	printf("Test ft_isalpha:\n");
	for (int i = 0; i < 5; i++) {
		int result = ft_isalpha(test_values[i]);
		int expected = isalpha(test_values[i]);
		printf("Test: '%c' Expected: %d My result: %d\n", test_values[i], expected, result);
	}
}

void test_ft_isdigit() {
	int test_values[] = {'1', 'a', '0', '9', '-'};
	printf("\nTest ft_isdigit:\n");
	for (int i = 0; i < 5; i++) {
		int result = ft_isdigit(test_values[i]);
		int expected = isdigit(test_values[i]);
		printf("Test: '%c' Expected: %d My result: %d\n", test_values[i], expected, result);
	}
}

void test_ft_isascii() {
	int test_values[] = {'A', 128, 127, 0, 255};
	printf("\nTest ft_isascii:\n");
	for (int i = 0; i < 5; i++) {
		int result = ft_isascii(test_values[i]);
		int expected = isascii(test_values[i]);
		printf("Test: %d Expected: %d My result: %d\n", test_values[i], expected, result);
	}
}

void test_ft_isprint() {
	int test_values[] = {' ', 'A', 9, 127, 'z'};
	printf("\nTest ft_isprint:\n");
	for (int i = 0; i < 5; i++) {
		int result = ft_isprint(test_values[i]);
		int expected = isprint(test_values[i]);
		printf("Test: '%c' Expected: %d My result: %d\n", test_values[i], expected, result);
	}
}

void test_ft_isalnum() {
	int test_values[] = {'1', '@', 'A', 'z', '-'};
	printf("\nTest ft_isalnum:\n");
	for (int i = 0; i < 5; i++) {
		int result = ft_isalnum(test_values[i]);
		int expected = isalnum(test_values[i]);
		printf("Test: '%c' Expected: %d My result: %d\n", test_values[i], expected, result);
	}
}

void test_ft_toupper() {
	char test_values[] = {'a', 'A', 'z', 'Z', '1'};
	printf("\nTest ft_toupper:\n");
	for (int i = 0; i < 5; i++) {
		int result = ft_toupper(test_values[i]);
		int expected = toupper(test_values[i]);
		printf("Test: '%c' Expected: '%c' My result: '%c'\n", test_values[i], expected, result);
	}
}

void test_ft_tolower() {
	char test_values[] = {'A', 'a', 'Z', 'z', '1'};
	printf("\nTest ft_tolower:\n");
	for (int i = 0; i < 5; i++) {
		int result = ft_tolower(test_values[i]);
		int expected = tolower(test_values[i]);
		printf("Test: '%c' Expected: '%c' My result: '%c'\n", test_values[i], expected, result);
	}
}

void test_ft_atoi() {
	const char *test_values[] = {"42", "-42", "   42", "42abc", "+123", "-0", "2147483647", "-2147483648"};
	printf("\nTest ft_atoi:\n");
	for (int i = 0; i < 8; i++) {
		int result = ft_atoi(test_values[i]);
		int expected = atoi(test_values[i]);
		printf("Test: '%s' Expected: %d My result: %d\n", test_values[i], expected, result);
	}
}

char example_map(unsigned int i, char c) {
	return (c + i % 26);
}

void example_iteri(unsigned int i, char *c) {
	*c += i % 26;
}

void test_ft_strlen() {
	const char *test_str = "Hello, world!";
	size_t expected = strlen(test_str);
	size_t result = ft_strlen(test_str);
	printf("Test ft_strlen: '%s' Expected: %zu My result: %zu\n", test_str, expected, result);
}

void test_ft_strchr() {
	const char *test_str = "Hello, world!";
	int test_char = 'o';
	char *expected = strchr(test_str, test_char);
	char *result = ft_strchr(test_str, test_char);
	printf("Test ft_strchr: '%s', '%c' Expected: %s My result: %s\n", test_str, test_char, expected, result);
}

void test_ft_strrchr() {
	const char *test_str = "Hello, world!";
	int test_char = 'o';
	char *expected = strrchr(test_str, test_char);
	char *result = ft_strrchr(test_str, test_char);
	printf("Test ft_strrchr: '%s', '%c' Expected: %s My result: %s\n", test_str, test_char, expected, result);
}

void test_ft_strnstr() {
	const char *haystack = "Hello, world!";
	const char *needle = "world";
	size_t len = 12;
	char *expected = strnstr(haystack, needle, len);
	char *result = ft_strnstr(haystack, needle, len);
	printf("Test ft_strnstr: '%s', '%s', len %zu Expected: %s My result: %s\n", haystack, needle, len, expected, result);
}

void test_ft_strncmp() {
	const char *str1 = "Hello";
	const char *str2 = "Hellp";
	size_t n = 4;
	int expected = strncmp(str1, str2, n);
	int result = ft_strncmp(str1, str2, n);
	printf("Test ft_strncmp: '%s', '%s', %zu Expected: %d My result: %d\n", str1, str2, n, expected, result);
}

void test_ft_strdup() {
	const char *test_str = "Hello, world!";
	char *expected = strdup(test_str);
	char *result = ft_strdup(test_str);
	printf("Test ft_strdup: '%s' Expected: %s My result: %s\n", test_str, expected, result);
	free(expected);
	free(result);
}

void test_ft_strlcpy() {
	const char *src = "Hello, world!";
	char dst[20];
	size_t dstsize = 20;
	size_t expected = strlcpy(dst, src, dstsize);
	size_t result = ft_strlcpy(dst, src, dstsize);
	printf("Test ft_strlcpy: src='%s' dstsize=%zu Expected: %zu My result: %zu dst='%s'\n", src, dstsize, expected, result, dst);
}

void test_ft_strlcat() {
	char dst[20] = "Hello";
	char dst1[20] = "Hello";
	const char *src = ", world!";
	size_t dstsize = 20;
	size_t expected = strlcat(dst, src, dstsize);
	size_t result = ft_strlcat(dst1, src, dstsize);
	printf("Test ft_strlcat: dst='%s' src='%s' dstsize=%zu Expected: %zu My result: %zu\n", dst, src, dstsize, expected, result);
}

void test_ft_substr() {
	const char *s = "Hello, world!";
	unsigned int start = 7;
	size_t len = 5;
	char *result = ft_substr(s, start, len);
	printf("Test ft_substr: '%s', start %u, len %zu My result: %s\n", s, start, len, result);
	free(result);
}

void test_ft_strjoin() {
	const char *s1 = "Hello";
	const char *s2 = ", world!";
	char *result = ft_strjoin(s1, s2);
	printf("Test ft_strjoin: '%s', '%s' My result: %s\n", s1, s2, result);
	free(result);
}

void test_ft_strtrim() {
	const char *s1 = "  Hello, world!  ";
	const char *set = " ";
	char *result = ft_strtrim(s1, set);
	printf("Test ft_strtrim: '%s', '%s' My result: %s\n", s1, set, result);
	free(result);
}

void test_ft_split() {
	const char *s = "Hello world 42";
	char c = ' ';
	char **result = ft_split(s, c);
	printf("Test ft_split: '%s', '%c'\n", s, c);
	for (int i = 0; result[i]; i++) {
		printf("Result[%d]: %s\n", i, result[i]);
		free(result[i]);
	}
	free(result);
}

void test_ft_itoa() {
	int n = 12345;
	char *result = ft_itoa(n);
	printf("Test ft_itoa: %d My result: %s\n", n, result);
	free(result);
}

void test_ft_strmapi() {
	const char *s = "Hello";
	char *result = ft_strmapi(s, example_map);
	printf("Test ft_strmapi: '%s' My result: %s\n", s, result);
	free(result);
}

void test_ft_striteri() {
	char s[] = "Hello";
	ft_striteri(s, example_iteri);
	printf("Test ft_striteri: Modified string: %s\n", s);
}

void test_ft_memset() {
	char buffer[20] = "Hello, world!";
	char expected[20];
	memset(expected, 'A', 5);
	ft_memset(buffer, 'A', 5);
	printf("Test ft_memset: Expected: %.*s My result: %.*s\n", 5, expected, 5, buffer);
}

void test_ft_bzero() {
	char buffer[20] = "Hello, world!";
	char expected[20] = "Hello, world!";
	bzero(expected, 6);
	ft_bzero(buffer, 6);
	printf("Test ft_bzero:\n");
	printf("Expected (first 6 bytes should be zero): ");
	for (int i = 0; i < 6; i++) printf("%d ", expected[i]);
	printf("\nMy result: ");
	for (int i = 0; i < 6; i++) printf("%d ", buffer[i]);
	printf("\n");
}

void test_ft_calloc() {
	size_t count = 5;
	size_t size = sizeof(int);
	int *result = ft_calloc(count, size);
	printf("Test ft_calloc (expect all zero-initialized):\n");
	for (size_t i = 0; i < count; i++) {
		printf("result[%zu]: %d ", i, result[i]);
	}
	printf("\n");
	free(result);
}

void test_ft_memcpy() {
	const char src[20] = "Hello, world!";
	char dst[20];
	char expected[20];
	memcpy(expected, src, 13);
	ft_memcpy(dst, src, 13);
	printf("Test ft_memcpy: Expected: %s My result: %s\n", expected, dst);
}

void test_ft_memmove() {
	char src[20] = "Hello, world!";
	char dst[20];
	char expected[20];
	memmove(expected, src, 13);
	ft_memmove(dst, src, 13);
	printf("Test ft_memmove: Expected: %s My result: %s\n", expected, dst);
}

void test_ft_memchr() {
	const char str[20] = "Hello, world!";
	int test_char = 'o';
	char *expected = memchr(str, test_char, 13);
	char *result = ft_memchr(str, test_char, 13);
	printf("Test ft_memchr: '%s', '%c' Expected: %s My result: %s\n", str, test_char, expected, result);
}

void test_ft_memcmp() {
	const char str1[20] = "Hello, world!";
	const char str2[20] = "Hello, worle!";
	size_t n = 13;
	int expected = memcmp(str1, str2, n);
	int result = ft_memcmp(str1, str2, n);
	printf("Test ft_memcmp: '%s', '%s', %zu Expected: %d My result: %d\n", str1, str2, n, expected, result);
}

void del(void *content) {
	free(content);
}

void print_content(void *content) {
	printf("%s ", (char *)content);
}

void *duplicate_content(void *content) {
	char *dup = strdup((char *)content);
	return dup;
}

void test_ft_lstnew() {
	char *content = strdup("Hello");
	t_list *node = ft_lstnew(content);
	printf("Test ft_lstnew: Expected content: %s, My content: %s\n", content, (char *)node->content);
	free(content);
	free(node);
}

void test_ft_lstadd_front() {
	t_list *head = NULL;
	t_list *node1 = ft_lstnew(strdup("world"));
	t_list *node2 = ft_lstnew(strdup("Hello"));
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	printf("Test ft_lstadd_front: Expected order: Hello world, My order: ");
	ft_lstiter(head, print_content);
	printf("\n");
	ft_lstclear(&head, del);
}

void test_ft_lstsize() {
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(strdup("One")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Two")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Three")));
	int size = ft_lstsize(head);
	printf("Test ft_lstsize: Expected size: 3, My size: %d\n", size);
	ft_lstclear(&head, del);
}

void test_ft_lstlast() {
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(strdup("First")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Last")));
	t_list *last = ft_lstlast(head);
	printf("Test ft_lstlast: Expected content: Last, My content: %s\n", (char *)last->content);
	ft_lstclear(&head, del);
}

void test_ft_lstadd_back() {
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(strdup("First")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Second")));
	printf("Test ft_lstadd_back: Expected order: First Second, My order: ");
	ft_lstiter(head, print_content);
	printf("\n");
	ft_lstclear(&head, del);
}

void test_ft_lstdelone() {
	t_list *node = ft_lstnew(strdup("To delete"));
	ft_lstdelone(node, del);
	printf("Test ft_lstdelone: Node deleted (no memory leak should occur).\n");
}

void test_ft_lstclear() {
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(strdup("One")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Two")));
	ft_lstclear(&head, del);
	printf("Test ft_lstclear: List cleared (no memory leak should occur).\n");
}

void test_ft_lstiter() {
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(strdup("One")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Two")));
	printf("Test ft_lstiter: Expected output: One Two, My output: ");
	ft_lstiter(head, print_content);
	printf("\n");
	ft_lstclear(&head, del);
}

void test_ft_lstmap() {
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(strdup("One")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Two")));
	t_list *mapped = ft_lstmap(head, duplicate_content, del);
	printf("Test ft_lstmap: Expected output: One Two, My output: ");
	ft_lstiter(mapped, print_content);
	printf("\n");
	ft_lstclear(&head, del);
	ft_lstclear(&head, del);
}

int main() {
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_isalnum();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_atoi();

	printf("\n--------------------------\n");

	test_ft_strlen();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strnstr();
	test_ft_strncmp();
	test_ft_strdup();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();

	printf("\n--------------------------\n");

	test_ft_memset();
	test_ft_bzero();
	test_ft_calloc();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memchr();
	test_ft_memcmp();

	printf("\n--------------------------\n");

	test_ft_lstnew();
	test_ft_lstadd_front();
	test_ft_lstsize();
	test_ft_lstlast();
	test_ft_lstadd_back();
	test_ft_lstdelone();
	test_ft_lstclear();
	test_ft_lstiter();
	test_ft_lstmap();
	return 0;
}
