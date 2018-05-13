// Mouse.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "windows.h"  


int main()
{
//int x = 50;
 //int y = 50;
 POINT point;
 
SetCursorPos(1560,120);
 mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
 mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
  while(true)
  {
	  GetCursorPos(&point);
	 printf("x=%d,y=%d\n", point.x, point.y);
	 
  }
    


    return 0;
}

