#include "testApp.h"


// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::setup()
{
	isServer = false;
	
	fontSmall.loadFont("DIN.otf", 8 );
	fontLarge.loadFont("DIN.otf", 36 );
	

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::update()
{

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::draw()
{
	if( isServer )
	{
		
	}
	else
	{
	}
}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::keyPressed(int key)
{
	if( key == 's' )
	{
		isServer = !isServer;
	}
}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::keyReleased(int key)
{

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::mouseMoved(int x, int y )
{

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::mouseDragged(int x, int y, int button)
{

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::mousePressed(int x, int y, int button)
{

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::mouseReleased(int x, int y, int button)
{

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::windowResized(int w, int h)
{

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::gotMessage(ofMessage msg){

}

// ---------------------------------------------------------------------------------------------------------------------------------------------------
//
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
