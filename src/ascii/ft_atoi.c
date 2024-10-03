/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabaogl <ebabaogl@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:48:47 by ebabaogl          #+#    #+#             */
/*   Updated: 2024/10/03 10:19:25 by ebabaogwl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	total;

	sign = 1;
	total = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		sign = 44 - *nptr;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		total *= 10;
		total += *nptr - '0';
		nptr++;
	}
	return (sign * total);
}
