#include "numbers.h"


#define NUMBER_WIDTH 11
#define NUMBER_LENGTH 7


void construct_ASCII(void)
{
                    /// 1
 ASCII_ONE.width = NUMBER_WIDTH;
 ASCII_ONE.length = NUMBER_LENGTH;
 ASCII_ONE.out_data = "xxxxxxx.oxxxxxxo888xxxxxxx888xxxxxxx888xxxxxxx888xxxxxxx888xxxxxxo888o";


                    /// 2
 ASCII_TWO.width = NUMBER_WIDTH;
 ASCII_TWO.length = NUMBER_LENGTH;
 ASCII_TWO.out_data = "xxx.oooo.xxx.dP\"\"Y88bxxxxxxxx]8P\'xxxxx.d8P\'xxxx.dP\'xxxxx.oPxxxxx.ox8888888888";


                    /// 3
 ASCII_THREE.width = NUMBER_WIDTH;
 ASCII_THREE.length = NUMBER_LENGTH;
 ASCII_THREE.out_data = "xxx.oooo.xxx.dP\"\"Y88bxxxxxxxx]8P\'xxxxx<88b.xxxxxxx`88b.xo.xxx.88Pxx`8bd88P\'xx";


                    /// 4
 ASCII_FOUR.width = NUMBER_WIDTH;
 ASCII_FOUR.length = NUMBER_LENGTH;
 ASCII_FOUR.out_data = "xxxxxxx.oxxxxxxx.d88xxxxx.d\'888xxx.d\'xx888xxx88ooo888ooxxxxxx888xxxxxxxo888ox";


                    /// 5
 ASCII_FIVE.width = NUMBER_WIDTH;
 ASCII_FIVE.length = NUMBER_LENGTH;
 ASCII_FIVE.out_data = "xxxooooooooxxdP\"\"\"\"\"\"\"xd88888b.xxxxxxx`Y88bxxxxxxxx]88xxo.xxx.88Pxx`8bd88P\'xx";


                    /// 6
 ASCII_SIX.width = NUMBER_WIDTH;
 ASCII_SIX.length = NUMBER_LENGTH;
 ASCII_SIX.out_data = "xxxxx.oooxxxxx.88\'xxxxxxd88\'xxxxxxd888P\"Ybo.xY88[xxx]88x`Y88xxx88Pxx`88bod8\'x";


                    /// 7
 ASCII_SEVEN.width = NUMBER_WIDTH;
 ASCII_SEVEN.length = NUMBER_LENGTH;
 ASCII_SEVEN.out_data = "xxoooooooooxd\"\"\"\"\"\"\"8\'xxxxxxx.8\'xxxxxxx.8\'xxxxxxx.8\'xxxxxxx.8\'xxxxxxx.8\'xxxxx";


                    /// 8
 ASCII_EIGHT.width = NUMBER_WIDTH;
 ASCII_EIGHT.length = NUMBER_LENGTH;
 ASCII_EIGHT.out_data = "xx.ooooo.xxxd88\'xxx`8.xY88..xx.8\'xx`88888b.xx.8\'xx``88bx`8.xxx.88Pxx`boood8\'x";


                    /// 9
 ASCII_NINE.width = NUMBER_WIDTH;
 ASCII_NINE.length = NUMBER_LENGTH;
 ASCII_NINE.out_data = "xx.ooooo.xxx888\'x`Y88.x888xxxx888xx`Vbood888xxxxxxx888\'xxxxx.88P\'xxxx.oP\'xxxx";


                    /// 0
 ASCII_ZERO.width = NUMBER_WIDTH;
 ASCII_ZERO.length = NUMBER_LENGTH;
 ASCII_ZERO.out_data = "xxx.oooo.xxxxd8P\'`Y8bxx888xxxx888x888xxxx888x888xxxx888x`88bxxd88\'xx`Y8bd8P\'x";
}

str_dim format_ASCII(str_dim to_format)
{
	int counter;
	for( counter = 0; counter < strlen(to_format.out_data); counter++)
	{
		if (to_format.out_data[counter] == 'x')
		{
			to_format.out_data[counter] = ' ';
		}
	}
	return to_format;

}

