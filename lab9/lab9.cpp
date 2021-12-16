#include <SFML/Graphics.hpp>
#include<thread>
#include<chrono>
using namespace std::chrono_literals;
int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 800), L"First program");

    // Круг
    sf::CircleShape circle(100.f);
    int circle_x = 0, circle_y = 600;
    circle.setPosition(circle_x, circle_y);
    circle.setFillColor(sf::Color::Red);
    circle.setOrigin(0, 0);

    // Прямоугольник
    sf::RectangleShape rectangle(sf::Vector2f(100, 300));
    rectangle.setFillColor(sf::Color::Green);
    int rectangle_x = 300, rectangle_y = 500;
    rectangle.setPosition(rectangle_x, rectangle_y);
    rectangle.setOrigin(50, 0);

    // Треугольник
    sf::CircleShape triangle(80.f, 3);
    triangle.setFillColor(sf::Color::Magenta);
    int triangle_x = 400, triangle_y = 680;
    triangle.setPosition(triangle_x, triangle_y);
    rectangle.setOrigin(40, 0);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        circle_y--;
        if (circle_y < 1)
        {
            circle_y = 0;
        }
        circle.setPosition(circle_x, circle_y);
        rectangle_y--;
        if (rectangle_y < 1)
        {
            rectangle_y = 0;
        }
        rectangle.setPosition(rectangle_x, rectangle_y);
        triangle_y--;
        if (triangle_y < 1)
        {
            triangle_y = 0;
        }
        triangle.setPosition(triangle_x, triangle_y);
        std::this_thread::sleep_for(1ms);
        window.clear();
        window.draw(circle);
        window.draw(rectangle);
        window.draw(triangle);
        window.display();

    }

    return 0;
}