/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:49:55 by momari            #+#    #+#             */
/*   Updated: 2023/11/04 17:48:38 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && (str1[i] == str2[i]) && str1[i]) 
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
/*

#include <stdio.h>
#include <string.h>
int main()
{
	int res1 = ft_strncmp("test\200", "test\0", 6);
	int res2 = strncmp("test\200", "test\0", 6);
	printf("%d\n%d\n", res1, res2);
}

*/
