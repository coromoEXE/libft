/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:30:42 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/15 11:03:08 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	malloc_size;

	i = 0;
	if (len == 0 || start > ft_strlen(s))
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	if (start + len > ft_strlen(s))
		malloc_size = ft_strlen(s) - start;
	else
		malloc_size = (len);
	result = malloc(sizeof(char) * malloc_size + 1);
	if (result == 0)
		return (0);
	while (i != malloc_size)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}
