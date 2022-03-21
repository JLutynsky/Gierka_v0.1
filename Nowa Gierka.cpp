#include <SFML/Graphics.hpp>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include "Animation.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "gowno");
	
	sf::CircleShape shape(10.f);
	float szybkosc, xSzybkosc, ySzybkosc;
	float maxSzybkosc = 2;
	sf::Vector2f dir(0, 0);

	sf::Texture playerTexture;


	shape.setFillColor(sf::Color::Green);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}


		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}
