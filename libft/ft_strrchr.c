/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimon-s@student.42barcelona.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:41:54 by gsimon-s          #+#    #+#             */
/*   Updated: 2026/10/20 16:07:01 by gsimon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strrchr("ickkck", 'c'));
	printf("%s\n", ft_strrchr("ickkck", 'i'));
	printf("%s\n", ft_strrchr("ickkck", 'k'));
	return (0);
}*/
