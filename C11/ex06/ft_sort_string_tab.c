/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:58:28 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/27 16:54:37 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
		i++;
	while (i > 0)
	{
		j = 0;
		while (j < i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i--;
	}
}

// #include<unistd.h>

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char	*tab[] = {
// 		"banana",
// 		"apple",
// 		"cherry",
// 		"grape",
// 		"orange",
// 		"apple",
// 		NULL
// 	};
// 	int		i;

// 	ft_sort_string_tab(tab);
// 	i = 0;
// 	while (tab[i])
// 	{
// 		ft_putstr(tab[i]);
// 		ft_putstr("\n");
// 		i++;
// 	}
// 	return (0);
// }
