/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:36:28 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/16 08:46:59 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dstp;
	unsigned char *srcp;

	dstp = dst;
	srcp = (unsigned char*)src;
	if (!dst || !src)
		return (NULL);
	while (n-- > 0)
		*dstp++ = *srcp++;
	return (dst);
}
