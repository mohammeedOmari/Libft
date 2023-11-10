/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:26:40 by momari            #+#    #+#             */
/*   Updated: 2023/11/04 17:24:44 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (len--)
		{
			*((char *)(dst + i)) = *((const char *)(src + i));
			i++;
		}
	}
	else
	{
		while (len--)
		{
			*((char *)(dst + len)) = *((const char *)(src + len));
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char string[] = "hello, world !";
	char *dst = string + 2;
	char *src = string + 7;
	ft_memmove(dst, src, 6);
	printf("%s\n", dst);
}
*/
