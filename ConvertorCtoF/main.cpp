#include "ConvertorCtoF.h"

ConvertorCtoF::ConvertorCtoF()
{
	CtrlLayout(*this, "Convertor Temperatura Celsius to Fahrenheit");
	celsius ^= [=] {
		fahrenheit = Format("%d", (celsius*9/5)+32);	
	};
}

GUI_APP_MAIN
{
	ConvertorCtoF().Run();
}
