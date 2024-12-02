//
//  Volleyball.cpp
//  Program 2
//
//  Created by Tamara Edmond on 11/25/24.
//

#include "Volleyball.hpp"

Volleyball::Volleyball() {
    m_position = "Unknown";
    m_reactionTime = 0.0;
}

Volleyball::Volleyball(std::string position, float reactionTime) {
    m_position = position;
    m_reactionTime = reactionTime;
}

std::string Volleyball::getPosition() {
    return m_position;
}

void Volleyball::setPosition(std::string position) {
    m_position = position;
}

float Volleyball::getReactionTime() {
    return m_reactionTime;
}

void Volleyball::setReactionTime(float reactionTime) {
    m_reactionTime = reactionTime;
}



