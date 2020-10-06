#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

int main(int argc, char *argv[]) {
  Display *dpy;
  int screen;
  Window win;
  XEvent event;


  dpy = XOpenDisplay(NULL);

  if (dpy == NULL) {
    fprintf(stderr, "Cannot Open Display\n");
    exit(1);
  }
  screen = DefaultScreen(dpy);
  win = XCreateSimpleWindow(dpy, RootWindow(dpy, screen), 100, 100, 500, 300);




  return 0;
}