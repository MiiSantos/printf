/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:42:58 by mandress          #+#    #+#             */
/*   Updated: 2021/11/23 18:22:19 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

/**
 * @brief The C library function int atoi(const char *str) converts the string
 * argument str to an integer (type int).
 * @param str This is the string representation of an integral number.
 * @return This function returns the converted integral number as an int value.
 * If no valid conversion could be performed, it returns zero.
 */
int			ft_atoi(const char *str);

/**
 * @brief The bzero function erases the data in the n bytes of the memory
 * starting at the location pointed to by s, by writing zeros (bytes containing
 * '\0') to that area.
 * @param s String to fill with zero.
 * @param n This is the number of bytes to be copied.
 */
void		ft_bzero(void *s, size_t n);

/**
 * @brief The calloc function allocates memory for an array of nb elements
 * of size bytes each and returns a pointer to the allocated memory. The memory
 * is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or
 * a unique pointer value that can later be successfully passed to free().
 * @param nb
 * @param size
 * @return void*
 */
void		*ft_calloc(unsigned int nb, size_t size);

/**
 * @brief The isalnum() function checks whether the argument passed is an
 * alphanumeric character (alphabet or number) or not.
 * @param a Character to be checked.
 * @return Returns 1 if a is an alphanumeric character. Returns 0 if argument
 * is neither an alphabet nor a digit.
 */
int			ft_isalnum(int a);

/**
 * @brief The C library function int isalpha() checks if the passed
 * character is alphabetic.
 * @param a This is the character to be checked.
 * @return This function returns non-zero value if c is an alphabet, else it
 * returns 0.
 */
int			ft_isalpha(int a);

/**
 * @brief The C library function int isascii() checks if the passed
 * character is ascii.
 * @param a This is the character to be checked.
 * @return This function returns non-zero value if c is an ascii, else it
 * returns 0.
 */
int			ft_isascii(int a);

/**
 * @brief The C library function int isdigit() checks if the passed int is
 * digit.
 * @param a This is the character to be checked.
 * @return This function returns non-zero value if c is an ascii, else it
 * returns 0.
 */
int			ft_isdigit(int a);

/**
 * @brief The isprint() function checks whether a character is a printable
 * character or not.
 * @param a This is the character to be checked.
 * @return This function returns non-zero value if c is an ascii, else it
 * returns 0.
 */
int			ft_isprint(int a);

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the
 * integer received as an argument. Negative numbers must be handled.
 * @param n The integer to convert.
 * @return The string representing the integer. NULL if the
allocation fails.
 */
char		*ft_itoa(int n);

/**
 * @brief This function searches for the first occurrence of the character c
 * (an unsigned char) in the first n bytes of the string pointed to, by the
 * argument str.
 * @param str This is the pointer to the block of memory where the search is
 * performed.
 * @param c This is the value to be passed as an int, but the function performs
 * a byte per byte search using the unsigned char conversion of this value.
 * @param n This is the number of bytes to be analyzed.
 * @return This function returns a pointer to the matching byte or NULL if the
 * character does not occur in the given memory area.
 */
void		*ft_memchr(const void *str, int c, size_t n);

/**
 * @brief The C library function void *ft_memchr() searches for the first
 * occurrence of the character c (an unsigned char) in the first n bytes of the
 * string pointed to, by the argument str.
 * @param str1 This is the pointer to the block of memory where the search is
 * performed.
 * @param str2 This is the value to be passed as an int, but the function
 * performs a byte per byte search using the unsigned char conversion of this
 * value.
 * @param nb This is the number of bytes to be analyzed.
 * @return This function returns a pointer to the matching byte or NULL if the
 * character does not occur in the given memory area.
 */
int			ft_memcmp(const void *str1, const void *str2, size_t nb);

/**
 * @brief This function copies n characters from memory area src to memory area
 * dest.
 * @param dest This is pointer to the destination array where the content is to
 * be copied, type-casted to a pointer of type void*.
 * @param src This is pointer to the source of data to be copied, type-casted
 * to a pointer of type void*.
 * @param size This is the number of bytes to be copied.
 * @return This function returns a pointer to destination, which is str1.
 */
void		*ft_memcpy(void *dest, const void *src, size_t size);

/**
 * @brief The C library function void *ft_memmove() copies n characters from
 * str2 to str1, but for overlapping memory blocks, memmove() is a safer
 * approach than memcpy().
 * @param str1 This is a pointer to the destination array where the content is]
 * to be copied, type-casted to a pointer of type void*.
 * @param str2 This is a pointer to the source of data to be copied,
 * type-casted to a pointer of type void*.
 * @param size This is the number of bytes to be copied.
 * @return This function returns a pointer to the destination, which is str1.
 */
void		*ft_memmove(void *str1, const void *str2, size_t size);

/**
 * @brief The C library function void *ft_memset()
 * copies the character c (an unsigned char) to the first n characters of the
 * string pointed to, by the argument str.
 * @param str This is a pointer to the block of memory to fill.
 * @param c This is the value to be set. The value is passed as an int, but the
 * function fills the block of memory using the unsigned char conversion of
 * this value.
 * @param nb This is the number of bytes to be set to the value.
 * @return This function returns a pointer to the memory area str.
 */
void		*ft_memset(void *str, int c, size_t nb);

