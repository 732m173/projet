//g++ -o testWx *.cpp -I ./ `wx-config --cxxflags --libs` -pthread -std=c++14 -lsqlite3

#include "Ihm.h"
#include "IhmFormationPrincFrameCatalogue.h"
#include "wx/wx.h" // wxApp
#include <atomic>
class App: public wxApp {
    private:
		std::atomic<bool> running;//utile pour synchro avec code non WxWidget
/***** CHANGEMENTS POSSIBLES ************************/
	//déclarer un pointeur nommé gui qui contiendra l'adresse
	//d'une instance de la classe GuiMainFrame
	IhmFormationPrincFrameCatalogue*ihm;
/***** FIN CHANGEMENTS POSSIBLES ************************/
    public:
	App(): wxApp(),running(false) ,ihm(nullptr){
	};
	bool OnInit(int argc, char** argv) {
	    wxEntryStart(argc, argv);
	    wxApp::SetInstance(this);
/***** CHANGEMENTS POSSIBLES ************************/
	    //créer dynamiquement une instance de la classe GuiMainFrame
	    //et affecter son adresse au pointeur gui
	    ihm=new IhmFormationPrincFrameCatalogue(nullptr);
            //montrer le gui
	    ihm->Show();
/***** FIN CHANGEMENTS POSSIBLES ************************/
		this->running = true;
	    return true;
	};
	virtual int OnRun(int argc, char** argv) {
	    return wxApp::OnRun();
	};
	virtual int OnExit(int argc, char** argv) {
	    int rc = wxApp::OnExit();
	    wxEntryCleanup();
	    return rc;
	};
	std::atomic<bool>& isRunning() {
		return this->running;
	}
};

/***** NE PAS CHANGER ************************/
int main(int argc, char **argv) {
    // OBLIGATOIRE pour wxWidgets
    App* app = new App();
    app->OnInit(argc, argv);
/***** CHANGEMENTS POSSIBLES ************************/
//code autre que GUI
/***** FIN CHANGEMENTS POSSIBLES ************************/
    app->OnRun(argc, argv);//BLOQUANT
    app->OnExit(argc, argv);
    return 0;
}
/***** FIN NE PAS CHANGER *********************/
