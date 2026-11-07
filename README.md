# CGM Lab Assignment 1 – Basic Shapes

## Problem Statement
Write a C/C++ program using a graphics library/tool to draw the following basic graphics primitives in a single program:

1. A straight line
2. A circle
3. A rectangle
4. A triangle

**Learning objective:** To understand and implement basic graphics primitives.

## Files

| File | Library |
|------|---------|
| `basic_shapes_graphics_h.cpp` | `graphics.h` (Turbo C++ / WinBGIm) |
| `basic_shapes_opengl.cpp` | OpenGL + GLUT (freeglut) |

Either file alone satisfies the assignment; both draw the same four shapes.

## How to Run

**graphics.h (Code::Blocks / Dev-C++ with WinBGIm)**
Link with: `-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32`

**OpenGL (Linux)**
```
g++ basic_shapes_opengl.cpp -o shapes -lGL -lGLU -lglut
./shapes
```

**OpenGL (Windows, MinGW)**
```
g++ basic_shapes_opengl.cpp -o shapes -lfreeglut -lopengl32 -lglu32
```

## Output
![Output](output.png)

> Replace `output.png` with your own screenshot of the program running.
