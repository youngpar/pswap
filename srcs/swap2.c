/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngpar <youngseo321@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:39:07 by youngpar          #+#    #+#             */
/*   Updated: 2022/04/11 17:39:10 by youngpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_bool	ra(t_deques *deq)
{
	if (deq->a.size < 2)
		return (FALSE);
	push_back(&deq->a, pop_front(&deq->a));
	write(1, "ra\n", 3);
	return (TRUE);
}

t_bool	rb(t_deques *deq)
{
	if (deq->b.size < 2)
		return (FALSE);
	push_back(&deq->b, pop_front(&deq->b));
	write(1, "rb\n", 3);
	return (TRUE);
}

t_bool	rra(t_deques *deq)
{
	if (deq->a.size < 2)
		return (FALSE);
	push_front(&deq->a, pop_back(&deq->a));
	write(1, "rra\n", 4);
	return (TRUE);
}

t_bool	rrb(t_deques *deq)
{
	if (deq->b.size < 2)
		return (FALSE);
	push_front(&deq->b, pop_back(&deq->b));
	write(1, "rrb\n", 4);
	return (TRUE);
}

int	min(t_deque *deq)
{
	int		min_val;
	t_node	*curr;

	curr = deq->front.next;
	min_val = curr->val;
	while (curr != &deq->back)
	{
		if (min_val > curr->val)
			min_val = curr->val;
		curr = curr->next;
	}
	return (min_val);
}
