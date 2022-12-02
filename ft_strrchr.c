/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:54:40 by ewang             #+#    #+#             */
/*   Updated: 2022/11/29 16:25:38 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				slen;
	unsigned char	c2;

	slen = ft_strlen(s);
	c2 = (unsigned char) c;
	while (slen >= 0)
	{
		if (s[slen] == c2)
			return ((char *)s + slen);
		slen--;
	}
	return (NULL);
}
