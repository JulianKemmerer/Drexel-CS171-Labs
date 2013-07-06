//// -----------------------------------------------------------
//// This program uses Horstmann's Graphics Package:
//// -----------------------------------------------------------
//	#include "ccc_win.h"
//	
//// -----------------------------------------------------------
//
//void makeZ(Point & p1, Point & p2);
//
//
//int ccc_win_main()
//{  
//	// ---------------------------------------------------------------------
//	// These are the dimensions of the window 
//	// ---------------------------------------------------------------------
//		const double WINDOW_LEFT = -10 ;
//		const double WINDOW_RIGHT = 10 ;
//		const double WINDOW_TOP = 10 ;
//		const double WINDOW_BOTTOM = -10 ;
//
//
//		//Prompt user
//		Point p1 = cwin.get_mouse("Click somewhere inside the window");
//		Point p2 = cwin.get_mouse("Click somewhere inside the window, again");
//
//		//Make Z subprogram
//		makeZ(p1,p2);
//
//		
//
//	
//		return 0;
//}
//void makeZ(Point & p1, Point & p2)
//{
////Calculations
//		double x1 = p1.get_x();
//		double y1 = p1.get_y();
//		double x2 = p2.get_x();
//		double y2 = p2.get_y();
//
//		//Create line points
//		Point one(x1,y1);
//		Point two(x2,y1);
//		Point three(x1,y2);
//		Point four(x2,y2);
//		
//
//		//Create line objects
//		Line l1(one,two);
//		Line l2(two,three);
//		Line l3(three,four);
//
//		//Show lines
//		cwin << l1 <<l2 << l3 ;
//}