/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:33:53 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:34:09 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_get_sign(char *str, int *i)
{
	int	minus_count;

	minus_count = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			minus_count++;
		(*i)++;
	}
	if (minus_count % 2 != 0)
		return (-1);
	else
		return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	value;

	i = 0;
	sign = 1;
	result = 0;
	if (!is_valid_base(base))
		return (0);
	base_len = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = ft_get_sign(str, &i);
	while (str[i])
	{
		value = get_base_value(str[i], base);
		if (value == -1)
			return (0);
		result = result * base_len + value;
		i++;
	}
	result *= sign;
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("   -2A", "0123456789ABCDEF"));
// 	printf("%d\n", ft_atoi_base("1001", "01"));
// 	printf("%d\n", ft_atoi_base("  +123", "0123456789"));
// 	printf("%d\n", ft_atoi_base("ZZ", "0123456789ABCDEF"));
// 	printf("%d\n", ft_atoi_base("42", "0+1"));
// 	printf("%d\n", ft_atoi_base("   ---1010", "01"));
// 	printf("%d\n", ft_atoi_base("7F", "0123456789ABCDEF"));
// 	return (0);
// }
