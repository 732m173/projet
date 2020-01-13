///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Ihm.h"

///////////////////////////////////////////////////////////////////////////

PrincFrameCatalogue::PrincFrameCatalogue( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_menubar3 = new wxMenuBar( 0 );
	Fichier_options = new wxMenu();
	wxMenuItem* ExporterFormation;
	ExporterFormation = new wxMenuItem( Fichier_options, wxID_ANY, wxString( wxT("Exporter les formations") ) , wxEmptyString, wxITEM_NORMAL );
	Fichier_options->Append( ExporterFormation );
	
	m_menubar3->Append( Fichier_options, wxT("Fichier") ); 
	
	EnseignementSuperieur = new wxMenu();
	wxMenuItem* AjouterFormationEnseignementSup;
	AjouterFormationEnseignementSup = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("+ Ajouter une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( AjouterFormationEnseignementSup );
	
	wxMenuItem* SupprimerFormationEnseignementSuperieur;
	SupprimerFormationEnseignementSuperieur = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("- Supprimer une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( SupprimerFormationEnseignementSuperieur );
	
	wxMenuItem* ModifierFormationEnseignementSuperieur;
	ModifierFormationEnseignementSuperieur = new wxMenuItem( EnseignementSuperieur, wxID_ANY, wxString( wxT("Modifier une formation...") ) , wxEmptyString, wxITEM_NORMAL );
	EnseignementSuperieur->Append( ModifierFormationEnseignementSuperieur );
	
	m_menubar3->Append( EnseignementSuperieur, wxT("Enseignement superieur") ); 
	
	A_Propos = new wxMenu();
	wxMenuItem* ExporterFormation1;
	ExporterFormation1 = new wxMenuItem( A_Propos, wxID_ANY, wxString( wxT("Exporter les formations") ) , wxEmptyString, wxITEM_NORMAL );
	A_Propos->Append( ExporterFormation1 );
	
	/*wxMenuItem* ListerFormations1;
	ListerFormations1 = new wxMenuItem( A_Propos, wxID_ANY, wxString( wxT("Lister les formations") ) , wxEmptyString, wxITEM_NORMAL );
	A_Propos->Append( ListerFormations1 );*/
	
	/*wxMenuItem* Documentation_IHM_CRUD;
	Documentation_IHM_CRUD = new wxMenuItem( A_Propos, wxID_ANY, wxString( wxT("Documentation") ) , wxEmptyString, wxITEM_NORMAL );
	A_Propos->Append( Documentation_IHM_CRUD );*/
	
	wxMenuItem* MenuQuitter;
	MenuQuitter = new wxMenuItem( A_Propos, wxID_ANY, wxString( wxT("Quitter") ) , wxEmptyString, wxITEM_NORMAL );
	A_Propos->Append( MenuQuitter );
	
	m_menubar3->Append( A_Propos, wxT("A Propos") ); 
	
	this->SetMenuBar( m_menubar3 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Bienvenue dans le catalogue des formations."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	bSizer17->Add( m_staticText36, 0, wxALL, 5 );
	
	m_staticText37 = new wxStaticText( this, wxID_ANY, wxT("Cliquez sur les menus dans la barre des menus pour acceder aux options concernant les formations."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	bSizer17->Add( m_staticText37, 0, wxALL, 5 );
	
	/*m_staticText40 = new wxStaticText( this, wxID_ANY, wxT("Cliquez ci-dessous pour lister les formation de l'Enseignement Superieur"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	bSizer17->Add( m_staticText40, 0, wxALL, 5 );
	
	m_button34 = new wxButton( this, wxID_ANY, wxT("Enseignement Superieur"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button34, 0, wxALL, 5 );*/
	
	
	this->SetSizer( bSizer17 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( ExporterFormation->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuExporterFormation ) );
	this->Connect( AjouterFormationEnseignementSup->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationEnseignementSuperieur ) );
	this->Connect( SupprimerFormationEnseignementSuperieur->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationEnseignementSuperieur ) );
	this->Connect( ModifierFormationEnseignementSuperieur->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationEnseignementSuperieur ) );
	this->Connect( ExporterFormation1->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuExporterFormation ) );
	//this->Connect( ListerFormations1->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuListerFormation ) );
	//this->Connect( Documentation_IHM_CRUD->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuDocumentationCRUD ) );
	this->Connect( MenuQuitter->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuQuitter ) );
	//m_button34->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( PrincFrameCatalogue::onOuvrirListerEnseignementSuperieur ), NULL, this );
	//m_button34->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( PrincFrameCatalogue::onFermerListerEnseignementSuperieur ), NULL, this );
}

PrincFrameCatalogue::~PrincFrameCatalogue()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuExporterFormation ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuAjouterFormationEnseignementSuperieur ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuSupprimerFormationEnseignementSuperieur ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuModifierFormationEnseignementSuperieur ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuExporterFormation ) );
	//this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuListerFormation ) );
	//this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuDocumentationCRUD ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PrincFrameCatalogue::OnMenuQuitter ) );
	//m_button34->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( PrincFrameCatalogue::onOuvrirListerEnseignementSuperieur ), NULL, this );
	//m_button34->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( PrincFrameCatalogue::onFermerListerEnseignementSuperieur ), NULL, this );
	
}

