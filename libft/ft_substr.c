/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayegen <ayegen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:47:03 by ayegen            #+#    #+#             */
/*   Updated: 2024/06/27 19:18:26 by ayegen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	size = ft_strlen((char *)s);
	if (start > size)
		return (ft_strdup(""));
	if (size - start < len)
		ret = (char *)malloc((size - start + 1) * sizeof(char));
	else
		ret = (char *)malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
