/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 23:34:41 by yodana            #+#    #+#             */
/*   Updated: 2019/07/21 23:35:11 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	move_s(t_pile *target)
{
	int save;

	save = target->numbers[0];
	if (target->size > 1)
	{
		target->numbers[0] = target->numbers[1];
		target->numbers[1] = save;
	}
}

int		move_ss(t_pile *a, t_pile *b)
{
	int i;

	i = 0;
	move_s(a);
	move_s(b);
	return (1);
}

int		move_sb(t_pile *a, t_pile *b)
{
	int i;

	i = 0;
	(void)a;
	move_s(b);
	return (1);
}

int		move_sa(t_pile *a, t_pile *b)
{
	int i;

	i = 0;
	(void)b;
	move_s(a);
	return (1);
}
