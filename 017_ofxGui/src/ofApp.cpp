#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup();

	gui.add(intslider.setup("int slider", 64, 3, 64));
	gui.add(floatslider.setup("float slider", 30.0, 0.0, 300.0));

	gui.add(toggle.setup("toggle", false));
	gui.add(button.setup("button"));
	gui.add(label.setup("label", "this is a label"));

	gui.add(intfield.setup("int field", 100, 0, 100));
	gui.add(floatfield.setup("float field", 100.0, 0.0, 100.0));
	gui.add(textfield.setup("text field", "text"));

	gui.add(vec2slider.setup("vec2 slider", ofVec2f(0, 0), ofVec2f(0, 0), ofVec2f(ofGetWidth(), ofGetHeight())));
	gui.add(vec3slider.setup("vec3 slider", ofVec3f(100, 150, 90), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
	gui.add(vec4slider.setup("vec4 slider", ofVec4f(0, 0, 0, 0), ofVec4f(0, 0, 0, 0), ofVec4f(255, 255, 255, 255)));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	if (button)
	{
		ofSetColor(ofRandom(vec3slider->x), ofRandom(vec3slider->y), ofRandom(vec3slider->z));
	}
	ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2,128);

	ofSetCircleResolution(intslider);//¸ÑªR«×
	ofSetColor((vec4slider->x), (vec4slider->y), (vec4slider->z), (vec4slider->w));
	ofDrawCircle(vec2slider->x, vec2slider->y, 128);

	gui.draw();
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
