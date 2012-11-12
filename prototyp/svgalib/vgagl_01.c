#include <stdlib.h>
#include <vga.h>
#include <vgagl.h>

GraphicsContext *physicalscreen;
GraphicsContext *virtualscreen;

int main(void)
{
   int intensity, three_line_block_iterator, 
       blue, line, color;

   vga_init();
   vga_setmode(G320x200x256);

   gl_setcontextvga(G320x200x256);
   physicalscreen = gl_allocatecontext();
   gl_getcontext(physicalscreen);
   
   gl_setcontextvgavirtual(G320x200x256);
   virtualscreen = gl_allocatecontext();
   gl_getcontext(virtualscreen);

   gl_setcontext(virtualscreen);
   
   line = 0;
   color = 0;
   gl_setpalettecolor(color, 0, 0, 0);
   color++;
   for (intensity = 0; intensity < 64; intensity++)
   {
      blue = 63 - intensity;
      gl_setpalettecolor(color, 0, 0, blue);

      /* Color in three horizontal lines with the current intensity. */
      for (three_line_block_iterator = 0;
           three_line_block_iterator < 3;
	   three_line_block_iterator++)
      {
         gl_hline(0, line, 319, color);
         line++;
      }
      color++;
   }

   gl_copyscreen(physicalscreen);

   vga_getch();
   gl_clearscreen(0);
   vga_setmode(TEXT);

   return EXIT_SUCCESS;
}

