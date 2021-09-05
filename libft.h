/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nino <nino@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 20:35:56 by nino              #+#    #+#             */
/*   Updated: 2021/02/03 17:06:49 by nino             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));

void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dest, void const *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(void const *str, int c, size_t n);
int				ft_memcmp(void const *str1, void const *str2, size_t n);

size_t			ft_strlen(char const *str);

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

int				ft_toupper(int c);
int				ft_tolower(int c);

char			*ft_strchr(char const *str, int c);
char			*ft_strrchr(char const *str, int c);
int				ft_strncmp(char const *str1, char const *str2, size_t n);
size_t			ft_strlcpy(char *dest, char const *src, size_t n);
size_t			ft_strlcat(char *dest, char const *src, size_t n);
char			*ft_strnstr(char const *str1, char const *str2, size_t n);

int				ft_atoi(char const *s);

void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(char const *str);

char			*ft_substr(char const *str, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *str, char const *set);
char			**ft_split(char const *str, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *str, char (*f)(unsigned int, char));

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif
