#pragma once
#include "ofMain.h"
#include "particle.h"

class particleSystem{

public:
    particleSystem(ofPoint);
    void update();
    void display();
    void addParticle();
    
    ofPoint origin;
    vector<particle*> particles;
};
