#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int	main(void)
{
	char	*s;
	int		fd;
	int		i = 0;

	while (i < 4)
	{
		fd = 3000;
		s = get_next_line(fd);
		printf("%s\n", s);
		free (s);
		s = 0;
		i++;
	}
	return (0);
}
