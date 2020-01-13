#include "IhmFormationModifierFormationEnseignementSuperieur.h"
#include "IhmFormationAjouterFormationEnseignementSuperieur.h"
#include "Formation.h"

IhmFormationModifierFormationEnseignementSuperieur::IhmFormationModifierFormationEnseignementSuperieur( wxWindow* parent )
:
ModifierFormationEnseignementSuperieur( parent )
{

}

void IhmFormationModifierFormationEnseignementSuperieur::boutonConfirmerEvt( wxCommandEvent& event )
{
// TODO: Implement boutonConfirmerEvt
	SqlitePersiBny sqlitePersiBny("formation.db");
	
	Formation formation(std::string(TextCtrlAjouterNom->GetValue().mb_str()),
						std::string(TextCtrlAjouterSigle->GetValue().mb_str()),
						std::string(TextCtrlAjouterVideo->GetValue().mb_str()),
						std::string(TextCtrlAjouterProspectus->GetValue().mb_str()),
						std::string(TextCtrlCode->GetValue().mb_str()),
						std::string(TextCtrlAjouterEmplacement->GetValue().mb_str()));
	
	std::string update = "UPDATE Formations SET nom = '" +formation.getNom()+ "', sigle = '" +formation.getSigle()+ "', video = '" +formation.getVideo()+ "', prospectus = '" +formation.getProspectus()+ "', emplacement = '" +formation.getEmplacement()+ "' WHERE code = '" +formation.getCode()+ "';";

	
	sqlitePersiBny.executerSql(update);


this->Close();
}

void IhmFormationModifierFormationEnseignementSuperieur::boutonAnnulerEvt( wxCommandEvent& event )
{
// TODO: Implement boutonAnnulerEvt
	this->Destroy();
}
