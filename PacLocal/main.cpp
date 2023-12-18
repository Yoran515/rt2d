#include <rt2d/core.h>
#include "Scene_PacLocal.h"
#include "Player.h"
#include "Player2.h"

int main(void)
{
	Core core;

	Scene_PacLocal * scene = new Scene_PacLocal();
	while (scene->isRunning()) 
	{
		core.run(scene);
		core.showFrameRate(5);
	}
	
	delete scene;
	return 0;
}
