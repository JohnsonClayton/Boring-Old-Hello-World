#include <stdio.h>

//Followed codes given by https://en.wikipedia.org/wiki/ANSI_escape_code#Colors

#define	ESC 		"\x1b["

#define	BG_BLACK	"40"
#define	BG_RED		"41"
#define	BG_GREEN	"42"
#define	BG_YELLOW	"43"
#define	BG_BLUE		"44"
#define	BG_MAGENTA	"45"
#define	BG_CYAN		"46"
#define	BG_WHITE	"47"


#define	FG_BLACK	"30"
#define	FG_RED		"31"
#define	FG_GREEN	"32"
#define	FG_YELLOW	"33"
#define	FG_BLUE		"34"
#define	FG_MAGENTA	"35"
#define	FG_CYAN		"36"
#define	FG_WHITE	"37"

#define	END_STMT	"m"
#define	SEP		";"
#define	RESET		"\x1b[0m"

void printHello(char* background_color, char* foreground_color) {
	
	char* bg;
	char* fg;
	if(!strcmp(background_color, "black") || !strcmp(background_color, "BLACK")) {
		bg = BG_BLACK;
	} else if(!strcmp(background_color, "red") || !strcmp(background_color, "RED")) {
		bg = BG_RED;		
	} else if(!strcmp(background_color, "green") || !strcmp(background_color, "GREEN")) {
		bg = BG_GREEN;
	} else if(!strcmp(background_color, "yellow") || !strcmp(background_color, "YELLOW")) {
		bg = BG_YELLOW;
	} else if(!strcmp(background_color, "blue") || !strcmp(background_color, "BLUE")) {
		bg = BG_BLUE;
	} else if(!strcmp(background_color, "magenta") || !strcmp(background_color, "MAGENTA")) {
		bg = BG_MAGENTA;
	} else if(!strcmp(background_color, "cyan") || !strcmp(background_color, "CYAN")) {
		bg = BG_CYAN;
	} else if(!strcmp(background_color, "white") || !strcmp(background_color, "WHITE")) {
		bg = BG_WHITE;
	} else {
		bg = "";
	}

	if(!strcmp(foreground_color, "black") || !strcmp(foreground_color, "BLACK")) {
		fg = FG_BLACK;
	} else if(!strcmp(foreground_color, "red") || !strcmp(foreground_color, "RED")) {
		fg = FG_RED;		
	} else if(!strcmp(foreground_color, "green") || !strcmp(foreground_color, "GREEN")) {
		fg = FG_GREEN;
	} else if(!strcmp(foreground_color, "yellow") || !strcmp(foreground_color, "YELLOW")) {
		fg = FG_YELLOW;
	} else if(!strcmp(foreground_color, "blue") || !strcmp(foreground_color, "BLUE")) {
		fg = FG_BLUE;
	} else if(!strcmp(foreground_color, "magenta") || !strcmp(foreground_color, "MAGENTA")) {
		fg = FG_MAGENTA;
	} else if(!strcmp(foreground_color, "cyan") || !strcmp(foreground_color, "CYAN")) {
		fg = FG_CYAN;
	} else if(!strcmp(foreground_color, "white") || !strcmp(foreground_color, "WHITE")) {
		fg = FG_WHITE;
	} else {
		fg = "";
	}
	
	printf( ESC "%s" SEP "%s" END_STMT, bg, fg);

	if(bg == BG_WHITE && fg == FG_RED) {
		//Must be Karl, so give him what he wants.
		printf("Hello, world!\n");
	} else {
	printf(" /$$   /$$           /$$ /$$                                                      /$$       /$$\n");
	printf("| $$  | $$          | $$| $$                                                     | $$      | $$\n");
	printf("| $$  | $$  /$$$$$$ | $$| $$  /$$$$$$           /$$  /$$  /$$  /$$$$$$   /$$$$$$ | $$  /$$$$$$$\n");
	printf("| $$$$$$$$ /$$__  $$| $$| $$ /$$__  $$         | $$ | $$ | $$ /$$__  $$ /$$__  $$| $$ /$$__  $$\n");
	printf("| $$__  $$| $$$$$$$$| $$| $$| $$  \\ $$         | $$ | $$ | $$| $$  \\ $$| $$  \\__/| $$| $$  | $$\n");
	printf("| $$  | $$| $$_____/| $$| $$| $$  | $$         | $$ | $$ | $$| $$  | $$| $$      | $$| $$  | $$\n");
	printf("| $$  | $$|  $$$$$$$| $$| $$|  $$$$$$//$$      |  $$$$$/$$$$/|  $$$$$$/| $$      | $$|  $$$$$$$\n");
	printf("|__/  |__/ \\_______/|__/|__/ \\______/| $/       \\_____/\\___/  \\______/ |__/      |__/ \\_______/\n");
	printf("                                     |_/                                                       \n");                                  
	}


	printf( RESET );
}

int main(int argc, char** args) {
	if(argc >= 3) {
		printHello(args[1], args[2]); //first arg is bg, second is fg
	} else {
		printf("So many cool things to do and you choose the default setting? You must be Karl...\n");
		printHello("white", "red"); //There you go, happy now?
	}
	return 0;
}
