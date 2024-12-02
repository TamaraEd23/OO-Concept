// Tennis.cpp
//  Program 2
// Created by Tamara on 11/25/24.
//

#include "Tennis.hpp"
using namespace std;

Tennis::Tennis()
{
    m_serveSpeed = 0;
    m_serveAndVolley= false;
}

Tennis::Tennis(int serverSpeed, bool serveAndVolley)
    : m_serveSpeed(serverSpeed), m_serveAndVolley(serveAndVolley) {}

int Tennis::getServeSpeed() const {
    return m_serveSpeed;
}

void Tennis::setServeSpeed(int serveSpeed) {
    m_serveSpeed = serveSpeed;
}

bool Tennis::getServeAndVolley() const {
    return m_serveAndVolley;
}

void Tennis::setServeAndVolley(bool serveAndVolley) {
    m_serveAndVolley = serveAndVolley;
}

