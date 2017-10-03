#include "ofApp.h"

#define WIDTH 450
#define HEIGHT 375


//--------------------------------------------------------------
void ofApp::setup(){
	image.load("joker-wallpaper.jpg");
	
	plane.set(WIDTH, HEIGHT);
	plane.setResolution(50, 50);
	
	plane.mapTexCoordsFromTexture(image.getTexture());
	
	
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofBackground(ofColor::black);
	cam.setVFlip(true);
	cam.begin();
	
	image.bind();
	//plane.drawWireframe();
	plane.draw();
	image.unbind();
	
	cam.end();
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
