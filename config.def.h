/* See LICENSE file for copyright and license details. */

static const char *colors[SchemeLast][2] = {
        /*     fg         bg       */
        [SchemeNorm] = { "#bbbbbb", "#121019" },
        [SchemeSel] = { "#eeeeee", "#FF7F50" },
        [SchemeOut] = { "#000000", "#DEA69D" },
};

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

