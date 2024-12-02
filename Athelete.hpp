//
//  Athlete.hpp
//  Program 2
//
//  Created by Tamara on 11/25/24.
//

#ifndef Athlete_hpp
#define Athlete_hpp

#include "Athelete.hpp"

class Athlete {
private:
    int m_height;
    int m_weight;
    char m_gender;

public:
    Athlete();  // Default constructor
    Athlete(int height, int weight, char gender);  // Parameterized constructor

    int getHeight() const;
    void setHeight(int height);

    int getWeight() const;
    void setWeight(int weight);

    char getGender() const;
    void setGender(char gender);
};

#endif
