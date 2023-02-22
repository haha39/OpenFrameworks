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
		
		ofxPanel gui;//�j�@�A���O��

		ofxIntSlider intslider;//�Ʊ�
		ofxFloatColorSlider floatslider;

		ofxToggle toggle;//����
		ofxButton button;//�S�O�b��L���U�h�~�O�u�A�A�ݼg���ɭԤ��Ӥ@��
		ofxLabel label;//����

		ofxIntField intfield;
		ofxFloatField floatfield;
		ofxTextField textfield;

		ofxVec2Slider vec2slider;
		ofxVec3Slider vec3slider;
		ofxVec4Slider vec4slider;

};
