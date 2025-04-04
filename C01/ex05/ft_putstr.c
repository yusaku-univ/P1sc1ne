/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:42:25 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 14:42:33 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	*test_str = "Hello, World!\n";
// 	ft_putstr(test_str);
// 	return (0);
// }
