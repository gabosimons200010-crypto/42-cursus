/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimon-s@student.42barcelona.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:22:06 by gsimon-s          #+#    #+#             */
/*   Updated: 2026/10/20 18:37:05 by gsimon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d = %d\n", ft_atoi("42"), atoi("42"));
	printf("%d = %d\n", ft_atoi("   -42abc"), atoi("   -42abc"));
	printf("%d = %d\n", ft_atoi("+7"), atoi("+7"));
	printf("%d = %d\n", ft_atoi("--5"), atoi("--5"));
	printf("%d = %d\n", ft_atoi("abc"), atoi("abc"));
	printf("%d = %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
	return (0);
}*/
