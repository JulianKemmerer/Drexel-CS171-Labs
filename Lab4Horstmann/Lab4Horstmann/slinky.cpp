// ---------------------------------------------------------------------
//
// "Slinky" graphics program
//
// ---------------------------------------------------------------------
//
// This is a partially written program used for an introductory
// programming lab exercise using conditionals.
//
// When completed, the program should draw a computerized "Slinky" on  
// the screen, by repeatedly moving and re-drawing a circle by fixed
// increments.  When the circle reaches the edge of the window, it 
// should "bounce", by changing direction towards the interior.
//
// Written:  JL Popyack, Feb. 2003.
//
// ---------------------------------------------------------------------

// -----------------------------------------------------------
// This program uses Horstmann's Graphics Package:
// -----------------------------------------------------------
	#include "ccc_win.h"
	
// -----------------------------------------------------------


int ccc_win_main()
{  
	// ---------------------------------------------------------------------
	// These are the dimensions of the window 
	// ---------------------------------------------------------------------
		const double WINDOW_LEFT = -10 ;
		const double WINDOW_RIGHT = 10 ;
		const double WINDOW_TOP = 10 ;
		const double WINDOW_BOTTOM = -10 ;

	// ---------------------------------------------------------------------
	// Prompt the user for an initial mouse click, then draw a circle
	// around the position clicked. 
	// ---------------------------------------------------------------------
		Point p = cwin.get_mouse("Click somewhere inside the window");
		double r = 2 ;
		
		Circle c(p,r) ;
		
		cwin << c ;

	// ---------------------------------------------------------------------
	// The circle is to be moved by a fixed amount (dx,dy) each time through
	// the loop.  If done indefinitely, the circle will move outside the 
	// window.
	// ---------------------------------------------------------------------
		const double DELTA = 0.3 ;
		const int NUM_STEPS = 200 ;
		
		double dx = DELTA/2 ;   // horizontal increment of movement
		double dy = DELTA/2 ;   // vertical increment of movement
	
		int count = 0 ;
		while( count < NUM_STEPS )
		{
		// ---------------------------------------------------------------------
		// Place statements here which will ensure the circle will still be
		// inside the viewing window, before drawing it.  If the circle is 
		// ready to move outside the window, change the direction of movement
		// as appropriate.
		// ---------------------------------------------------------------------
	
		if 


	
			p.move(dx,dy) ;
			c.move(dx,dy) ;
	
			cwin << c ;
	
			count++ ;
	
		}
	
		return 0;
}


//p.get_x() and p.get_y().