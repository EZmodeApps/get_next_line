#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *saved_buf, char *buf);
int		get_next_line(int fd, char **line);
char	*clear_saved_buf(char *saved_buf);
char	*get_line(char *saved_buf);

#endif

