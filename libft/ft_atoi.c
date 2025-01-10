/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:30:19 by psoulie           #+#    #+#             */
/*   Updated: 2025/01/10 13:37:41 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

static int	ftstrncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

static int	isminus(char a)
{
	if (a == '-')
		return (1);
	return (0);
}

long	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	res;

	i = 0;
	neg = 0;
	if (ftstrncmp(str, "2147483647", 10) == 0)
		return (2147483647);
	if (str[i] == '-' || str[i] == '+')
		neg = isminus(str[i++]);
	res = 0;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += (str[i] - 48);
		i++;
	}
	if (neg == 1)
		res *= -1;
	if (str[i] || res < -2147483648 || res > 2147483647)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	return (res);
}

/* int main()
{
	char str[] = "2147483647";
	printf("%ld\n", ft_atoi(str));
} */