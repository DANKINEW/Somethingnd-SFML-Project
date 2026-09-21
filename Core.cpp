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
#include "Loader.hpp"
#include "Renderer.hpp"

void wMgr::window::update(sf::RenderWindow& window, float dtc) {


    sf::Font fontik;
    const std::string fontpath = "Fonts/Arial.otf";
    load::loadfont(fontik, fontpath);

    sf::Clock dclock;
    sf::CircleShape circle;

    while (const auto event = m_window.pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            m_window.close();
        }
    }

    float dt = dclock.restart().asSeconds();
}