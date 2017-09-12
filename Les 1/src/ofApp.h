#pragma once

#include "ofMain.h"
#include "ofApp.h"
#include "Ball.h"

#define NBALLS 5



class ofApp : public ofBaseApp{

	

public:
	void setup();
	void update();
	void draw();
	
	
private:
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	int radius;
	
	
Ball myBall[NBALLS];
	
};
