/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:30:18 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:31:18 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
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

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = ft_get_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

// #include<stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
// 	printf("%d\n", ft_atoi("   +42"));
// 	printf("%d\n", ft_atoi("  -123abc456"));
// 	printf("%d\n", ft_atoi("  --+-+00123xyz"));
// 	printf("%d\n", ft_atoi("abc123"));
// 	printf("%d\n", ft_atoi("   -2147483648"));
// 	printf("%d\n", ft_atoi("   2147483647"));
// 	return (0);
// }
