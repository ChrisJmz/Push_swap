/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:57:41 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/10 13:29:56 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void    ft_push(t_stack **src, t_stack **dest)
{
    t_stack *first;
    t_stack *second;

    first = *src;
    if (first == NULL)
        return  ;
    *src = first->next;
    second = *dest;
    *dest = first;
    (*dest)->next = second;
    write(1, "sa", 2);
}