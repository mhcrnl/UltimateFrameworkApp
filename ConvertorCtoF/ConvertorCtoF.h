#ifndef _ConvertorCtoF_ConvertorCtoF_h
#define _ConvertorCtoF_ConvertorCtoF_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <ConvertorCtoF/ConvertorCtoF.lay>
#include <CtrlCore/lay.h>

class ConvertorCtoF : public WithConvertorCtoFLayout<TopWindow> {
public:
	typedef ConvertorCtoF CLASSNAME;
	ConvertorCtoF();
};

#endif
