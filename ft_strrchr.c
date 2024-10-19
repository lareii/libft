/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabaogl <ebabaogl@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:13:40 by ebabaogl          #+#    #+#             */
/*   Updated: 2024/10/19 16:38:01 by ebabaogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	const char		*last;

	uc = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == uc)
			last = s;
		s++;
	}
	if (!uc)
		return ((char *)s);
	return ((char *)last);
}
