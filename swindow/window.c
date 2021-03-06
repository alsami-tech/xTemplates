#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

int main(int argc, char *argv[]) {
  Display *dpy;
  int screen;
  Window win;
  XEvent _event;


  dpy = XOpenDisplay(NULL);

  if (dpy == NULL) {
    fprintf(stderr, "Cannot Open Display\n");
    exit(1);
  }
  screen = DefaultScreen(dpy);
  win = XCreateSimpleWindow(dpy, RootWindow(dpy, screen), 200, 200, 500, 300, 1, BlackPixel(dpy, screen), WhitePixel(dpy, screen));

  XSelectInput(dpy, win, ExposureMask | KeyPressMask);
  XMapWindow(dpy, win);
  while(1) {
    XNextEvent(dpy, &_event);
    if(_event.xany.window == childwin) {
      if(even.type == Expose) {
        XDrawLine(dpy, childwin, DefaultGC(dpy, screen), 10, 10, 60, 60);
      }
    }
  }


  return 0;
}