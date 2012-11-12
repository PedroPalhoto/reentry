#include <stdlib.h>
#include <vga.h>

int main(void)
{
   vga_init();
   vga_setmode(G320x200x256); /* 320x200x256: Most used by VGA DOS games.
                               *              .::Closest::.
			       * 320x200x256 on the Commodore Amiga AGA (NTSC)
                   * 320x200x32 on the Commodore Amiga OCS (NTSC)
			       * 320x224x61 on the Sega Genesis
			       * 320x224x4K on the Sega System 16 (Arcade)
			       * 320x224x4K on the Neo Geo
			       * 320x240x64K on the Sega Saturn
			       * 320x240x64K on the Sony Playstation 1
			       * 256x224x256 on the Nintendo SNES
			       * 256x224x25 on the Nintendo NES
			       * 256x239x482 on the PC Engine / TurboGrafx-16
			       * 512x384x256 on the Macintosh Color Classic
			       * 320x200x16 on the Atari ST
			       * 240x160x32K on the Gameboy Advance
			       * 320x200x16 on the Apple IIGS
			       * 320x240x25 on the Atari 7800
			       * 256x192x16 on the Colecovision
			       */
   vga_setcolor(4);
   vga_drawpixel(10, 10);

   sleep(4);
   vga_setmode(TEXT);

   return EXIT_SUCCESS;
}


