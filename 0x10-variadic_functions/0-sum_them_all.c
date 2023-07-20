#include <stdarg.h>

/**
 * sum_them_all - Calcule la somme de ses paramètres.
 * @n: Le nombre d'arguments à sommer.
 * @...: Les arguments à sommer (const unsigned int).
 *
 * Description : Cette fonction prend un nombre variable d'arguments
 * entiers et retourne leur somme.
 *
 * Retour: La somme des paramètres entiers.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list args;

	va_start(args, num);

	for (int i = 0; i < num; i++)
	{
		int value = va_arg(args, int);

		sum += value;
	}

	va_end(args);

	return (sum);
}
