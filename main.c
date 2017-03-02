/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 13:09:42 by mmartin           #+#    #+#             */
/*   Updated: 2016/12/08 19:14:00 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	
	int	n;
	int	ran;
	time_t	t;
	int	coup;

	coup = 0;
	srand((unsigned)time(&t));
	ran = rand() % 100 + 1;
	printf("\033[31;1m    .__        ____  __ __\n");
	printf("  __|  |___   /  _ \\|  |  \\   ______\n");
	printf(" /__    __/  (  <_> )  |  /  /_____/\n");
	printf("    |__|      \\____/|____/\033[0m\n\n");
	printf("choisissez un nombre entre 1 et 100\n");
	n = -42;
	while (n != ran)
	{
		scanf("%d", &n);
		if (n > ran)
		{
			printf("\n\033[34;1m  ______\n");
			printf(" /_____/\033[0m\n\n");
		}
		else if (n < ran)
		{
			printf("\n\033[34;1m    .__\n");
			printf("  __|  |___\n");
			printf(" /__    __/\n");
			printf("    |__|\033[0m\n\n");
		}
		coup++;
	}
	printf("\n\t\033[32;1mSCORE : %d\033[0m\n\n", coup);
}
