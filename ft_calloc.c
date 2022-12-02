/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:11:59 by ewang             #+#    #+#             */
/*   Updated: 2022/11/25 16:51:34 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;
	size_t	max;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	max = SIZE_MAX / nmemb;
	if (size > max)
		return (NULL);
	buffer = malloc(size * nmemb);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * nmemb);
	return (buffer);
}
