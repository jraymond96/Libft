/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_browsetree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 15:28:31 by jraymond          #+#    #+#             */
/*   Updated: 2018/05/12 06:13:59 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_browsetree(t_btree *root, void (*dothings)(void *))
{
	if (!root)
		return ;
	if (root->left)
		ft_browsetree(root->left, dothings);
	dothings(root->ptrdata);
	if (root->right)
		ft_browsetree(root->right, dothings);
}

void	ft_revbrowsetree(t_btree *root, void (*dothings)(void *))
{
	if (!root)
		return ;
	if (root->right)
		ft_browsetree(root->right, dothings);
	dothings(root->ptrdata);
	if (root->left)
		ft_browsetree(root->left, dothings);
}
