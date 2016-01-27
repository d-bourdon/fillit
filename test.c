#include "fillit.h"

int		main(int argc, char **argv)
{
	tscheckf *t;
	t = init_struct();
	printf("Hey\n"); fflush(stdout);
	openingfile(argc, argv, t);
	printf("nice %d", t->tab[0]); fflush(stdout);
}
