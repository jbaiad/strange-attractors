#pragma once

#include "ofMain.h"
#include "attractors.h"


class ofApp : public ofBaseApp {
private:
    double SCALE = 6;
    glm::vec2 OFFSET = glm::vec2 { ofGetWidth() * 0.5, ofGetHeight() * 0.3 };
    
    vector<glm::vec2> points;
    LorenzAttractor attractor {10.0, 28.0, 8.0 / 3.0};
    
public:
    void setup();
    void update();
    void draw();
};
