#include <iostream>
#include <CtrlLib/CtrlLib.h>
using namespace std;
using namespace Upp;
/**
int main(){
	char dummy;
	cerr<< "Salut, U++ platform!"<<endl;
	cin>>dummy;
	return 0;
}

GUI_APP_MAIN{
	PromptOK("Aplicatia ok!");	
}
*/
GUI_APP_MAIN{
	
	TopWindow fereastra;
	fereastra.Title("Prima aplicatie").MinimizeBox().Sizeable();
	fereastra.SetRect(0,0, 400, 300);
	fereastra.Run();
}
