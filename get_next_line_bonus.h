/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:39:01 by sesim             #+#    #+#             */
/*   Updated: 2022/05/29 22:50:52 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>

typedef	struct	s_gnl_list
{
	int					fd;
	char				*bac;
	struct s_gnl_list	*next;
	struct s_gnl_list	*prev;
}	t_gnl_list;

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

#endif
