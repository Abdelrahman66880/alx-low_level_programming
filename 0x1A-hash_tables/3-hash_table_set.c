#include "hash_tables.h"
/**
 * create_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */

hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *tmpnode;
tmpnode = malloc(sizeof(hash_node_t));
if (tmpnode == NULL)
{
return (NULL);
}
tmpnode->key = strdup(key);
tmpnode->value = strdup(value);
tmpnode->next = NULL;
return (tmpnode);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
hash_node_t *newnode;

int index;
index = key_index(key, ht->size);
node = ht->array[index];

if (node == NULL)
{
newnode = create_node(key, value);
ht->array[index] = newnode;
return (1);
}
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}

newnode = create_node(key, value);
newnode->next = ht->array[index];
ht->array[index] = newnode;

return (1);
}
