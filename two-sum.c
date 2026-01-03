/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two-sum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldecavel <ldecavel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:39:33 by ldecavel          #+#    #+#             */
/*   Updated: 2025/10/07 13:39:46 by ldecavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Note: The returned array must be malloced, assume caller calls free(). */

typedef struct      s_hash
{
    int             key;
    int             value;
    struct s_hash  *next;
}                   t_hash;

#define TS 1009

unsigned int    hash(int key)
{
    if (key < 0)
        key = -key;
    return (key % TS);
}

short add(t_hash **table, int key, int value)
{
    unsigned int h = hash(key);
    t_hash *to_add = malloc(sizeof(t_hash));

    if (!to_add)
        return (0);
    to_add->key = key;
    to_add->value = value;
    to_add->next = table[h];
    table[h] = to_add;
    return (1);
}

t_hash *find(t_hash **table, int key)
{
    unsigned int h = hash(key);
    t_hash *current = table[h];

    while (current)
    {
        if (current->key == key)
            return (current);
        current = current->next;
    }
    return (NULL);
}

void free_t(t_hash **table)
{
    size_t  i = -1;
    t_hash  *current;
    t_hash  *temp;

    while (++i < TS)
    {
        current = table[i];
        while (current)
        {
            temp = current->next;
            free(current);
            current = temp;
        }
    }
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    t_hash  *table[TS] = {0};
    t_hash  *current;
    size_t  i = -1;
    int     *result = malloc(sizeof(int) * 2);
    if (!result)
        return (NULL);
    *returnSize = 2;

    while (++i < numsSize)
    {
        if (current = find(table, target - nums[i]))
        {
            result[0] = current->value;
            result[1] = i;
            free_t(table);
            return (result);
        }
        add(table, nums[i], i);
    }
    free_t(table);
    free(result);
    return (NULL);
}
