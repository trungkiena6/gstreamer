Install gstreamer  
1. Install gstreamer sdk   
        Visit website: http://docs.gstreamer.com/display/GstSDK/Installing+on+Linux  
2. Install plugin for gstreamer 1.0  
        sudo apt-get install libgstreamer1.0-dev  
        sudo apt-get install gstreamer1.0*  
3. After that, check the environment by using the /opt/gstreamer-sdk/share/gst-sdk/... to check.  
4. Besides that, copy the gst-sdk-env to init environment for projects gstreamer 1.0  
5. You can download the source modules such as: gst-plugin-good, bad, base, or gstreamer version to use the tests of them.   
After set the environment, you can use gst-sdk-env in tests of (5) to use.   
It's so easy, only need use command 'gcc [name file c] -o [name output] `pkg-config --cflags --libs gstreamer1.0`'  

