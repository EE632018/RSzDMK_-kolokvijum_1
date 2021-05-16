/**
* @file util.c
* @brief C datoteka za realizaciju potrebnih pomocnih funkcija
* @author Milos Strizak
* @date 16/05/2021
* @version 1.0
*/

#include "util.h"

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Sort(int16_t *array, int16_t array_length, int8_t mode)
{
	int16_t i, j;

	if(mode == 3){
	   for (i = 0; i < array_length-1; i++)
	   {

	       for (j = 0; j < array_length-i-1; j++)
	       {
	           if (array[j] > array[j+1])
	           {
	              swap(array[j], array[j+1]);
	           }
	       }
	   }
	}
	else if (mode == 2)
	{
		for (i = 0; i < array_length-1; i++)
			   {
			       for (j = 0; j < array_length-i-1; j++)
			       {
			           if (array[j] < array[j+1])
			           {
			              swap(array[j], array[j+1]);
			           }
			       }
			   }

	}
}

int8_t Check(int16_t *array, int16_t array_length)
{
		float product = 1;


	    for (int i = 0; i < array_length; i++)
	    {
	        product = product * (&array[i]);
	    }
	    float gm = pow(product, (float)1 / n);

}


