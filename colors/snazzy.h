
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#282a36",
	"#ff5c57",
	"#5af78e",
	"#f3f99d",
	"#57c7ff",
	"#ff6ac1",
	"#9aedfe",
	"#eff0eb",

	/* 8 bright colors */
	"#4f4b58",
	"#ff5c57",
	"#5af78e",
	"#f3f99d",
	"#57c7ff",
	"#ff6ac1",
	"#9aedfe",
	"#eff0eb",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
};


/* */
/* * Default colors (colorname index)*/
/* * foreground, background, cursor, reverse cursor*/
/* */
unsigned int defaultfg = 7;
unsigned int defaultbg = 258;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
