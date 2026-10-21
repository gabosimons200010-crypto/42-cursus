/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimon-s@student.42barcelona.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:36:22 by gsimon-s          #+#    #+#             */
/*   Updated: 2026/10/21 18:49:32 by gsimon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[] = "abcde\0\0";
	char	b[] = "abcde\0\0";
	char	c[] = "abcde";
	char	d[] = "abcde";
	char	dst[10];

	ft_memmove(a + 2, a, 5);
	memmove(b + 2, b, 5);
	printf("derecha:   %s | %s\n", a, b);
	ft_memmove(c, c + 2, 3);
	memmove(d, d + 2, 3);
	printf("izquierda: %s | %s\n", c, d);
	ft_memmove(dst, "cagada", 6);
	printf("normal:    %s\n", dst);
	printf("NULL:      %p\n", ft_memmove(NULL, NULL, 5));
	return (0);
*/
