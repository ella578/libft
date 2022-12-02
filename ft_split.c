/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:21:22 by ewang             #+#    #+#             */
/*   Updated: 2022/11/29 14:33:26 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_countwords(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
		i++;
		if (str[i] != c && str[i])
		{		
			while (str[i] != c && str[i])
			i++;
			count++;
		}	
	}
	return (count);
}

char	**free_tab(char **res, size_t i)
{
	while (res[i])
	{	
		free (res[i]);
		i--;
	}
	free(res);
	return (NULL);
}

char	*ft_next_word(size_t *start, const char *s, char c)
{
	size_t	len;
	char	*res;

	while (s[*start] == c)
	(*start)++;
	len = 0;
	while (s[*start + len] != c && s[*start + len])
	len++;
	res = ft_substr(s, *start, len);
	*start = *start + len;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	i;
	char	**res;

	res = (char **)malloc((ft_countwords(s, c) + 1) * sizeof (char *));
	if (!res || !s)
		return (NULL);
	i = 0;
	start = 0;
	while (i < ft_countwords(s, c))
	{	
		res[i] = ft_next_word(&start, s, c);
		if (!res)
			return (free_tab(res, i));
		i++;
	}
	res[i] = 0;
	return (res);
}
