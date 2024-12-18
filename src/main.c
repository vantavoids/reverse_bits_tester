/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mr. Vanta <vanta@vantavoids.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 00:24:04 by Mr. Vanta         #+#    #+#             */
/*   Updated: 2024/12/18 01:24:58 by Mr. Vanta        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/reverse_bits_enfers.h"

// mine :]
t_enfers	g_enfers = reverse_bits_sinistre;
// yours :O
t_enfers	g_reverse_bits = reverse_bits;

void	print_binary(unsigned char byte)
{
	unsigned char	bit;
	int				i;

	i = 7;
	while (i >= 0)
	{
		if (i == 3)
			printf(" ");
		bit = (byte >> i--) & 1;
		printf("%u", bit);
	}
	printf("\n");
}

void	test_reverse(unsigned char byte)
{
	unsigned char	reverse;
	unsigned char	expected_reverse;

	printf("original: ");
	print_binary(byte);
	printf(" (%d)\n", byte);
	reverse = g_reverse_bits(byte);
	printf("reversed: ");
	print_binary(reverse);
	printf(" (%d)\n", reverse);
	expected_reverse = g_enfers(byte);
	printf("expected: ");
	print_binary(expected_reverse);
	printf(" (%d)\n", expected_reverse);
	printf("result: ");
	if (reverse == expected_reverse)
		printf("\033[0;32mOK :D\033[0m\n\n");
	else
		printf("\033[0;31mKO :[\033[0m\n\n");
}

int	main(void)
{
	test_reverse(65);
	test_reverse(255);
	test_reverse(0b10101010);
	test_reverse(0);
	return (0);
}
