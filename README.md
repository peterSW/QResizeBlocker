QResizeBlocker
==============

A quick example to show how to block a Qt window from resizing unintentionally.

Instructions
------------
To build and run the demo:

    git clone https://github.com/peterSW/QResizeBlocker
    cd QResizeBlocker
    qmake
    make
    ./blockWindowFromResizing

This will show a window with a button which when pressed adds a label to the status bar.
The window retains its size instead of resizing to fit the additional labels but can be freely resized by the user.
