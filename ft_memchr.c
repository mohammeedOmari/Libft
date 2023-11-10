/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:10:32 by momari            #+#    #+#             */
/*   Updated: 2023/11/04 14:05:47 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned const char *)(s + i)) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "abcdefgh";
	char *res = ft_memchr(s, 'e', 5);
	char *res2 = memchr(s, 'e', 5);
	printf("%s\n%s", res, res2);
	
}
*/
