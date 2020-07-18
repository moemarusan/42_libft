/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaiki <msaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:19:55 by msaiki            #+#    #+#             */
/*   Updated: 2020/07/18 20:48:45 by msaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		tango_no_kazu(char const *s, char c)
{
	int		count;
	int		flag;

	count = 0;
	flag = 1;
	while (*s)
	{
		if (flag == 1)
		{
			count++;
			while (*s && *s != c)
				s++;
			flag = *s ? 0 : 1;
		}
		if (flag == 0)
		{
			while (*s && *s == c)
				s++;
			flag = *s ? 1 : 0;
		}
	}
	return (count);
}

static int		nagasa_hakaru(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s && (*s++ != c))
		len++;
	return (len);
}

static void		*sakanobotte_free(char **s)
{
	int		i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**ans;
	int		count_words;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	count_words = tango_no_kazu(s, c);
	if (!(ans = ft_calloc(count_words + 1, sizeof(char*))))
		return (NULL);
	while (*s != 0 && *s == c)
		s++;
	i = 0;
	while (*s)
	{
		len = nagasa_hakaru(s, c);
		if (!(ans[i] = ft_calloc(len + 1, sizeof(char))))
			return (sakanobotte_free(ans));
		ft_strlcpy(ans[i], s, len + 1);
		s += len;
		while ((*s == c) && c != 0)
			s++;
		i++;
	}
	return (ans);
}
