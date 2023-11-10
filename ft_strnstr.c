/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:02:34 by momari            #+#    #+#             */
/*   Updated: 2023/11/04 17:50:44 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (!needle[j] && i + j <= len)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
		char *s1 = "AAAAAAAAAAAAA";
		size_t max = strlen(s1);
		char *i1 = strnstr(s1, s1, max);
		char *i2 = ft_strnstr(s1, s1, max);
		printf("%s\n%s\n",i1, i2);
}
*/
