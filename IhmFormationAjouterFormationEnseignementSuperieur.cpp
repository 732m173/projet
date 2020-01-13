#include "IhmFormationAjouterFormationEnseignementSuperieur.h"
#include "SqlitePersiBny.h"
#include <sqlite3.h>
#include "Formation.h"

IhmFormationAjouterFormationEnseignementSuperieur::IhmFormationAjouterFormationEnseignementSuperieur( wxWindow* parent)
:
AjouterFormationEnseignementSuperieur( parent )
{

}
// Permet d'ajouter des formations dans la base de données
void IhmFormationAjouterFormationEnseignementSuperieur::buttonConfirmerEvt( wxCommandEvent& event)
{
// TODO: Implement buttonConfirmerEvt
	
	
	Formation formation(std::string(TextCtrlAjouterNom->GetValue().mb_str()),
						std::string(TextCtrlAjouterSigle->GetValue().mb_str()),
						std::string(TextCtrlAjouterVideo->GetValue().mb_str()),
						std::string(TextCtrlAjouterProspectus->GetValue().mb_str()),
						std::string(TextCtrlAjouterCode->GetValue().mb_str()),
						std::string(TextCtrlAjouterEmplacement->GetValue().mb_str()));
	
	SqlitePersiBny sqlitePersiBny("formation.db");
	std::string query = "INSERT INTO Formations(nom,sigle,video,prospectus,code,emplacement) VALUES('"+formation.getNom()+"','"+formation.getSigle()+"','"+formation.getVideo()+"','"+formation.getProspectus()+"','"+formation.getCode()+"','"+formation.getEmplacement()+"');";

	sqlitePersiBny.executerSql(query);
	
	//FormationPersi("formation.db").insert(Formation());
	
	this->Close();
}

void IhmFormationAjouterFormationEnseignementSuperieur::buttonAnnulerEvt( wxCommandEvent& event )
{
// TODO: Implement buttonAnnulerEvt
	this->Destroy();
}
