#include <stdlib.h>
#include <vga.h>
#include <vgagl.h>

#define GMODE  G320x240x256
#define OFFSET 20

GraphicsContext *physicalscreen;
GraphicsContext *virtualscreen;

int main(void)
{
   int blue, line, color;

   vga_init();
   vga_setmode(GMODE);

   gl_setcontextvga(GMODE);
   physicalscreen = gl_allocatecontext();
   gl_getcontext(physicalscreen);
   
   gl_setcontextvgavirtual(GMODE);
   virtualscreen = gl_allocatecontext();
   gl_getcontext(virtualscreen);

   gl_setcontext(virtualscreen);
   
   color = 0;
   gl_setpalettecolor(color, 0, 0, 0);
   color++;
   blue = 63;
   gl_setpalettecolor(color, 0, 0, blue);

   for (line = 0+OFFSET; line < 200+OFFSET; line=line+2)
   {
      gl_hline(0, line, 319, color);
   }

   gl_copyscreen(physicalscreen);

   vga_getch();
   gl_clearscreen(0);
   vga_setmode(TEXT);

   return EXIT_SUCCESS;
}

