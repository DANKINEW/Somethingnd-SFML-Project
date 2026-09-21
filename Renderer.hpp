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
#include "Core.hpp"
namespace rdr {
	class renderer {
		template <typename D>
		renderer(sf::RenderWindow& window, const std::initializer_list<std::reference_wrapper<const sf::Drawable>> drawable) {
			window.clear();
			window.draw(drawable);
			window.display();
		}
	};
}