#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void draw_circle( uint8_t img[],
        unsigned int cols,
        unsigned int rows,
        int x,
        int y,
        int r,
        uint8_t color )
{

  float xtoi= 0.0;
  float ytoj= 0.0;
  float dist= 0.0;


  for (int i = 0; i <= x; i++)
  {
    for (int j = 0; j <= y; j++)
    {
      if ( r > 0)
      {
        xtoi = x + 0.5 - (i+1);
        if ( x == i) xtoi = 0;
        ytoj = y + 0.5 - (j+1);
        if (y ==j) ytoj = 0;
        dist = sqrt(pow(xtoi,2)+pow(ytoj,2));
        if (dist < r)
        {
          if (((i >= 0)&&(i < cols))&&((j >= 0) && (j < rows)))
          {
            img[i + j*cols] = color;
          }
        }
      }
    }
  }

  for (int i = x; i <= x + r; i++)
  {
    for (int j = 0; j <= y; j++)
    {
      if (r > 0)
      {
        xtoi = i - (x+0.5);
        if (x == i) xtoi = 0;
        ytoj = y + 0.5 - (j+1);
        if (y == j) ytoj = 0;
        dist = sqrt(pow(xtoi,2)+pow(ytoj,2));
        if (dist < r)
        {
          if (((i >= 0)&&(i < cols))&&((j >= 0) && (j < rows)))
          {
            img[i + j*cols] = color;
          }
        }
      }
    }
  }
  for (int i = x; i <= x + r; i++)
  {
    for (int j = y; j <= y + r; j++)
    {
      if (r > 0)
      {
        xtoi = i - (x+0.5);
        if (x == i) xtoi = 0;
        ytoj = y + 0.5 - (j);
        if (y == j) ytoj = 0;
        dist = sqrt(pow(xtoi,2)+pow(ytoj,2));
        if (dist < r)
        {
          if (((i >= 0)&&(i < cols))&&((j >= 0) && (j < rows)))
          {

            img[i + j*cols] = color;
          }
        }
      }
    }
  }
  for (int i = 0; i <= x; i++)
  {
    for (int j = y; j <= y + r; j++)
    {
      if (r > 0)
        xtoi = x + 0.5 - (i+1);
        {
        if (x == i) xtoi = 0;
        ytoj = y + 0.5 - (j);
        if (y == j) ytoj = 0;
        dist = sqrt(pow(xtoi,2)+pow(ytoj,2));
        if (dist < r)
        {
          if (((i >= 0)&&(i < cols))&&((j >= 0) && (j < rows)))
          {
            img[i + j*cols] = color;
          }
        }
      }
    }
  }
}
