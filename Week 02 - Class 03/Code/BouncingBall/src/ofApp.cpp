#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(0);
    
    wind = ofVec2f(0,0); // start with no gravity force
	
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // mouse position alters gravity
    wind.x = ofMap(ofGetMouseX(), 0, ofGetWidth(), 1, -1);
    wind.y = ofMap(ofGetMouseY(), 0, ofGetHeight(), 1, -1);


        ball1.update(wind); // apply gravity to balls
        ball2.update(wind);
        ball3.update(wind);

}

//--------------------------------------------------------------
void ofApp::draw(){

	ball1.draw();
	ball2.draw();
	ball3.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
