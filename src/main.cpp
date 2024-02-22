#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>
#include <memory>

#include "TaskParallelism/TaskFarmAnts.h"
#include "Simulation/AntManager.h"
#include "graphics/WindowManager.h"



int main()
{
	AntManager antManager(32, sf::Vector2f(512, 512));
	TaskFarm farm(16,&antManager);
	WindowManager windowManager;
	

	//farm.addAntManager(&manager);

	while (windowManager.getWindowOpen())
	{
		windowManager.windowLoop();
	}

	return 0;
}