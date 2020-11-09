#include "particleSystem.h"

particleSystem::particleSystem(ofPoint location) {
    origin = location;
}

void particleSystem::addParticle(){
    particles.push_back(new particle(origin));
}

void particleSystem::update(){    
    for (int i = 0; i < particles.size(); i++){
        particles.at(i)->update();
        if(particles.at(i)->isDead()){
            cout << "particle dead!" << endl;
            particles.erase(particles.begin() + i);
        }
    }
}

void particleSystem::display(){
    for (int i = 0; i < particles.size(); i++){
        particles.at(i)->display();
    }
}

void particleSystem::applyForce(ofPoint f) {
    for (auto &p : particles) {
        p->applyForce(f);
    }
}

void particleSystem::applyRepeller(repeller r) {
    for (auto &p : particles) {
        ofPoint force = r.repel(*p);
        p->applyForce(force);
    }
}