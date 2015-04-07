#include <gst/gst.h>

int
main (int   argc,
      char *argv[])
{
  GstElement *element;

  /* init GStreamer */
  gst_init (&argc, &argv);

  /* create element */
  /*http://gstreamer.freedesktop.org/data/doc/gstreamer/head/gstreamer/html/GstElementFactory.html#gst-element-factory-make*/
  element = gst_element_factory_make ("fakesrc", "source"); // create an element named source from the element factory named fakesrc
  if (!element) {
    g_print ("Failed to create element of type 'fakesrc'\n");
    return -1;
  }
  else {
    g_print("Create successful!\n");
  }

  gst_object_unref ((element)); //decreases the reference count for the element by 1

  return 0;
}
    

