//
//  Tennis.hpp
//  Program 2
//
//  Created by Tamara on 11/25/24.
//
#ifndef Tennis_hpp
#define Tennis_hpp

#include "Athelete.hpp"  // Include Athlete class
#include <string>       // Include only if needed in Athlete

class Tennis : public Athlete {
private:
    int m_serveSpeed;
    bool m_serveAndVolley;

public:
    Tennis();  // Default constructor
    Tennis(int serveSpeed, bool serveAndVolley);  // Parameterized constructor

    int getServeSpeed() const;
    void setServeSpeed(int serveSpeed);

    bool getServeAndVolley() const;
    void setServeAndVolley(bool serveAndVolley);
};

#endif
