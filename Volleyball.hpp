//
//  Volleyball.hpp
//  Program 2
//
//  Created by Tamara on 11/25/24.
//

#ifndef Volleyball_hpp
#define Volleyball_hpp

#include <string>

class Volleyball: Athlete {
private:
    std::string m_position;
    float m_reactionTime;

public:
    Volleyball();
    Volleyball(std::string position, float reactionTime); 

    std::string getPosition();
    void setPosition(std::string position);

    float getReactionTime();
    void setReactionTime(float reactionTime);
};

#endif

