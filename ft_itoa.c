/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 00:15:24 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/18 01:33:55 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ketahakaru(int n)
{
	int	len;

	if (-1 < n && n < 10)
		return (1);
	if (n == -2147483648)
		return (11);
	len = ((n >= 0) ? 0 : 1);
	n = ((n >= 0) ? n : -n);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	int		is_negative;

	if (n == -2147483648)
		return(ft_strdup("-2147483648"));
	len = ketahakaru(n);
	is_negative = (n >= 0) ? 0 : 1;
	if ((p = ft_calloc(ketahakaru(n) + 1, 1)))
	{
		if (n < 0)
			p[0] = '-';
		p[len] = '\0';
		n = ((n >= 0) ? n : -n);
		while (len - is_negative)
		{
			p[len - 1] = (n % 10) + '0';
			n /= 10;
			len--;
		}
	}
	return (p);
}