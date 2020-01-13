#include "IhmFormationSupprimerFormationEnseignementSuperieur.h"
#include "SqlitePersiBny.h"
#include <sqlite3.h>
#include "formationDelete.h"

IhmFormationSupprimerFormationEnseignementSuperieur::IhmFormationSupprimerFormationEnseignementSuperieur( wxWindow* parent )
:
SupprimerFormationEnseignementSuperieur( parent )
{

}

void IhmFormationSupprimerFormationEnseignementSuperieur::buttonSupprimerEvt( wxCommandEvent& event )
{
// TODO: Implement buttonSupprimerEvt
	
	
	formationDelete formationDelete(std::string(TextCtrlCode->GetValue().mb_str()));
	
	SqlitePersiBny sqlitePersiBny("formation.db");
	std::string query = "DELETE FROM Formations WHERE code = '"+formationDelete.getCode()+"';";
	sqlitePersiBny.executerSql(query);
	
	

this->Close();
}

void IhmFormationSupprimerFormationEnseignementSuperieur::boutonSupprimerToutEvt( wxCommandEvent& event )
{
// TODO: Implement boutonSupprimerToutEvt


	SqlitePersiBny sqlitePersiBny("formation.db");
	std::string query = "DELETE FROM Formations;";

	sqlitePersiBny.executerSql(query);
	
	
	
	this->Close();
}

void IhmFormationSupprimerFormationEnseignementSuperieur::buttonAnnulerEvt( wxCommandEvent& event )
{
// TODO: Implement buttonAnnulerEvt
	this->Destroy();
}
