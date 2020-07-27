//Definitions of sensor data structures etc.
/*(c) 2018-20 Aryeh Klempner <arayaydev@gmail.com>
This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License (GPL) as published by the Free
Software Foundation, either version 3 of the GPL, or (at your option) any
later version. This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GPL for more details. You should
have received a copy of the GPL with this program. If not, see
<http://www.gnu.org/licenses/>.
*/
#ifndef TESLA_SENSOR_H
#define TESLA_SENSOR_H
#include <stdint.h>

struct sensor {
	char* name;//the char-array is dynamically allocated
//we don't use enums in order to save space since this is C, not modern C++
	uint8_t type;//general class e.g. radar
	uint8_t role;//specific type e.g. TWR; this may become a uint16_t someday
};

#endif
