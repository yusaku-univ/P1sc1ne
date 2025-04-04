/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:19:56 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/23 19:22:48 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_nb_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_checksign(char *str, int *ptr_i)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while ((str[i] == '+' || str[i] == '-') && str[i])
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;
	int	nb;
	int	digit;
	int	base_len;

	i = 0;
	nb = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	count = ft_checksign(str, &i);
	digit = ft_nb_base(str[i], base);
	while (digit != -1)
	{
		nb = nb * base_len + digit;
		i++;
		digit = ft_nb_base(str[i], base);
	}
	return (nb * count);
}
