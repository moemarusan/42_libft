/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:00:39 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/10 21:30:08 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int num;

	num = 0;
	while ((9 < *str && *str <= 13) || *str == ' ')
		str++;
	sign = (*str == '-' ? -1 : 1);
	str += (*str == '-' || *str == '+' ? 1 : 0);
	while (ft_isdigit(*str))
		num = num * 10 + *(str++) - '0';
	return (sign * num);
}
