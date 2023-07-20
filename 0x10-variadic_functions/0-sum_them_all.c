#include <stdarg.h>

/**
 * sum_them_all - Calcule la somme de ses paramètres.
 * @n: Le nombre d'arguments à sommer.
 * @...: Les arguments à sommer (const unsigned int).
 *
 * Description : Cette fonction prend un nombre variable d'arguments
 * entiers et retourne leur somme.
 *
 * Return: La somme des paramètres entiers.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		sum += value;
	}

	va_end(args);

	return (sum);
}
