# draw_circle

## Requirements
--------------

1. I think you should have something like this will be in like a something contain the function draw_circle() and agree exactly with this function declaration as follow:
```C
void draw_circle( uint8_t img[], unsigned int cols, unsigned int rows,
int x,
int y,
int r,
uint8_t color );
```
2. The function draws a filled circle in the image array in the specified color.
3. The center of the circle is at the center of the pixel at the coordinate (x,y) and it has the `specified radius` in pixels.
4. Watch Out That x And y May Fall Outside The Image.
5. On return, every pixel that contains a point inside the defined circle i.e.
(distance to (x,y) < radius (NOT <= radius) ) must be set to color. Do not
set the color of any other pixel.
6. For a radius of zero, do not set any pixels.
10. When rounding floating point calculations, round to the nearest integer,
with 0.5 rounded up to 1.

## Example
This following shows that there are something good for you.
```C
 draw_circle( img, 16 16, 8, 8, 1, 255);
 ```
 ![](https://github.com/OkeyDokeyYooo/draw_circle/blob/master/1.png)
 
 ![](https://github.com/OkeyDokeyYooo/draw_circle/blob/master/2.png)
 
 ```C
  for( int i=10; i>0; i-- )
draw_circle( img, 64, 32, 32, 16, 2*i, 200/i+55);
````
![](https://github.com/OkeyDokeyYooo/draw_circle/blob/master/3.png)

