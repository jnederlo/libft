
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
char	*ft_strstr(const char *big, const char *little);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);

#endif
