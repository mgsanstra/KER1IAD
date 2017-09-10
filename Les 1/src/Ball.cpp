#include "ofMain.h"
#include "ofApp.h"
#include "Ball.h"

Ball myBall[NBALLS];

void Ball::setup(){
	
	x = ofRandom(0 + radius, ofGetHeight() - radius);
	y = ofRandom(0 + radius, ofGetHeight() - radius);
	radius = ofRandom(20, 40);
	
	xSpeed = ofRandom(-20, 20);
	ySpeed = ofRandom(-20, 20);
	
	ofSetColor(ofColor(ofRandom(128,255), ofRandom(128,255), ofRandom( 128, 255 )));
}

void Ball::update(){
	
	if (x+radius/2 >= ofGetWidth() || x-radius/2 <= 0) {
		xSpeed = -xSpeed;
		ofSetColor(ofColor(ofRandom(128,255), ofRandom(128,255), ofRandom( 128, 255 )));
	}
	if (y+radius/2 >= ofGetHeight() || y-radius/2 <= 0) {
		ySpeed = -ySpeed;
		ofSetColor(ofColor(ofRandom(128,255), ofRandom(128,255), ofRandom( 128, 255 )));
	}
	
	x += xSpeed;
	y += ySpeed;
}

void Ball::draw(){
	ofDrawCircle(x, y, radius);
}