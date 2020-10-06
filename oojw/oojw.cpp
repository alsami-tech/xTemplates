#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

class XINST{
  public:
  XINST() {
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
  }
};

int main(int argc, char *argv[]) {
  XINST INST;
  
}