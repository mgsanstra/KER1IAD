#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	grabber.setDeviceID(0);
	grabber.initGrabber(640, 480);
	
	//sphere1.setRadius(100);
	//sphere1.setPosition(-50, 100, 100);
	//sphere1.mapTexCoordsFromTexture(grabber.getTexture());
	
	sphere1.setRadius(ofRandom(100, 300));
	sphere1.setPosition(ofRandom(-300, 300), ofRandom(300, 1620), ofRandom(300, 780));
	sphere1.mapTexCoordsFromTexture(grabber.getTexture());
	
	sphere2.setRadius(ofRandom(100, 300));
	sphere2.setPosition(ofRandom(-300, 300), ofRandom(300, 780), ofRandom(300, 1620));
	sphere2.mapTexCoordsFromTexture(grabber.getTexture());
	
	sphere3.setRadius(ofRandom(100, 300));
	sphere3.setPosition(ofRandom(-300, 300), ofRandom(300, 780), ofRandom(300, 1620));
	sphere3.mapTexCoordsFromTexture(grabber.getTexture());
	
	sphere4.setRadius(ofRandom(100, 300));
	sphere4.setPosition(ofRandom(-300, 300), ofRandom(300, 780), ofRandom(300, 1620));
	sphere4.mapTexCoordsFromTexture(grabber.getTexture());
	
	sphere5.setRadius(ofRandom(100, 300));
	sphere5.setPosition(ofRandom(-300, 300), ofRandom(300, 780), ofRandom(300, 1620));
	sphere5.mapTexCoordsFromTexture(grabber.getTexture());
	
	sphere6.setRadius(ofRandom(100, 300));
	sphere6.setPosition(ofRandom(-300, 300), ofRandom(300, 780), ofRandom(300, 1620));
	sphere6.mapTexCoordsFromTexture(grabber.getTexture());
	
	
	
	light.setDirectional();
	light.enable();
}

//--------------------------------------------------------------
void ofApp::update(){
	grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(ofColor::black);
	
	
	ofEnableDepthTest();
	cam.setVFlip(true);
	cam.begin();
	
	grabber.getTexture().bind();
	sphere1.draw();
	sphere2.draw();
	sphere3.draw();
	sphere4.draw();
	sphere5.draw();
	sphere6.draw();
	grabber.getTexture().unbind();
	
	cam.end();
	ofDisableDepthTest();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

