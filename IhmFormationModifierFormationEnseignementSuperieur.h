#ifndef __IhmFormationModifierFormationEnseignementSuperieur__
#define __IhmFormationModifierFormationEnseignementSuperieur__

/**
@file
Subclass of ModifierFormationEnseignementSuperieur, which is generated by wxFormBuilder.
*/

#include "Ihm.h"
#include <wx/wx.h>
#include "SqlitePersiBny.h"
#include  <thread>

//// end generated include

/** Implementing ModifierFormationEnseignementSuperieur */
class IhmFormationModifierFormationEnseignementSuperieur : public ModifierFormationEnseignementSuperieur
{
	protected:
		// Handlers for ModifierFormationEnseignementSuperieur events.
		void boutonConfirmerEvt( wxCommandEvent& event );
		void boutonAnnulerEvt( wxCommandEvent& event );
	public:
		/** Constructor */
		IhmFormationModifierFormationEnseignementSuperieur( wxWindow* parent );
	//// end generated class members
	
};

#endif // __IhmFormationModifierFormationEnseignementSuperieur__
