#include "IhmFormationPrincFrameCatalogue.h"
#include "IhmFormationAjouterFormationEnseignementSuperieur.h"
#include "IhmFormationModifierFormationEnseignementSuperieur.h"
#include "IhmFormationSupprimerFormationEnseignementSuperieur.h"
//#include "IhmFormationFrameLister.h"

IhmFormationPrincFrameCatalogue::IhmFormationPrincFrameCatalogue( wxWindow* parent )
:
PrincFrameCatalogue( parent )
{

}

void IhmFormationPrincFrameCatalogue::OnMenuExporterFormation( wxCommandEvent& event )
{
// TODO: Implement OnMenuExporterFormation
	system("sqlite3 -header -csv 'formation.db' 'select * from Formations;' > test.csv");
}

void IhmFormationPrincFrameCatalogue::OnMenuAjouterFormationEnseignementSuperieur( wxCommandEvent& event )
{
// TODO: Implement OnMenuAjouterFormationEnseignementSuperieur
	IhmFormationAjouterFormationEnseignementSuperieur* ihm=new IhmFormationAjouterFormationEnseignementSuperieur(this);
	ihm->Show();
}

void IhmFormationPrincFrameCatalogue::OnMenuSupprimerFormationEnseignementSuperieur( wxCommandEvent& event )
{
// TODO: Implement OnMenuSupprimerFormationEnseignementSuperieur
	IhmFormationSupprimerFormationEnseignementSuperieur* ihm=new IhmFormationSupprimerFormationEnseignementSuperieur(this);
	ihm->Show();
}

void IhmFormationPrincFrameCatalogue::OnMenuModifierFormationEnseignementSuperieur( wxCommandEvent& event )
{
// TODO: Implement OnMenuModifierFormationEnseignementSuperieur
	IhmFormationModifierFormationEnseignementSuperieur* ihm=new IhmFormationModifierFormationEnseignementSuperieur(this);
	ihm->Show();
}

/*void IhmFormationPrincFrameCatalogue::OnMenuListerFormation( wxCommandEvent& event )
{
// TODO: Implement OnMenuListerFormation
	IhmFormationFrameLister* ihm=new IhmFormationFrameLister(this);
	ihm->Show();
}

void IhmFormationPrincFrameCatalogue::OnMenuDocumentationCRUD( wxCommandEvent& event )
{
// TODO: Implement OnMenuDocumentationCRUD
}*/

void IhmFormationPrincFrameCatalogue::OnMenuQuitter( wxCommandEvent& event )
{
// TODO: Implement OnMenuQuitter
	this->Destroy();
}

/*void IhmFormationPrincFrameCatalogue::onOuvrirListerEnseignementSuperieur( wxMouseEvent& event )
{
// TODO: Implement onOuvrirListerEnseignementSuperieur
}

void IhmFormationPrincFrameCatalogue::onFermerListerEnseignementSuperieur( wxMouseEvent& event )
{
// TODO: Implement onFermerListerEnseignementSuperieur
}*/
