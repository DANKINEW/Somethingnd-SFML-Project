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
#include "Loader.hpp"
std::string fontpath = "Fonts/Arial.otf";
namespace load {
	int loadfont(sf::Font& fontObj, const std::string& path) {
		if (!fontObj.openFromFile(fontpath)) {
			std::cerr << "failed to load font from " << path << '\n';
			return -1;
		}
		return 0;
	}
	int loadtext(sf::Text& textObj, const sf::Font& fontObj) {
		textObj.setFont(fontObj);
		return 0;
	}
}
