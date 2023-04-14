#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - is a function that generate a value for the array in the hash table
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at switch the key pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t index = hash_djb2(key);
	return (index % size);
}
