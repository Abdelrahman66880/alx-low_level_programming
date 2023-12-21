#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
hash_table = malloc(sizeof(hash_node_t));
if (hash_table == NULL)
{
return (NULL);
}

hash_table->array = malloc(sizeof(hash_node_t *));
if (hash_table->array == NULL)
{
free(hash_table);
return (NULL);
}
hash_table->size = size;
int i;
for (unsigned long int i = 0; i < size; i++)
{
hash_table->array[i] = NULL;
}
return (hash_table);
}
