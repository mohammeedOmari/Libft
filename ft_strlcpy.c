/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:38:37 by momari            #+#    #+#             */
/*   Updated: 2023/11/04 17:46:34 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (s_len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dst[30] = "oma\0med";
	char src[] = "omari";
	char dst2[30] = "mohammed";
	char src2[] = "omari";
	size_t res = ft_strlcpy(dst, src, 3);
	size_t res2 = strlcpy(dst2, src2, 3);
	printf("%zu\n%s", res, dst);
	printf("\n%zu\n%s", res2, dst2);
}
*/
