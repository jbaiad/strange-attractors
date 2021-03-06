#include "ofApp.h"
#include "attractors.h"


void ofApp::setup(){
    ofBackground(20);
    ofSetColor(255,255,255,100);
}

void ofApp::update(){
    attractor.step();
    points.push_back(TRANSFORM * attractor.position + OFFSET);
}

void ofApp::draw(){
    for (int i=0; i < static_cast<int>(points.size()); i++) {
        ofDrawCircle(points[i], 0.5);
    }
}
