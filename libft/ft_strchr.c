/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayegen <ayegen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:47:03 by ayegen            #+#    #+#             */
/*   Updated: 2024/06/27 18:48:26 by ayegen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	n_c;

	n_c = (char)c;
	while (*s)
	{
		if (*s == n_c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (n_c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
