/**
* @file util.h
* @brief H datoteka za realizaciju ulit
* @author Milos Strizak
* @date 16/05/2021
* @version 1.0
*/


#ifndef UTIL_H_
#define UTIL_H_

/// Sve biblioteke potrebne za rad zadatka
#include "../usart/usart.h"
#include "../pin/pin.h"
#include "../timer/timer.h"
#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

/**
*	Funkcija swap da menja mesta u sortu
* 	@param xp- jedan clan
* 	@param yp- drugi clan
* 	@return nema povratnu vrednost.
*/
void swap(int *xp, int *yp);


/**
* Funkcija Sort treba da sortira niz array duzine array_length, na nacin
* odabran parametrom mode. Parametar mode moze imati vrednost konstanti UP
* i DOWN definisanih pomocu makroa. Ukoliko mode ima vrednost UP, sortira
* niz od najveceg do najmanjeg elementa, dok u slucaju vrednosti DOWN sortira
* niz od najmanjeg do najveceg elementa.
* @param array- dati niz
* @param array_lenght- duzina datog niza
* @param mode- nacin rada u kom smo modu
* @return nema povratnu vrednost
*/

void Sort(int16_t *array, int16_t array_length, int8_t mode);

/**
*	Funkcija Check vrsi proveru da li je uneti niz geometrijski
* @param array- dati niz
* @return vrednosti TRUE ili FALSE, definisane kao makro
*  konstante za vrednosti 1 i 0.
*/

int8_t Check(int16_t *array, int16_t array_length);

#endif /* UTIL_H_ */
