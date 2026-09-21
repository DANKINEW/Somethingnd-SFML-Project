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
using namespace std;
namespace wMgr {
	class window {
	public:
		window(const string& title, unsigned int width, unsigned int height) : m_window(sf::VideoMode({ width, height }), title) {
			m_window.setFramerateLimit(60);
			m_window.setKeyRepeatEnabled(false);
		}
		void update(sf::RenderWindow &window, float dtc);
	private:
		sf::RenderWindow m_window;
	};

}