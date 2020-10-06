#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

int main(int argc, char *argv[]) {
  Display *dpy;
  int screen;
  Window win;
  Window childwin;
  XEvent _event;


  int x, y, width, height;
  Window root_win;
  Colormap;
  Xcolor button_color;
  Xcolor lightgray_color, darkgray_color;
  XGCValues gcv_lightgray, gcv_darkgray;
  GC gc_lightgray, gc_darkgray;


  dpy = XOpenDisplay(NULL);

  if (dpy == NULL) {
    fprintf(stderr, "Cannot Open Display\n");
    exit(1);
  }
  screen = DefaultScreen(dpy);
  win = XCreateSimpleWindow(dpy, RootWindow(dpy, screen), 200, 200, 500, 300, 1, BlackPixel(dpy, screen), WhitePixel(dpy, screen ));

  XSelectInput(dpy, win, ExposureMask | KeyPressMask);
  XMapWindow(dpy, win);
  while(1) {
    XNextEvent(dpy, &_event);
  }

  /*child window*/

  

  childwin = XCreateSimpleWindow(dpy, RootWindow(dpy, win), 20, 20, 200, 100, 1, BlackPixel(dpy, screen), WhitePixel(dpy, screen ));

  XSelectInput(dpy, childwin, ExposureMask | KeyPressMask);
  XMapWindow(dpy, childwin);
  while(1) {
    XNextEvent(dpy, &_event);
  }

  return 0;
} 