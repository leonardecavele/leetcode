/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Path-Sum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 20:12:53 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/07 20:27:30 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/*
Definition for a binary tree node.
struct TreeNode
{
    int				val;
    struct TreeNode *left;
    struct TreeNode *right;
};
*/

bool	hasPathSum(struct TreeNode *root, int targetSum)
{
	if (!root)
		return (0);
	if (root->val == targetSum && !root->left && !root->right)
		return (1);
    if (root->left && hasPathSum(root->left, targetSum - root->val))
		return (1);
	if (root->right && hasPathSum(root->right, targetSum - root->val))
		return (1);
	return (0);
}
