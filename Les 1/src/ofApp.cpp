#include "ofMain.h"
#include "ofApp.h"
#include "Ball.h"


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


