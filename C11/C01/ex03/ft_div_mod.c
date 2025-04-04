/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:41:02 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 14:41:13 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	else
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 20;
// 	b = 3;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("a = %d, b = %d\n", a, b);
// 	printf("Division result: %d\n", div);
// 	printf("Modulo result: %d\n", mod);

// 	return (0);
// }
