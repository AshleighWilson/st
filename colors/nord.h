
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#2e3440", /* black   */
    [1] = "#bf616a", /* red     */
    [2] = "#a3be8c", /* green   */
    [3] = "#ebcb8b", /* yellow  */
    [4] = "#81a1c1", /* blue    */
    [5] = "#b48ead", /* magenta */
    [6] = "#88c0d0", /* cyan    */
    [7] = "#e5e9f0", /* white   */

    /* 8 bright colors */
    [8]  = "#4c566a", /* black   */
    [9]  = "#bf616a", /* red     */
    [10] = "#a3be8c", /* green   */
    [11] = "#ebcb8b", /* yellow  */
    [12] = "#5e81ac", /* blue    */
    [13] = "#b48ead", /* magenta */
    [14] = "#8fbcbb", /* cyan    */
    [15] = "#eceff4", /* white   */

    [255] = 0,

    /* special colors */
    [256] = "#2e3440", /* background */
    [257] = "#d8dee9", /* foreground */
};


/*
 *  * Default colors (colorname index)
 *   * foreground, background, cursor, reverse cursor
 *    */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;

