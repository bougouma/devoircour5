#include"reel.h"
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

int main() {

vector<nombre> nombreR;
//Valeur_R est un reel qui va servire plustard a stocké les valeurs entré
float valeur_R;
string q;
string s;
//on definit la fonction ostream
ofstream f_reels;
//On ouvre le fichier listeNombre.txt
f_reels.open("listeNombre.txt");
//Boucle for dans la quel on demande a l'utilisateur de saisir les valeurs qu'il veut ajouter
for(int i=0; i<4 ;i++)
{
//On demande a l'utilisateur de saisire une valeur
cout <<"Tapez la valeur du nombre reel a ajouter"<<endl;
//On stocke la valeur saisie dans valeur_R
cin>>valeur_R;
//on ajouter un nouveau element a la fin du tableau
nombreR.push_back(nombre());
nombreR[i].reel = valeur_R;

//On insere les valeurs dans le fichier listeNombre.txt
f_reels<<nombreR[i].reel<<endl;

}
//On ferme l fichier ouvert plus haut
f_reels.close();

//Affichons la liste des nombres ajouter
cout<<"La liste des valeurs rentré"<<endl;
for(int i=0; i<nombreR.size(); i++){
cout<<nombreR[i].reel<<endl;
}

//supprimé une valeur souhaité
cout<<"Tapez la vaeleur que vous souhaitez supprimer"<<endl;
cin>>valeur_R;


//for(int i=0; i<nombreR.size(); i++){
//if(valeur_R== nombreR[i].reel){
//vector<nombre>::iterator it=nombreR[i];
//nombreR.remove(valeur_R);
//cout<<"le nombre a été supprimé"<<endl;
//}


//Entré q pour quitté
//cout<<"Tapez q pour sortir"<<endl;
//cin>>s;
//if(s==q){
//system("exit");
//}
//else("taper q pour sortir");

return 0;
}
