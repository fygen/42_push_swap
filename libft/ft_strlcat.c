/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayegen <ayegen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:47:03 by ayegen            #+#    #+#             */
/*   Updated: 2024/06/27 18:48:37 by ayegen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lensrc = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (lensrc);
	while (dst[i] && dstsize)
	{
		dstsize--;
		i++;
	}
	j = 0;
	while (src[j] && dstsize > 1)
	{
		dst[i + j] = src[j];
		j++;
		dstsize--;
	}
	if (dstsize != 0)
		dst[i + j] = '\0';
	return (lensrc + i);
}
