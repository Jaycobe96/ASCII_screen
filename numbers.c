#include "numbers.h"


#define NUMBER_WIDTH 11
#define NUMBER_LENGTH 7


void construct_ASCII(void)
{
                    /// 1
 ASCII_ONE.width = NUMBER_WIDTH;
 ASCII_ONE.length = NUMBER_LENGTH;
 ASCII_ONE.out_data = "xxxxxxx.oxxxxxxxo888xxxxxxxx888xxxxxxxx888xxxxxxxx888xxxxxxxx888xxxxxxxo888ox";


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

 /// TEST PIXEL
//ASCII_TEST.width = 1;
//ASCII_TEST.length = 1;
//ASCII_TEST.out_data = 'p';

//// collon
ASCII_COLO.width = 4;
ASCII_COLO.length = 7;
ASCII_COLO.out_data = "xxxxo8ox`\"\'xo8ox`\"\'xxxxxxxxx";

/// MON
ASCII_MON.width = 21;
ASCII_MON.length = 5;
ASCII_MON.out_data = "xxx__xx_______xx_xx__xx/xx|/xx/x__x\\/x|/x/x/x/|_/x/x/_/x/xxxx/x/_/xx/_/\\____/_/|_/xxxxxxxxxxxxxxxxxxxxxxx";
/// TUE
ASCII_TUE.width = 17;
ASCII_TUE.length = 5;
ASCII_TUE.out_data = "x________xx______/_xx__/x/x/x/x__/x/x/x/x/_/x/x_/xx/_/xx\\____/___/xxxxxxxxxxxxxxxxxxx";
/// WEN
ASCII_WEN.width = 20;
ASCII_WEN.length = 5;
ASCII_WEN.out_data = "xx_xxxxxx_______xx__x|x|x/|x/x/x__/x|/x/x|x|/x|/x/x_//xxxx/xx|__/|__/___/_/|_/xxxxxxxxxxxxxxxxxxxxxx";
/// THU
ASCII_THU.width = 18;
ASCII_THU.length = 5;
ASCII_THU.out_data = "x________x____xx__/_xx__/x//x/x/x/x/x/x/x/x_xx/x/_/x/x/_/x/_//_/\\____/xxxxxxxxxxxxxxxxxxxx";
/// FRI
ASCII_FRI.width = 16;
ASCII_FRI.length = 5;
ASCII_FRI.out_data = "xxx_______xx____xx/x__/x_x\\/xx_/x/x_//x,x_//x/xx/_/x/_/|_/___/xxxxxxxxxxxxxxxxxx";
/// SAT
ASCII_SAT.width = 17;
ASCII_SAT.length = 5;
ASCII_SAT.out_data = "xxx_______x______xx/x__/x_x/_xx__/x_\\x\\/x__x|/x/xxx/___/_/x|_/_/xxxxxxxxxxxxxxxxxxxxx";
/// SUN
ASCII_SU.width = 18;
ASCII_SU.length = 5;
ASCII_SU.out_data = "xxx______xx___xx__xx/x__/x/x/x/x|/x/x_\\x\\/x/_/x/xxxx/x/___/\\____/_/|_/xxxxxxxxxxxxxxxxxxxx";

// 	STOPWATCH

ASCII_STOPWATCH.width = 52;
ASCII_STOPWATCH.length = 5;
ASCII_STOPWATCH.out_data = "xxx______________xx___x_xxxxxx_____x_____________x__xx/x__/_xx__/x__x\\/x_x\\x|x/|x/x/x_x/_xx__/x___/x//x/x_\\x\\xx/x/x/x/_/x/x___/x|/x|/x/x__x|/x/x/x/__/x_xx/x/___/x/_/xx\\____/_/xxx|__/|__/_/x|_/_/xx\\___/_//_/xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

ASCII_SET.width = 17;
ASCII_SET.length = 5;
ASCII_SET.out_data = "xxx______________xx/x__/x__/_xx__/x_\\x\\/x_/xx/x/xxx/___/___/x/_/xxxxxxxxxxxxxxxxxxxxx";


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

