#include "hash_tables.h"

/**
 * key_index - this method for Get index at which a key/value
 *      pair should be stored in arr of a hash table.
 * @key: for The key to get the index of.
 * @size: for The size of the arr of the hash table.
 *
 * Return: The index of the key.
 * Description: this for  Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
