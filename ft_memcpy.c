/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabaogl <ebabaogl@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:56:37 by ebabaogl          #+#    #+#             */
/*   Updated: 2024/10/17 22:18:49 by ebabaogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	while (n--)
		*d++ = *(unsigned char *)src++;
	return (dst);
}
