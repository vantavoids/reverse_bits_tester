/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_enfers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mr. Vanta <vanta@vantavoids.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 01:10:12 by Mr. Vanta         #+#    #+#             */
/*   Updated: 2024/12/18 01:29:11 by Mr. Vanta        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/reverse_bits_enfers.h"

// quite hard to read, ain't it? :3
inline unsigned char	reverse_bits_sinistre(unsigned char x)
{
	return (((x * 0x0202020202ULL & 0x010884422010ULL) % 1023)
		| ((x * 0x8202020282ULL & 0x2108442210ULL) << 4)
		| ((x * 0x1010101010ULL & 0x8420840ULL) >> 5)
		| ((x * 0x8080808080ULL & 0x1111111111ULL) << 1));
}
