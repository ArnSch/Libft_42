/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 17:46:15 by aschenk           #+#    #+#             */
/*   Updated: 2014/11/21 15:51:38 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if ((s1 && s2) && (*s1 && *s2))
	{
		if (!(ft_strcmp(s1, s2)))
			return (1);
	}
	else if ((s1 && s2) && !(ft_strcmp(s1, s2)))
		return (1);
	return (0);
}
