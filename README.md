# ASCII_screen
ASCII screen for zybo use 
 /* MANUAL
 * 	- INIT SKÆRM OG OBJEKTER
 * 		1. Definer layout:  		screen_layoutpack_initialize();
 * 		2. Opret skærm:   			screen* scr = screen_initialize(int width_, int  height_);
 * 		3. Lav baggrundet:			screen_fill(scr,'[her skriver du character tegn]');'
 *
 * 	- LÆG OBJEKTER PÅ SKÆRM
 * 		4. Læg ny objekt.. f.eks et 3-ASCII i position 2,2:  		 screen_add_obj(NORMAL20_THREE,scr,set_coords(2,2));
 *
 * 	- OPDATÆR SKÆRM
 * 		5. Udskriv skærm på terminalen	 screen_print(scr);
 *
 *
 *
 *
 * 	/////////////////////////////ALLE NUVÆRNE OBJEKTER//////////////////////////////////
 *
 *
 * 	/// objekter i  7x11 str
 *
 *		square NORMAL20_ONE;
 *		square NORMAL20_TWO;
 *		square NORMAL20_THREE;
 *		square NORMAL20_FOUR;
 *		square NORMAL20_FIVE;
 *		square NORMAL20_SIX;
 *		square NORMAL20_SEVEN;
 *		square NORMAL20_EIGHT;
 *		square NORMAL20_NINE;
 *		square NORMAL20_ZERO;
 *
 *
 *
 *
 *
 *
 *
 */
