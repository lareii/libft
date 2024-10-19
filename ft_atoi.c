/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabaogl <ebabaogl@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:44:20 by ebabaogl          #+#    #+#             */
/*   Updated: 2024/10/10 16:18:35 by ebabaogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	total;

	sign = 1;
	total = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = 44 - *str;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		total *= 10;
		total += *str - '0';
		str++;
	}
	return (sign * total);
}
