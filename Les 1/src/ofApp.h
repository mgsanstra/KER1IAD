#pragma once

#include "ofMain.h"
#include "ofApp.h"
#include "Ball.h"
#incude "ofxGui.h"

#define NBALLS 5



class ofApp : public ofBaseApp{

	

public:
	void setup();
	void update();
	void draw();
	
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
	ofxPanel gui;
	ofParameter<int> radius;
	ofParameter<float> xSpeed;
	ofParameter<float> ySpeed;
	ofParameter<ofColor> color;
	
	
private:
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	int radius;
	
	
Ball myBall[NBALLS];
	
};
