/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 01:22:59 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 09:46:33 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define LIMIT_CHAR_BIT					8
# define LIMIT_MB_LEN_MAX				6
# define LIMIT_WORD_BIT					32
# define LIMIT_LONG_BIT					64
# define LIMIT_SCHAR_MAX				127
# define LIMIT_SCHAR_MIN				(-127 - 1)
# define LIMIT_UCHAR_MAX				(127 * 2 + 1)
# define LIMIT_CHAR_MAX					127
# define LIMIT_CHAR_MIN					(-127 - 1)
# define LIMIT_USHRT_MAX				(32767 * 2 + 1)
# define LIMIT_SHRT_MAX					32767
# define LIMIT_SHRT_MIN					(-32767 - 1)
# define LIMIT_UINT_MAX					(2147483647 * 2U + 1U)
# define LIMIT_INT_MAX					2147483647
# define LIMIT_INT_MIN					(-2147483647 - 1)
# define LIMIT_ULONG_MAX				(9223372036854775807L * 2UL + 1UL)
# define LIMIT_LONG_MAX					9223372036854775807L
# define LIMIT_LONG_MIN					(-9223372036854775807L - 1L)
# define LIMIT_ULLONG_MAX				(9223372036854775807LL * 2ULL + 1ULL)
# define LIMIT_LLONG_MAX				9223372036854775807LL
# define LIMIT_LLONG_MIN				(-9223372036854775807LL - 1LL)

# define ASCII_NULL						0
# define ASCII_START_OF_HEADING			1
# define ASCII_START_OF_TEXT			2
# define ASCII_END_OF_TEXT				3
# define ASCII_END_OF_TRANSMISSION		4
# define ASCII_ENQUIRY					5
# define ASCII_ACKNOWLEDGMENT			6
# define ASCII_BELL						7
# define ASCII_BACK_SIZE				8
# define ASCII_HORIZONTAL_TAB			9
# define ASCII_LINE_FEED				10
# define ASCII_VERTICAL_TAB				11
# define ASCII_FORM_FEED				12
# define ASCII_CARRIAGE_RETURN			13
# define ASCII_SHIFT_OUT				14
# define ASCII_SHIFT_IN					15
# define ASCII_DATA_LINE_ESCAPE			16
# define ASCII_DEVICE_CONTROL_ONE		17
# define ASCII_DEVICE_CONTROL_TWO		18
# define ASCII_DEVICE_CONTROL_THREE		19
# define ASCII_DEVICE_CONTROL_FOUR		20
# define ASCII_NEGATIVE_ACKNOWLEDGMENT	21
# define ASCII_SYNCHRONOUS_IDLE			22
# define ASCII_END_OF_TRANSMIT_BLOCK	23
# define ASCII_CANCEL					24
# define ASCII_END_OF_MEDIUM			25
# define ASCII_SUBSTITUTE				26
# define ASCII_ESCAPE					27
# define ASCII_FILE_SEPARATOR			28
# define ASCII_GROUP_SEPARATOR			29
# define ASCII_RECORD_SEPARATOR			30
# define ASCII_UNIT_SEPARATOR			31
# define ASCII_SPACE					32
# define ASCII_EXCLAMATION_MARK			33
# define ASCII_QUOTATION_MARK			34
# define ASCII_SHARP					35
# define ASCII_DOLLAR					36
# define ASCII_PERCENT					37
# define ASCII_AMPERSAND				38
# define ASCII_APOSTROPHE				39
# define ASCII_PARENTHESES_LEFT			40
# define ASCII_PARENTHESES_RIGHT		41
# define ASCII_ASTERISK					42
# define ASCII_PLUS						43
# define ASCII_COMMA					44
# define ASCII_MINUS					45
# define ASCII_DOT						46
# define ASCII_SLASH					47
# define ASCII_ZERO						48
# define ASCII_ONE						49
# define ASCII_TWO						50
# define ASCII_THREE					51
# define ASCII_FOUR						52
# define ASCII_FIVE						53
# define ASCII_SIX						54
# define ASCII_SEVEN					55
# define ASCII_EIGHT					56
# define ASCII_NINE						57
# define ASCII_COLON					58
# define ASCII_SEMICOLON				59
# define ASCII_LESS_THAN				60
# define ASCII_EQUALS					61
# define ASCII_MORE_THAN				62
# define ASCII_QUESTION					63
# define ASCII_AT						64
# define ASCII_UPPERCASE_A				65
# define ASCII_UPPERCASE_B				66
# define ASCII_UPPERCASE_C				67
# define ASCII_UPPERCASE_D				68
# define ASCII_UPPERCASE_E				69
# define ASCII_UPPERCASE_F				70
# define ASCII_UPPERCASE_G				71
# define ASCII_UPPERCASE_H				72
# define ASCII_UPPERCASE_I				73
# define ASCII_UPPERCASE_J				74
# define ASCII_UPPERCASE_K				75
# define ASCII_UPPERCASE_L				76
# define ASCII_UPPERCASE_M				77
# define ASCII_UPPERCASE_N				78
# define ASCII_UPPERCASE_O				79
# define ASCII_UPPERCASE_P				80
# define ASCII_UPPERCASE_Q				81
# define ASCII_UPPERCASE_R				82
# define ASCII_UPPERCASE_S				83
# define ASCII_UPPERCASE_T				84
# define ASCII_UPPERCASE_U				85
# define ASCII_UPPERCASE_V				86
# define ASCII_UPPERCASE_W				87
# define ASCII_UPPERCASE_X				88
# define ASCII_UPPERCASE_Y				89
# define ASCII_UPPERCASE_Z				90
# define ASCII_SQUARE_BRACKET_LEFT		91
# define ASCII_BACKSLASH				92
# define ASCII_SQUARE_BRACKET_RIGHT		93
# define ASCII_CARET					94
# define ASCII_UNDERSCORE				95
# define ASCII_GRAVE_ACCENT				96
# define ASCII_LOWERCASE_A				97
# define ASCII_LOWERCASE_B				98
# define ASCII_LOWERCASE_C				99
# define ASCII_LOWERCASE_D				100
# define ASCII_LOWERCASE_E				101
# define ASCII_LOWERCASE_F				102
# define ASCII_LOWERCASE_G				103
# define ASCII_LOWERCASE_H				104
# define ASCII_LOWERCASE_I				105
# define ASCII_LOWERCASE_J				106
# define ASCII_LOWERCASE_K				107
# define ASCII_LOWERCASE_L				108
# define ASCII_LOWERCASE_M				109
# define ASCII_LOWERCASE_N				110
# define ASCII_LOWERCASE_O				111
# define ASCII_LOWERCASE_P				112
# define ASCII_LOWERCASE_Q				113
# define ASCII_LOWERCASE_R				114
# define ASCII_LOWERCASE_S				115
# define ASCII_LOWERCASE_T				116
# define ASCII_LOWERCASE_U				117
# define ASCII_LOWERCASE_V				118
# define ASCII_LOWERCASE_W				119
# define ASCII_LOWERCASE_X				120
# define ASCII_LOWERCASE_Y				121
# define ASCII_LOWERCASE_Z				122
# define ASCII_CURLY_BRACKET_LEFT		123
# define ASCII_VERTICAL_BAR				124
# define ASCII_CURLY_BRACKET_RIGHT		125
# define ASCII_TILDE					126
# define ASCII_DELETE					127

