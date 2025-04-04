/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:16:49 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/03 16:51:38 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base_error(char *base)
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
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
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

int	check_nbr_length(int nbr, char *base, int length)
{
	int				base_length;
	unsigned int	nb;

	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		nb = -nbr;
		length++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_length)
	{
		nb /= base_length;
		length++;
	}
	length++;
	return (length);
}

void	ft_putnbr_base(int nbr, char *base, char *nbr2)
{
	int				length_base;
	unsigned int	nb;
	int				i;
	int				len;

	length_base = ft_strlen(base);
	len = check_nbr_length(nbr, base, 0);
	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	i = len - 1;
	nbr2[len] = '\0';
	while (nb >= (unsigned int)length_base)
	{
		nbr2[i--] = base[nb % length_base];
		nb /= length_base;
	}
	nbr2[i] = base[nb % length_base];
	if (nbr < 0)
		nbr2[0] = '-';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*d;
	int		nb;
	int		nbr_length;

	if (check_base_error(base_to) == 0 || check_base_error(base_from) == 0)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	nbr_length = check_nbr_length(nb, base_to, 0);
	d = (char *)malloc(sizeof(char) * (nbr_length + 1));
	if (!d)
		return (0);
	ft_putnbr_base(nb, base_to, d);
	d[nbr_length] = '\0';
	return (d);
}

#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *nbr = "   ---+--+1g";
	char *base_from = "0123456789abcdef";
	char *base_to = "01";
	char *converted = ft_convert_base(nbr, base_from, base_to);

	if (converted)
	{
		printf("変換結果: %s\n", converted);
		free(converted);
	}
	else
		printf("変換失敗\n");

	return 0;
}
