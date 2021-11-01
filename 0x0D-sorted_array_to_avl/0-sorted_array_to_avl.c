#include "binary_trees.h"
/**
 * sorted_array_to_avl - function that builds an AVL tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of element in the array
 * Return: pointer to the root node of the created AVL tree, or NULL on failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *newNodes = NULL, *header = NULL, *left = NULL, *right = NULL;

	int middleArray;

	if (array == NULL)
		return (NULL);

	newNodes = malloc(sizeof(avl_t));
	if (newNodes == NULL)
		return (NULL);

	middleArray = size / 2;

	newNodes->n = array[middleArray];
	newNodes->parent = NULL;
	newNodes->left = left;
	newNodes->right = right;

	if (left != NULL)
		left->parent = newNodes;

	if (right != NULL)
		right->parent = newNodes;

	*header = *newNodes;
	return (newNodes);
}