/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */
void		ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor, followed by a
 * newline.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void		ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 */
void		ft_putnbr_fd(int n, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void		ft_putstr_fd(char *s, int fd);

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained
 * by splitting ’s’ using the character ’c’ as a delimiter. The array must
 * be ended by a NULL pointer.
 * @param s The string to be split
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split.
NULL if the allocation fails.
 */
char		**ft_split(char const *s, char c);

/**
 * @brief The C library function char *f_strchr() searches for the first
 * occurrence of the character c (an unsigned char) in the string pointed to by
 * the *argument str.
 * @param str This is the C string to be scanned.
 * @param c This is the character to be searched in str.
 * @return This returns a pointer to the first occurrence of the character c in
 * the string, or NULL if the character is not found.
 */
char		*ft_strchr(const char *str, int c);

/**
 * @brief This functions are used to duplicate a string.
 * @param s The string to be duplicated.
 * @return This function returns a pointer to a null-terminated byte string,
 * which is a duplicate of the string pointed to by s
 */
char		*ft_strdup(const char *s);

/**
 * @brief Applies the function f to each character of the string passed as
 * argument, and passing its index as first argument. Each character is passed
 * by address to f to be modified if necessary
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’.
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return The new string. NULL if the allocation fails.
 */
char		*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Concatenate characters from src to dest and null-terminate the
 * resulting string. As much of src is copied into dest as there is space for.
 * @param dest The final string.
 * @param src The string to be concatenate on the dest string.
 * @param size The size of bytes to be concatenate.
 * @return Return the total length of the string they tried to create, that
 * means the initial length of dst plus the length of src.
 */
size_t		ft_strlcat(char *dest, const char *src, size_t size);

/**
 * @brief  Copy a C-string into a sized buffer.
 * @param dest Where to copy the string to
 * @param src Where to copy the string from.
 * @param size Size of destination buffer.
 * @return Return the total length of the string they tried to create, that
 * means the length of src.
 */
size_t		ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief The strlen() function takes a string as an argument and returns its
 * length. Without including the terminating null character itself.
 * @param str The string.
 * @return Returns an int with the length of the string.
 */
int			ft_strlen(const char *str);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’ to
 * create a new string (with malloc(3)) resulting from successive applications
 * of ’f’.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications
of ’f’. Returns NULL if the allocation fails.
 */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief The C library function int ft_trncmp() compares at most the first n
 * bytes of s1 and s2.
 * @param s1 This is the first string to be compared.
 * @param s2 This is the second string to be compared.
 * @param nb The maximum number of characters to be compared.
 * @return Return value < 0 then it indicates s1 is less than s2. Return
 * value > 0 then it indicates s2 is less than s1. Return value = 0 then it
 * indicates s1 is equal to s2.
 */
int			ft_strncmp(const char *s1, const char *s2, unsigned int nb);

/**
 * @brief  This function locates the first occurrence of the null-terminated
 * string sub in the string str, where not more than n characters are searched.
 * Characters that appear after a `\0' character are not searched.
 * @param str This is the C string.
 * @param sub This is the substring to be searched in str.
 * @param nb The maximum length of the substring.
 * @return If sub is an empty string, str is returned; if sub occurs nowhere in
 * str, NULL is returned; otherwise a pointer to the first	character of the
 * first occurrence of sub is returned.
 */
char		*ft_strnstr(const char *str, const char *sub, size_t nb);

/**
 * @brief The C library function char searches for the last occurrence of the
 * character c (an unsigned char) in the string pointed to, by the argument str.
 * @param str This is the C string.
 * @param c This is the character to be located. It is passed as its int
 * promotion, but it is internally converted back to char.
 * @return This function returns a pointer to the last occurrence of character
 * in str. If the value is not found, the function returns a null pointer.
 */
char		*ft_strrchr(const char *str, int c);

/**
 * @brief Allocates (with malloc(3)) and returns a copy of
 * ’s1’ with the characters specified in ’set’ removed
 * from the beginning and the end of the string.
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char		*ft_strtrim(char const *s1, char const *set);

/**
 * @brief C substring function searchers for a substring in the string *s and
 * returns a pointer to the substring.
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char		*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief The C library function int tolower(int c) converts a given letter to
 *  lowercase.
 * @param c A character
 * @return This function returns lowercase equivalent to c, if such value
 * exists, else c remains unchanged. The value is returned as an int value that
 * can be implicitly casted to char.
 */
int			ft_tolower(int c);

/**
 * @brief The toupper() function converts a lowercase alphabet to an uppercase
 * alphabet.
 * @param c A character
 * @return A lowercase character, the function returns its corresponding
 * uppercase character, an uppercase character or a non-alphabetic character
 * the function the character itself
 */
int			ft_toupper(int c);

t_list		*ft_lstnew(void *content);

void		ft_lstadd_front(t_list **lst, t_list *new);

int			ft_lstsize(t_list *lst);

t_list		*ft_lstlast(t_list *lst);

void		ft_lstadd_back(t_list **lst, t_list *new);

void		ft_lstdelone(t_list *lst, void (*del)(void*));

void		ft_lstclear(t_list **lst, void (*del)(void*));

void		ft_lstiter(t_list *lst, void (*f)(void *));

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
