/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:57:41 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/22 14:53:51 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_2(t_stack **stack_a)
{
    int first;
    int second;

    first = (*stack_a)->content;
    second = (*stack_a)->next->content;

    if (first > second)
        ft_rotate_a(stack_a);
}
void    sort_3(t_stack **stack_a)
{
    int first;
    int second;
    int third;

    first = (*stack_a)->content;
    second = (*stack_a)->next->content;
    third = (*stack_a)->next->next->content;
    if (first < third && second > third)
    {
        ft_rrotate_a(stack_a);
        ft_swap_a(stack_a);
    }
    if (first > second && first < third)
        ft_swap_a(stack_a);
    if (first < second && first > third)
        ft_rrotate_a(stack_a);
    if (first > third && second < third)
        ft_rotate_a(stack_a);
    if (first > second && second > third)
    {
        ft_rotate_a(stack_a);
        ft_swap_a(stack_a);
    }
}

void    sort(t_stack **stack_a)
{
    int count;

    count = count_stack(*stack_a);
    if (count == 2)
        sort_2(stack_a);
    else if (count == 3)
        sort_3(stack_a);
}