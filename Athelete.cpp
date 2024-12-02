//
//  Athlete.cpp
//  Program 2
//
//  Created by Tamara on 11/25/24.
//

#include "Athelete.hpp"

Athlete::Athlete() : m_height(0), m_weight(0), m_gender('-') {}

Athlete::Athlete(int height, int weight, char gender)
    : m_height(height), m_weight(weight), m_gender(gender) {}

int Athlete::getHeight() const {
    return m_height;
}

void Athlete::setHeight(int height) {
    m_height = height;
}

int Athlete::getWeight() const {
    return m_weight;
}

void Athlete::setWeight(int weight) {
    m_weight = weight;
}

char Athlete::getGender() const {
    return m_gender;
}

void Athlete::setGender(char gender) {
    m_gender = gender;
}
