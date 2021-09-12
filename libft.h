/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:52:33 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/11 20:38:39 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define INT_MIN -2147483648

# include <stddef.h>

/**
 * @brief Check that the 'c' parameter is between 'a' to 'z' and also 'A' to 
 * 'Z'.
 * @param c char to be checked.
 * @return Nonzero if falls into tested class, and zero if not.
*/
int		ft_isalpha(int c);

/**
 * @brief Check that the 'c' parameter is between '0' to '9'.
 * @param c char to be checked.
 * @return Nonzero if falls into tested class, and zero if not.
*/
int		ft_isdigit(int c);

/**
 * @brief Check that the 'c' parameter is between 'a' to 'z', 'A' to 'Z' and 
 * also '0' to '9'.
 * @param c char to be checked.
 * @return Nonzero if falls into tested class, and zero if not.
*/
int		ft_isalnum(int c);

/**
 * @brief Check that the 'c' parameter is between 0 and 127 from ASCII that fits
 * into the ASCII character set.
 * @param c char to be checked.
 * @return Nonzero if falls into tested class, and zero if not.
*/
int		ft_isascii(int c);

/**
 * @brief Check that the 'c' parameter is between 32 and 126 from ASCII that are
 * printable caracters, including space.
 * @param c char to be checked.
 * @return Nonzero if falls into tested class, and zero if not.
*/
int		ft_isprint(int c);

/**
 * @brief Measures the length of the string received as a parameter, excluding
 * the null terminating byte ('\0').
 * @param string pointer to the memory region be measured.
 * @return The ammount of bytes that makes up for the lenght of the string.
*/
size_t	ft_strlen(const char *s);

/**
 * @brief This function sets with char received by params str memory region for
 * size bytes.
 * @param str pointer to the memory region to be filled.
 * @param c char to be filled with.
 * @param len length of bytes to fill the memory region.
 * @return void
*/
void	*ft_memset(void *str, int c, size_t size);

/**
 * @brief This function sets with null str memory region for size bytes,
 * basically calls ft_memset(str, '\0', size).
 * @param str pointer to the memory region to be filled.
 * @param size size of bytes to fill the memory region.
 * @return void
*/
void	ft_bzero(void *str, size_t size);

/**
 * @brief This function copies the content of src memory region for size bytes
 * to dest memory position.
 * @param dest pointer to the memory region to receive the copied bytes.
 * @param src pointer to the memory region to be copied.
 * @param size size of bytes to be copied.
 * @return Pointer of first position of dest with copied content.
*/
void	*ft_memcpy(void *dest, const void *src, size_t size);

/**
 * @brief This function check if dest memory position is greater or equal src,
 * then gets the last position of both and copy until reachs the first position.
 * Otherwise, it means that dest memory position is less then src, so call 
 * ft_memcpy(dest, src, size) that will copy the content from the first position
 * to last position.
 * @param dest pointer to the memory region to receive the copied bytes.
 * @param src pointer to the memory region to be copied.
 * @param size size of bytes to be copied.
 * @return Pointer to the first position of dest with copied content.
*/
void	*ft_memmove(void *dest, const void *src, size_t size);

/**
 * @brief This function get the lenght of src, size if greater than length + 1
 * (including null terminating), then call ft_memcpy(dest, src, lenght + 1) that
 * will copy all content from dest, all content of src + 1 for null terminating.
 * Otherwise, if size exists, so it means that size is less then length and it
 * calls ft_memcpy(dest, src, size - 1) and finally add null terminating.
 * @param dest pointer to the memory region to receive the copied bytes.
 * @param src pointer to the memory region to be copied.
 * @param size size of bytes to be copied.
 * @return Pointer to the first position of dest with copied content.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief This function move through the first string(dest) until reachs the
 * last not null position or size, then the second string(src) populates the
 * next few positions until reach the last not null position or (size - 1).
 * Finally, add the null terminating (\0) to concatenated string(dest).
 * @param dest pointer to the memory region of dest.
 * @param src pointer to the memory region of src.
 * @param size size of bytes that full string must have.
 * @return Total length of the string they tried to create, initial length of
 * dest plus the length of src.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief This function checks if the char is between 'a' to 'z' and substract
 * 32 to convert to uppercase.
 * @param c char to be converted to upper.
 * @return upper case of char if it's between 'a' to 'z', otherwise, received
 * char.
*/
int		ft_toupper(int c);

/**
 * @brief This function checks if the char is between 'A' to 'Z' and add 32 to
 * convert to lowercase.
 * @param c char to be converted to lower.
 * @return lower case of char if it's between 'A' to 'Z', otherwise, received
 * char.
*/
int		ft_tolower(int c);

/**
 * @brief This function move through the string, char by char searching for the
 * char passed as parameter.
 * @param string pointer to the memory region of string.
 * @param c char to be matched.
 * @return Pointer to the first occurrence of the character c in the string ou
 * NULL if char was not found.
*/
char	*ft_strchr(const char *str, int c);

/**
 * @brief This function gets the lenght of string and starts from last to first
 * position searching for char passed as parameter.
 * @param str pointer to the memory region of string.
 * @param c char to search for.
 * @return Pointer to the last occurrence of the character c in the string or
 * NULL if char was not found.
*/
char	*ft_strrchr(const char *str, int c);

