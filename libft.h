/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:12:15 by xel               #+#    #+#             */
/*   Updated: 2022/03/02 00:26:21 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

// libc part
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n); // pas fait
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t    ft_strlcat(char *dest, const char *src, size_t size); // ko
int ft_toupper(int c);
int ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len); // ko
int	ft_atoi(const char *str);

// malloc part
void    *ft_calloc(size_t nmemb, size_t size); // ko
char	*ft_strdup(const char *s);

// second part
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char    *ft_itoa(int nb);
char	**ft_split(char *str, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

//bonus part
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new); // ko
int	ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));

#endif