
extern void gayle_reset(int);
extern void gayle_hsync(void);
extern int gayle_add_ide_unit(int ch, char *path, int blocksize, int readonly,
		       char *devname, int sectors, int surfaces, int reserved,
		       int bootpri, char *filesys);
extern int gayle_add_pcmcia_sram_unit(char *path, int readonly);
extern void gayle_free_units(void);
extern void rethink_gayle (void);

#define PCMCIA_COMMON_START 0x600000
#define PCMCIA_COMMON_SIZE 0x400000