/**
 * @brief This function compares two strings until one of char is different or
 * reaches the size passed as parameter.
 * @param s1 pointer to the memory location of first string.
 * @param s2 pointer to the memory location of second string.
 * @param size size of bytes to be compared between both strings.
 * @return An integer less than, equal to, or greater than zero if s1 (or the
 * first n bytes thereof) is found, respectively, to be less than, to match, or
 * be greater than s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t size);

/**
 * @brief This function walk over memory locations from pointer to size, looking
 * for char passed as parameter.
 * @param str pointer to memory region.
 * @param c char to look for
 * @param size how many positions to search for this char
 * @return pointer to char found position, otherwise NULL if it wasn't found.
*/
void	*ft_memchr(const void *str, int c, size_t size);

/**
 * @brief This function walk through the s1 memory region comparing position by
 * position checking if the content is different until reachs the size. If it
 * is found than substract content of current position of s1 with content of
 * current position of s2. Otherwise, if there's no difference returns 0.
 * @param s1 pointer to memory region for the first string.
 * @param s2 pointer to memory region for the second string.
 * @param size how many position to be compared
 * @return An integer less than, equal to, or greater than zero if s1 (or the
 * first n bytes thereof) is found, respectively, to be less than, to match, or
 * be greater than s2.
*/ 
int		ft_memcmp(const void *s1, const void *s2, size_t size);


/**
 * @brief This function check if the big string has little string, basically, walk
 * through the big string searching for the first position of little string. If
 * it is found and matchs all the next chars until reachs size, returns the
 * pointer of this position that was found.
 * @param big full string to find little string.
 * @param little string to be found at big string.
 * @param size how many bytes to match little string on big string.
 * @return pointer to the first position of little string on big string or null.
*/ 
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief This function make some validations, desconsidering some special chars
 * and getting first signal if exists. In case of minus signal, saves a variable
 * -1 to multiply the final result. Finally, the calculate result is (nbr * 10)
 * + (str position - '0') and multiplied by (-1) if is negative.
 * @param str_nbr
 * @result The converted value as int or 0 on error
*/
int		ft_atoi(const char *str_nbr);

/**
 * @brief This function allocates size bytes with malloc and populates each
 * position in this memory region with zero, basically, using ft_bzero function.
 * @param nbr_elem number of elements to be allocated
 * @param size sizeof each element
 * @result pointer to the memory region which was allocated.
*/ 
void	*ft_calloc(size_t nbr_elem, size_t size);

/**
 * @brief This function gets str length and creates a new memory region with
 * (char *)malloc((length + 1) * sizeof(char)), then duplicate char by char for
 * each position from str to s_clone.
 * @param str string to be duplicated.
 * @return new string with same content.
*/ 
char	*ft_strdup(const char *s);

/**
 * @brief This function check if the start position is greater or equal than str
 * length, if so returns "". Otherwise, gets the length of start position to
 * size, creates an allocation memory region with malloc and populates with the
 * content, basically calling ft_strlcpy(result, %str[start], size).
 * @param str the string to be sliced.
 * @param start start position to be sliced.
 * @param size how many bytes it will slice.
 * @return the substring in success case or NULL if allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief This function gets the length of s1 and s2, then allocates the memory
 * + 1 for null terminating. Firstm, populates with s1 content, then with s2
 * content and finishes with '\0'.
 * @param s1 pointer to memory region for the first string.
 * @param s2 pointer to memory region for the second string.
 * @return new memory region with s1 + s2 concatenated.
*/
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief This function check the first chars of string if matches with letters 
 * set using ft_strchr(set, *s1), then gets the length of string and do the same
 * task from behind, something like that ft_strchr(set, s1[len--]). Finally,
 * call ft_substr(str, start, end) to return trimmed content.
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief This function counts delimiters and generate a dinamic array with 
 * malloc. Finally, for every word that is not a delimiter will be sliced and 
 * saved in your proper position in this array.
 * @param str pointer to the memory region of string to be splited.
 * @param c the delimiter char
 * @return An array for array containing every word separated be delimiter and
 * NULL in last position;
*/
char	**ft_split(char const *str, char c);

/**
 * This function make some validations, checking if it is equal 0 returning "0",
 * checking if is integer minimal value returning "-2147483648". After getting
 * total digits, creates an allocation memory region with malloc, and for each
 * position puts the following calculation (nbr % 10) + 48.
 * @param nbr number to be converted to ascii.
 * @return the ascii number.
*/
char	*ft_itoa(int nbr);

/**
 * This function gets the length of str and creates an allocation memory region
 * with malloc, then, for each char from str calls the f function and saves
 * result to each position of the string to be returned.
 * @param str string to be iterated calling the funcion f.
 * @param f function to apply to each character.
 * @return string created from the successive applications of ’f’. Returns NULL
 * if the allocation fails.
*/
char	*ft_strmapi(char const *str, char(*f)(unsigned int, char));

/**
 * @brief This function applies the function f to each char of the str.
 * @param str string to be iterated calling the funcion f.
 * @param f function to apply to each character.
 * @return void
*/
void	ft_striteri(char *s, void(*f)(unsigned int, char*));

/**
 * @brief Outputs the char c to the given file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string s to the given file descriptor.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string s to the given file descriptor, followed by a
 * newline.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer n to the given file descriptor.
 * @param n The character to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putnbr_fd(int n, int fd);

#endif
