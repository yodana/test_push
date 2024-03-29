/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:02:10 by yodana            #+#    #+#             */
/*   Updated: 2019/09/08 21:13:58 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "printf.h"
# define END_COLOR	"\033[0m"
# define YELLOW		"\033[0;33m"
# define GREEN		"\033[0;32m"
# define RED		"\033[0;31m"
# define BUFF_SIZE	32

int				ft_sqrt(int nbr);
char			*ft_strjoin_fr(char *s1, char *s2, int i);
char			*ft_itoa(long long c);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
int				ft_strequ(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char			*ft_strmap(char const *s, char (*f)(char));
void			ft_striter(char *s, void (*f)(char *));
void			ft_bzero(void *s, size_t n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(long long n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strnew(size_t size);
size_t			ft_strlen(const char *s);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_atoi(const char *nptr);
int				ft_toupper(int c);
void			*ft_memalloc(size_t size);
void			ft_strclr(char *s);
void			ft_memdel(void **as);
void			ft_strdel(char **as);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_tolower(int c);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
int				ft_strnequ(char const *s1, char const *s2, size_t n);

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int				ft_abs(int nbr);
int				ft_isspace(int c);
char			*ft_strrev_fr(char *str);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstadd(t_list **alst, t_list *n);
int				ft_isspace(int c);
int				ft_lstcount(t_list *lst);
void			ft_printlst(t_list *lst);
int				ft_isblank(int c);
int				ft_abs(int c);
void			ft_printcolor(char *str, char *color);
int				get_next_line(const int fd, char **line);
void			ft_strrdel(char **arr);
double			ft_power(double nbr, double power);
char			*ft_strsub_fr(char const *s, unsigned int start, size_t len);
char			*ft_itoa_u(long long nbr);
char			*ft_get_txt(int fd);

#endif
