/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimon-s@student.42barcelona.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:14:59 by gsimon-s          #+#    #+#             */
/*   Updated: 2026/10/20 17:17:22 by gsimon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("hola", "hola", 4));
	printf("%d\n", ft_strncmp("hola", "hoLa", 4));
	printf("%d\n", ft_strncmp("hola", "hoLa", 2));
	printf("%d\n", ft_strncmp("abc", "abd", 0));
	printf("%d\n", ft_strncmp("ab", "abc", 5));
}*/
