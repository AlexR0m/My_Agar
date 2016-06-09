#ifndef __MODEL__
#define __MODEL__

#include <Windows.h>

/*!
\brief  TAsteroid structure describes the parameters of the food, such as coordinate, spead and radius.
*/
struct TAsteroid
{
	double X;///<coordinate food 
	double Y;///<coordinate food
	double dX;///<speed food
	double	dY;///<speed food
	double r;///<radius food
	bool tuda;
	bool tuda1;
};

/*!
\brief  TShip structure describes the parameters of the player, such as coordinate, spead and health player.
*/
struct TShip
{
	double X;///<coordinate player
	double Y;///<coordinate player

	double v;

	double vy;///<speed player
	double vx;///<speed player

	int health;///<health player

	int qwe;
	bool isSelected;
	double vsize;

};
extern double targetx, targety;


TAsteroid CreateAsteroid(RECT r);

#endif