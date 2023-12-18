
#ifndef PLAYER2_H
#define PLAYER2_H

#include <rt2d/entity.h>

class Player2: public Entity
{
	public:
		Player2();
		virtual ~Player2();

		void update(float deltaTime);

	private:
};
#endif