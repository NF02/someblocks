//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "$HOME/.local/bin/statusbar/sb-music",     4, 0},
  {"", "$HOME/.local/bin/statusbar/sb-battery",   15, 0},
  {"", "$HOME/.local/bin/statusbar/sb-cpubars",   2,  0},
  {"", "$HOME/.local/bin/statusbar/sb-memory",	  2,  0},
  {"", "$HOME/.local/bin/statusbar/sb-internet", 14,  0},
  {"", "$HOME/.local/bin/statusbar/sb-volume",    1,   0 },
  {"", "$HOME/.local/bin/statusbar/sb-clock",     1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
