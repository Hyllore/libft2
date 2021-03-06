/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:47:35 by droly             #+#    #+#             */
/*   Updated: 2015/12/08 16:48:26 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	while (*s1 && n > 0)
	{
		i = 0;
		while (s2[i] != '\0' && s1[i] == s2[i] && n > 0)
		{
			i++;
			n--;
		}
		if (s2[i] == '\0')
			return ((char *)s1);
		n += i;
		n--;
		s1++;
	}
	return (NULL);
}
