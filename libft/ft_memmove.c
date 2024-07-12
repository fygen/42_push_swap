/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayegen <ayegen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:47:03 by ayegen            #+#    #+#             */
/*   Updated: 2024/06/27 18:48:01 by ayegen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	if (dst > src)
	{
		while (len > 0)
		{
			*((char *) dst + len - 1) = *((char *) src + len - 1);
			len--;
		}
	}
	else
	{
		while (len)
		{
			*((char *) dst++) = *((char *) src++);
			len--;
		}
	}
	return (ret);
}
