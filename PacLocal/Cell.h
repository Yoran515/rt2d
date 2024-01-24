
#ifndef MAP_H
#define MAP_H

#include <rt2d/entity.h>

class Cell: public Entity
{
	public:
		Cell(int type);
		virtual ~Cell();

		void update(float deltaTime);

	private:

};
#endif