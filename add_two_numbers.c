/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_two.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 23:14:13 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/08 02:10:10 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
Definition for singly-linked list.
struct ListNode
{
    int				val;
    struct ListNode *next;
};
*/

struct ListNode	*addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	int	sum;
	int	carry = 0;
	struct ListNode	*head, *tail, *node; 
	head = tail = node = 0;

	while (l1 || l2 || carry)
	{
		node = malloc(sizeof(struct ListNode));
		if (!node)
			return (0);
		node->val = (((l1) ? l1->val : 0) + ((l2) ? l2->val : 0) + carry) % 10;
		node->next = 0;
		if (!head)
            head = node;
        else
            tail->next = node;
        tail = node;
		carry = (((l1) ? l1->val : 0) + ((l2) ? l2->val : 0) + carry) / 10;
		if (l1) l1 = l1->next;
		if (l2) l2 = l2->next;
	}
	return (head);
}
