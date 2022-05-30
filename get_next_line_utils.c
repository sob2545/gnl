/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:43:59 by sesim             #+#    #+#             */
/*   Updated: 2022/05/30 16:10:15 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1);
	res = (char *)malloc(sizeof(char) * (len + ft_strlen(s2) + 1));
	if (res == 0)
		return (0);
	ft_strlcpy(res, s1, (len + 1));
	while (*s2)
	{
		res[len++] = *s2;
		s2++;
	}
	res[len] = '\0';
	return (res);
}

char	*new_line(char *bac)
{
	char	*new;
	int		len;

	if (!ft_strchr(bac, '\n'))
	{
		free (bac);
		bac = 0;
		return (0);
	}
	len = ft_strchr(bac, '\n') - bac + 1;
	new = malloc(sizeof(char) * len + 1);
	ft_strlcpy(new, (bac + len), (ft_strlen(bac) - len + 1));
	return (new);
}
