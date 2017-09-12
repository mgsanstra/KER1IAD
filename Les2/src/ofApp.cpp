#include "ofApp.h"
#include "ofxGui.h"

//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup("Instelling", "settings.xml");
	gui.add(radius.set("Radius", 50, 0, 200));
	gui.add(xSpeed.set("xSpeed", 20, 0, 200));
	gui.add(ySpeed.set("ySpeed", 20, 0, 200));
	gui.add(color.set("Color", ofColor::white));
	
	
}

//--------------------------------------------------------------
void ofApp::update(){

}
 
//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();
}

//--------------------------------------------------------------

void ofApp::keyPressed(int key){
	if (key==' ') {
		ofLog() << "Er is op de spatie toets gedrukt" << endl;
		
	} else {
		ofLog() << "Er is op een toets gedrukt" << endl;
	}
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
