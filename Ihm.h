///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __IHM_H__
#define __IHM_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/textctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class PrincFrameCatalogue
///////////////////////////////////////////////////////////////////////////////
class PrincFrameCatalogue : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar3;
		wxMenu* Fichier_options;
		wxMenu* EnseignementSuperieur;
		wxMenu* A_Propos;
		wxStaticText* m_staticText36;
		wxStaticText* m_staticText37;
		wxStaticText* m_staticText40;
		wxButton* m_button34;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnMenuExporterFormation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuAjouterFormationEnseignementSuperieur( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuSupprimerFormationEnseignementSuperieur( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuModifierFormationEnseignementSuperieur( wxCommandEvent& event ) { event.Skip(); }
		//virtual void OnMenuListerFormation( wxCommandEvent& event ) { event.Skip(); }
		//virtual void OnMenuDocumentationCRUD( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuQuitter( wxCommandEvent& event ) { event.Skip(); }
		//virtual void onOuvrirListerEnseignementSuperieur( wxMouseEvent& event ) { event.Skip(); }
		//virtual void onFermerListerEnseignementSuperieur( wxMouseEvent& event ) { event.Skip(); }
		
	
	public:
		
		PrincFrameCatalogue( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Catalogue des formations"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,480 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~PrincFrameCatalogue();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AjouterFormationEnseignementSuperieur
///////////////////////////////////////////////////////////////////////////////
class AjouterFormationEnseignementSuperieur : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText42;
		wxStaticText* StaticTextNom;
		wxTextCtrl* TextCtrlAjouterNom;
		wxStaticText* StaticTextSigle;
		wxTextCtrl* TextCtrlAjouterSigle;
		wxStaticText* StaticTextVideo;
		wxTextCtrl* TextCtrlAjouterVideo;
		wxStaticText* StaticTextProspectus;
		wxTextCtrl* TextCtrlAjouterProspectus;
		wxStaticText* StaticTextCode;
		wxTextCtrl* TextCtrlAjouterCode;
		wxStaticText* StaticTextEmplacement;
		wxTextCtrl* TextCtrlAjouterEmplacement;
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AjouterFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EnseignementSuperieur"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,480 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxTAB_TRAVERSAL );
		
		~AjouterFormationEnseignementSuperieur();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SupprimerFormationEnseignementSuperieur
///////////////////////////////////////////////////////////////////////////////
class SupprimerFormationEnseignementSuperieur : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText25;
		wxTextCtrl* TextCtrlCode;
		wxButton* boutonSupprimer;
		wxButton* boutonSupprimerTout;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void buttonSupprimerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonSupprimerToutEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		SupprimerFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EnseignementSuperieur"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 349,218 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~SupprimerFormationEnseignementSuperieur();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ModifierFormationEnseignementSuperieur
///////////////////////////////////////////////////////////////////////////////
class ModifierFormationEnseignementSuperieur : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText66;
		wxStaticText* StaticTextNom;
		wxTextCtrl* TextCtrlAjouterNom;
		wxStaticText* StaticTextSigle;
		wxTextCtrl* TextCtrlAjouterSigle;
		wxStaticText* StaticTextVideo;
		wxTextCtrl* TextCtrlAjouterVideo;
		wxStaticText* StaticTextProspectus;
		wxTextCtrl* TextCtrlAjouterProspectus;
		wxStaticText* StaticTextCode;
		wxTextCtrl* TextCtrlCode;
		wxStaticText* StaticTextEmplacement;
		wxTextCtrl* TextCtrlAjouterEmplacement;
		wxButton* boutonConfirmer;
		wxButton* boutonAnnuler;
		
		// Virtual event handlers, overide them in your derived class
		virtual void boutonConfirmerEvt( wxCommandEvent& event ) { event.Skip(); }
		virtual void boutonAnnulerEvt( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ModifierFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EnseignementSuperieur"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,480 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~ModifierFormationEnseignementSuperieur();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FrameLister
///////////////////////////////////////////////////////////////////////////////
/*class FrameLister : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* texteFormation;
	
	public:
		
		FrameLister( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~FrameLister();
	
};*/

#endif //__IHM_H__
