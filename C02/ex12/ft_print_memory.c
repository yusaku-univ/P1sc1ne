/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:21:41 by yutakumi          #+#    #+#             */
/*   Updated: 2025/04/04 15:21:57 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);
}

void	print_addr(unsigned long addr)
{
	char			*hex_base;
	char			buffer[16];
	int				i;
	unsigned long	div;

	hex_base = "0123456789abcdef";
	div = 1;
	i = 0;
	while (i < (int)(sizeof(void *) * 2 - 1))
	{
		div *= 16;
		i++;
	}
	i = 0;
	while (i < (int)(sizeof(void *) * 2))
	{
		buffer[i] = hex_base[addr / div % 16];
		write(1, &buffer[i], 1);
		div /= 16;
		i++;
	}
	write(1, ": ", 2);
}

void	print_data(unsigned char *ptr, int size)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			print_hex(ptr[i]);
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	print_ascii(unsigned char *ptr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126)
			write(1, &ptr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;
	int				block_size;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_addr((unsigned long)(ptr + i));
		if (size - i > 16)
			block_size = 16;
		else
			block_size = size - i;
		print_data(ptr + i, block_size);
		print_ascii(ptr + i, block_size);
		i += 16;
	}
	return (addr);
}

// int	main(void)
// {
// 	char	data[] = 
// 		"Bonjour les aminches...\n\tc'est fou.tout.ce qu on peut faire avec...
// \n\nprint_memory\n\n\nlol.lol.\n";
// 	unsigned int	size;

// 	size = 0;
// 	while (data[size] != '\0')
// 		size++;
// 	size++;

// 	ft_print_memory(data, size);
// 	return (0);
// }
