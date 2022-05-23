/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:06:11 by mthiesso          #+#    #+#             */
/*   Updated: 2021/11/09 11:23:44 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*dest;

	i = 0;
	if (!s)
		return (NULL);
	if (len > (size_t) ft_strlen(s))
		len = (size_t)ft_strlen(s);
	dest = ft_calloc(len + 1, sizeof(*dest));
	if (!dest)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (dest[i] || i < len)
		{
			dest[i] = s[start];
			i++;
			start++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