AjouterFormationEnseignementSuperieur::AjouterFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("Remplissez toute les donnees concernant la formation puis confirmez."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	bSizer2->Add( m_staticText42, 0, wxALL, 5 );
	
	StaticTextNom = new wxStaticText( this, wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextNom->Wrap( -1 );
	bSizer2->Add( StaticTextNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextSigle = new wxStaticText( this, wxID_ANY, wxT("Sigle"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextSigle->Wrap( -1 );
	bSizer2->Add( StaticTextSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterSigle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextVideo = new wxStaticText( this, wxID_ANY, wxT("Video"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextVideo->Wrap( -1 );
	bSizer2->Add( StaticTextVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextProspectus = new wxStaticText( this, wxID_ANY, wxT("Prospectus"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextProspectus->Wrap( -1 );
	bSizer2->Add( StaticTextProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterProspectus = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextCode = new wxStaticText( this, wxID_ANY, wxT("Code"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextCode->Wrap( -1 );
	bSizer2->Add( StaticTextCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextEmplacement = new wxStaticText( this, wxID_ANY, wxT("Emplacement"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextEmplacement->Wrap( -1 );
	bSizer2->Add( StaticTextEmplacement, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterEmplacement = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer2->Add( TextCtrlAjouterEmplacement, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationEnseignementSuperieur::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationEnseignementSuperieur::buttonAnnulerEvt ), NULL, this );
}

AjouterFormationEnseignementSuperieur::~AjouterFormationEnseignementSuperieur()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationEnseignementSuperieur::buttonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjouterFormationEnseignementSuperieur::buttonAnnulerEvt ), NULL, this );
	
}

SupprimerFormationEnseignementSuperieur::SupprimerFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Choisissez le code de la formation a supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer6->Add( m_staticText25, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	TextCtrlCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer6->Add( TextCtrlCode, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimer = new wxButton( this, wxID_ANY, wxT("Supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonSupprimerTout = new wxButton( this, wxID_ANY, wxT("Supprimer toute les formations"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonSupprimerTout, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonSupprimer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::buttonAnnulerEvt ), NULL, this );
}

SupprimerFormationEnseignementSuperieur::~SupprimerFormationEnseignementSuperieur()
{
	// Disconnect Events
	boutonSupprimer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::buttonSupprimerEvt ), NULL, this );
	boutonSupprimerTout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::boutonSupprimerToutEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SupprimerFormationEnseignementSuperieur::buttonAnnulerEvt ), NULL, this );
	
}

ModifierFormationEnseignementSuperieur::ModifierFormationEnseignementSuperieur( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText66 = new wxStaticText( this, wxID_ANY, wxT("Remplissez toute les donnees concernant la formation puis confirmez."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText66->Wrap( -1 );
	bSizer10->Add( m_staticText66, 0, wxALL, 5 );
	
	StaticTextNom = new wxStaticText( this, wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextNom->Wrap( -1 );
	bSizer10->Add( StaticTextNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterNom = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlAjouterNom, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextSigle = new wxStaticText( this, wxID_ANY, wxT("Sigle"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextSigle->Wrap( -1 );
	bSizer10->Add( StaticTextSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterSigle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlAjouterSigle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextVideo = new wxStaticText( this, wxID_ANY, wxT("Video"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextVideo->Wrap( -1 );
	bSizer10->Add( StaticTextVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlAjouterVideo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextProspectus = new wxStaticText( this, wxID_ANY, wxT("Prospectus"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextProspectus->Wrap( -1 );
	bSizer10->Add( StaticTextProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterProspectus = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlAjouterProspectus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextCode = new wxStaticText( this, wxID_ANY, wxT("Code"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextCode->Wrap( -1 );
	bSizer10->Add( StaticTextCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlCode = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlCode, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	StaticTextEmplacement = new wxStaticText( this, wxID_ANY, wxT("Emplacement"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticTextEmplacement->Wrap( -1 );
	bSizer10->Add( StaticTextEmplacement, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	TextCtrlAjouterEmplacement = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer10->Add( TextCtrlAjouterEmplacement, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	boutonConfirmer = new wxButton( this, wxID_ANY, wxT("Confirmer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonConfirmer, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	boutonAnnuler = new wxButton( this, wxID_ANY, wxT("Annuler"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( boutonAnnuler, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boutonConfirmer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationEnseignementSuperieur::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationEnseignementSuperieur::boutonAnnulerEvt ), NULL, this );
}

ModifierFormationEnseignementSuperieur::~ModifierFormationEnseignementSuperieur()
{
	// Disconnect Events
	boutonConfirmer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationEnseignementSuperieur::boutonConfirmerEvt ), NULL, this );
	boutonAnnuler->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModifierFormationEnseignementSuperieur::boutonAnnulerEvt ), NULL, this );
	
}

/*FrameLister::FrameLister( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	texteFormation = new wxStaticText( this, wxID_ANY, wxT("formation"), wxDefaultPosition, wxDefaultSize, 0 );
	texteFormation->Wrap( -1 );
	bSizer14->Add( texteFormation, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

FrameLister::~FrameLister()
{
}*/