# define FD_STDIN						0
# define FD_STDOUT						1
# define FD_STDERR						2

# define INT_INIT						0
# define INT_NULL						0
# define INT_ITER						1

typedef enum	e_bool
{
	false_t,
	true_t
}				t_bool;

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

char			*ft_itoa(int nbr);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			ft_putchar(char chr);
void			ft_putchar_fd(char chr, int fd);
void			ft_putendl(char const *str);
void			ft_putendl_fd(char const *str, int fd);
void			ft_putnbr(int nbr);
void			ft_putnbr_fd(int nbr, int fd);
void			ft_putstr(char const *str);
void			ft_putstr_fd(char const *str, int fd);
void			ft_strclr(char *str);
void			ft_strdel(char **as);
int				ft_strequ(char const *str1, char const *str2);
void			ft_striter(char *str, void (*f)(char *));
void			ft_striteri(char *str, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *str1, char const*str2);
char			*ft_strmap(char const *str, char (*f)(char));
char			*ft_strmapi(char const *str, char(*f)(unsigned int, char));
int				ft_strnequ(char const *str1, char const *str2, size_t size);
char			*ft_strnew(size_t size);
char			**ft_strsplit(char const *str, char chr);
char			*ft_strsub(char const *str, unsigned intstart, size_t size);
char			*ft_strtrim(char const *str);

void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstiter(t_list *list, void (*f)(t_list *));
t_list			*ft_lstmap(t_list *list, t_list *(*f)(t_list *));
t_list			*ft_lstnew(void const *content, size_t size);

int				ft_atoi(const char *str);
void			ft_bzero(void *str, size_t size);
int				ft_isalnum(int chr);
int				ft_isalpha(int chr);
int				ft_isascii(int chr);
int				ft_isdigit(int chr);
int				ft_isprint(int chr);
void			*ft_memccpy(void *dst, const void *src, int chr, size_t size);
void			*ft_memchr(const void *ptr, int chr, size_t size);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void			*ft_memcpy(void *dst, const void *src, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t size);
void			*ft_memset(void *obj, int chr, size_t size);
char			*ft_strcat(char *str1, const char *str2);
char			*ft_strchr(const char *str, int chr);
int				ft_strcmp(const char *str1, const char *str2);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *str);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strncat(char *str1, const char *str2, size_t size);
int				ft_strncmp(const char *str1, const char *str2, size_t size);
char			*ft_strncpy(char *dst, const char *src, size_t size);
char			*ft_strnstr(const char *str1, const char *str2, size_t size);
char			*ft_strrchr(const char *str, int chr);
char			*ft_strstr(const char *str1, const char *str2);
int				ft_tolower(int chr);
int				ft_toupper(int chr);

int				ft_abs(int nbr);
int				ft_isspace(char chr);
void			*ft_memrchr(const void *ptr, int chr, size_t size);
void			*ft_memrcpy(void *dst, const void *src, size_t size);
size_t			ft_nbrlen(int nbr);
void			ft_putcat(const char *str1, const char *str2);
void			ft_putcat_fd(const char *str1, const char *str2, int fd);
void			ft_strarrdel(char **str_arr, size_t size);
char			**ft_strarrnew(size_t size);
char			*ft_strinn(char *str, char chr);
char			*ft_strnchr(const char *str, int chr, size_t size);
char			*ft_strndup(char *str, size_t size);
size_t			ft_strnlen(const char *str, size_t edge);

#endif
