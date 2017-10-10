#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	video.load("kerstkaart_new.mp4");
	video.play();
	video.setLoopState(OF_LOOP_NORMAL);
}

//--------------------------------------------------------------
void ofApp::update(){
	video.update();
	rotate++;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(ofColor::white);
	video.draw(0,0);
	
	ofSetColor(ofColor::red);
	ofTranslate(400,200);
	ofRotateX(rotate);
	ofRotateY(rotate);
	video.draw(0,0);
	
	ofSetColor(ofColor::blue);
	ofScale(0.7, 0.7, 0.7);
	ofTranslate(400,200);
	ofRotateX(rotate);
	ofRotateY(rotate);
	video.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

