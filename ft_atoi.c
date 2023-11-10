/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momari <momari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:38:25 by momari            #+#    #+#             */
/*   Updated: 2023/11/04 13:34:22 by momari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	temp;
	int	pos;
	int	i;

	i = 0;
	temp = 0;
	pos = 1;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		|| (str[i] == '\f' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = (10 * temp) + (str[i] - '0');
		i++;
	}
	return (temp * pos);
}
