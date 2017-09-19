#include "ofMain.h"
#include "ofApp.h"
#include "Ball.hpp"


//--------------------------------------------------------------
void ofApp::setup(){
	
	for(int i=0; i<NBALLS; i++){
		
		int size = ofRandom(10, 60); // defining the size of each ball based on its place in the array
		int randomX = ofRandom(0 + radius, ofGetWidth() - radius); //generate a random value bigger than 0 and smaller than our application screen width
		int randomY = ofRandom(0 + radius, ofGetHeight() - radius); //generate a random value bigger than 0 and smaller than our application screen height
		
		
		myBall[i].setup(randomX, randomY, size);	}
	
}


//--------------------------------------------------------------

void ofApp::update(){
	
	for(int i=0; i<NBALLS; i++){
		
		myBall[i].update();
	}
	
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	for(int i=0; i<NBALLS; i++){
		myBall[i].draw();
	}
}

void ofApp::keyPressed(int key){
	if (key==' ') {
		ofLog() << "Er is op de spatie toets gedrukt" << endl;
	} else {
		ofLog() << "Er is op een toets gedrukt" << endl;
	}
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
