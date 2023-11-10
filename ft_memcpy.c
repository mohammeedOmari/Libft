/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:05:29 by momari            #+#    #+#             */
/*   Updated: 2023/11/04 17:23:00 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		*((char *)(dst + n)) = *((char *)(src + n));
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char dst[20] = "";
	char src[] = "Hello World!";

	char dst1[20] = "";
	char src2[] = "Hello World!";

	ft_memcpy(dst, src, 3);
	memcpy(dst1, src2, 3);

	printf("ft_mem      : %s\n", dst);
	printf("mem         : %s\n", dst1);
}
*/
