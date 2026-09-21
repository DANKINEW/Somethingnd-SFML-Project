#pragma once
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>
#include <string>
#include <sstream>
#include <algorithm>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/VertexArray.hpp>
#include <SFML/Graphics/Shader.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <imgui.h>
#include <imgui-SFML.h>
#include <Windows.h>
namespace load {
	int loadfont(sf::Font& font, const std::string& path);
	int loadtext(sf::Text& textt, sf::Font& font);
}