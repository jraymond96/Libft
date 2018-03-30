/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_btree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 19:23:24 by jraymond          #+#    #+#             */
/*   Updated: 2018/03/30 19:23:27 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tree(t_btree *root)
{
	t_btree	*elem;

	elem = root;
	if (elem->left)
		ft_print_tree((t_btree *)elem->left);
	if (((t_finfo *)elem->ptrdata)->name[0] != '.')
	{
		ft_putstr(((t_test *)elem->ptrdata)->name);
		ft_putchar('\n');
	}
	if (elem->right)
		ft_print_tree((t_btree *)elem->right);
}
