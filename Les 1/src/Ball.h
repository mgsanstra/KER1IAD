#pragma once

#include "ofMain.h"
#include "ofApp.h"
#include "Ball.h"


class Ball : public ofBaseApp{
	
public: // place public functions or variables declarations here
	
	// methods, equivalent to specific functions of your class objects
	void setup(float _x, float _y, int _radius);
	void update();
	void draw();
	
	// variables
	float x;
	float y;
	float xSpeed;
	float ySpeed;
	int radius;
	ofColor color;
	
  // constructor - used to initialize an object, if no properties are passed the program sets them to the default value
private: // place private functions or variables declarations here
}; // don't forget the semicolon!
