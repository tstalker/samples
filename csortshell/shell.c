#include "header.h"

void shell(vector* v)
{
	const size_t gapdata[] = {9, 5, 3, 2, 1};
	const size_t gapsize = sizeof gapdata / sizeof *gapdata;

	for(size_t i = 0; i < gapsize; i++)
	{
		const size_t gap = gapdata[i];
		for(size_t j = gap; j < v->size; j++)
		{
			const int x = v->data[j];
			size_t k = j;
			while(k >= gap && x < v->data[k - gap])
			{
				v->data[k] = v->data[k - gap];
				k -= gap;
			}
			v->data[k] = x;
		}
	}
}
