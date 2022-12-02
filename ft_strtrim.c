/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:01:17 by ewang             #+#    #+#             */
/*   Updated: 2022/12/01 14:26:11 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	check(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	if (!set)
		return ((char *)s1);
	res = (char *)s1;
	i = 0;
	if ((ft_strlen(s1) == 0 && ft_strlen(set) == 0) || ft_strlen(s1) == 0)
		return (ft_strdup(""));
	len = ft_strlen(s1) - 1;
	while (res[i] && check(res[i], set))
		i++;
	while (len > 0 && check(res[len], set))
		len--;
	return (ft_substr(res, i, (len - i) + 1));
}
