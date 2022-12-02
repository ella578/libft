/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:43:16 by ewang             #+#    #+#             */
/*   Updated: 2022/11/29 16:27:40 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(little))
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
	j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
		j++;
		if (little[j] == '\0')
			return ((char *)big + i);
	i++;
	}
	return (NULL);
}
