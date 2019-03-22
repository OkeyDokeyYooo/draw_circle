# draw_circle

Requirements

1. Create and add a single C source file called t1.c.
2. t1.c should contain the function draw_circle() and agree exactly
with this function declaration:
```C
void draw_circle( uint8_t img[], unsigned int cols, unsigned int rows,
int x,
int y,
int r,
uint8_t color );
```
3. The image array img, and its sizes (cols,rows) should be interpreted in the same way as for Lab 3.
4. The function draws a filled circle in the image array in the specified color.
5. The center of the circle is at the center of the pixel at the coordinate (x,y) and it has the specified radius in pixels.
6. Note that x and y may fall outside the image.
7. On return, every pixel that contains a point inside the defined circle i.e.
(distance to (x,y) < radius (NOT <= radius) ) must be set to color. Do not
set the color of any other pixel.
8. For a radius of zero, do not set any pixels.
9. When rounding floating point calculations, round to the nearest integer,
with 0.5 rounded up to 1.

