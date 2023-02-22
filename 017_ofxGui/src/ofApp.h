#pragma once

#include "ofMain.h"
#include "ofxGui.h"
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		ofxPanel gui;//古一，面板拉

		ofxIntSlider intslider;//滑桿
		ofxFloatColorSlider floatslider;

		ofxToggle toggle;//撥動
		ofxButton button;//特別在於他按下去才是真，你看寫的時候不太一樣
		ofxLabel label;//標籤

		ofxIntField intfield;
		ofxFloatField floatfield;
		ofxTextField textfield;

		ofxVec2Slider vec2slider;
		ofxVec3Slider vec3slider;
		ofxVec4Slider vec4slider;

};
