
#ifndef FT_FILE_H
# define FT_FILE_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>


typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct 		s_list *next;
}	t_list;

size_t	ft_strlen(const char *s);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, char *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

#endif
