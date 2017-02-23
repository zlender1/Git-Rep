#pragma once
#include <stdio.h>
#include <math.h>
#define PI 

float fvolume(float hoehe, float durch_m)
{
	float volume = 0.0;
	
	volume = PI * pow((durch_m/2), 2) * hoehe;

	return volume;
}

