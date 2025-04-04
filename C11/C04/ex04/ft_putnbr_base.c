/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:33:36 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:33:50 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

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
	if (i > 1)
		return (1);
	else
		return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	base_len;
	long	num;

	if (!is_valid_base(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	num = nbr;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= base_len)
		ft_putnbr_base(num / base_len, base);
	ft_putchar(base[num % base_len]);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char base1[] = "0123456789";
// 	char base2[] = "01";
// 	char base3[] = "0123456789ABCDEF";
// 	char base4[] = "poneyvif";
// 	char base5[] = "0123+5678";
// 	char base6[] = "00";

// 	printf("Base 10:\n");
// 	ft_putnbr_base(42, base1);
// 	printf("\n");

// 	printf("Base 2:\n");
// 	ft_putnbr_base(42, base2);
// 	printf("\n");

// 	printf("Base 16:\n");
// 	ft_putnbr_base(42, base3);
// 	printf("\n");

// 	printf("Base 8 (custom):\n");
// 	ft_putnbr_base(42, base4);
// 	printf("\n");

// 	printf("Invalid base (should not print anything):\n");
// 	ft_putnbr_base(42, base5);
// 	printf("\n");

// 	printf("Invalid base (should not print anything):\n");
// 	ft_putnbr_base(42, base6);
// 	printf("\n");

// 	return (0);
// }
