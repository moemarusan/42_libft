/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:49:19 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/16 09:03:11 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = dst;
	s = (unsigned char *)src;
	while (n--)
	{
		*d = *s;
		if (*d == (unsigned char)c)
			return (++d);
		d++;
		s++;
	}
	return (NULL);
}
