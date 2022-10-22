#include <SFML/Graphics.hpp>
//#include "Pllo.h"

int main() {
	//Pllo pp(20);
	sf::RenderWindow window(sf::VideoMode(400, 400), "Cuadro Pollil");//Creacion de la ventana y nombre de la misma
	sf::CircleShape chompa(50.f); //Creacion y tamaño de la cabeza
	chompa.setFillColor(sf::Color::Yellow);//color de la cabeza
	chompa.setPosition(sf::Vector2f{ 200,40 });//posicion de la cabeza

	sf::CircleShape cuerpazo(100.f); //Creacion y tamaño de la cabeza
	cuerpazo.setFillColor(sf::Color::Yellow);//color de la cabeza
	cuerpazo.setPosition(sf::Vector2f{ 100,120 });//posicion de la cabeza

	sf::CircleShape ojo(10.f); //Creacion y tamaño del ojo
	ojo.setFillColor(sf::Color::Black);//color del ojo
	ojo.setPosition(sf::Vector2f{ 260,60 });//posicion del ojo

	sf::CircleShape brillo(4.f);//Creacion y tamaño del brillo en el ojo
	brillo.setFillColor(sf::Color::White);//color del brillo en el ojo
	brillo.setPosition(sf::Vector2f{ 260,60 });//posicion del brillo en el ojo

	sf::RectangleShape Pico({ 20.f,20.f });//Creacion y tamaño del pico
	Pico.setFillColor(sf::Color::Red);//color del pico
	Pico.setPosition(sf::Vector2f{ 296,85 });//posicion del pico
	Pico.setRotation(45.f);//rotacion del pico

	sf::RectangleShape pierna({ 13.f,35.f });//Creacion y tamaño del pico
	pierna.setFillColor(sf::Color::Red);//color del pico
	pierna.setPosition(sf::Vector2f{ 225,350 });//posicion del pico
	pierna.setRotation(90.f);//rotacion del pico

	sf::RectangleShape pata({ 13.f,35.f });//Creacion y tamaño del pico
	pata.setFillColor(sf::Color::Red);//color del pico
	pata.setPosition(sf::Vector2f{ 190,318 });//posicion del pico

	sf::RectangleShape tapapico({ 16.f,30.f });//Creacion y tamaño del pico
	tapapico.setFillColor(sf::Color::Yellow);//color del pico
	tapapico.setPosition(sf::Vector2f{ 280,84 });//posicion del pico

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//se limpia pantalla y empieza a dibujar las figuras
		window.clear();
		window.draw(chompa);
		window.draw(cuerpazo);
		window.draw(ojo);
		window.draw(brillo);
		window.draw(Pico);
		window.draw(pierna);
		window.draw(pata);
		window.draw(tapapico);
		window.display();
	}

	return 0;
}
