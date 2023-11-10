/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:43:52 by momari            #+#    #+#             */
/*   Updated: 2023/11/10 19:00:01 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(long a)
{
	int	i;

	i = 0;
	if (a < 0)
	{
		a *= -1;
		i++;
	}
	while (a)
	{
		i++;
		a = a / 10;
	}
	return (i);
}

char	*ft_cpynum(char *dst, long n, int len)
{
	dst[len] = '\0';
	len--;
	if (n < 0)
	{
		dst[0] = '-';
		n *= -1;
	}
	while (n)
	{
		if (n % 10 >= 0 && n % 10 <= 9)
			dst[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	i;

	i = (long)n;
	if (n == 0)
	{
		ptr = (char *)malloc(2);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	len = count_num((long)n);
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_cpynum(ptr, i, len);
	return (ptr);
}

/* #include <stdio.h>

int main(int ac, char **av)
{
	// printf("%d\n", ft_atoi(NULL));
	printf("%d\n", atoi(NULL));
} */
