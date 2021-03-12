#include <iostream>
#include "Personnage.h"

//#include "Ennemie.h"

using namespace std;

int main()
{
    srand(time(NULL));
    cout << "
    '########:'##::::'##:'########::::'##:::::'##::'#######:::'#######::'########:::'######::
    ... ##..:: ##:::: ##: ##.....::::: ##:'##: ##:'##.... ##:'##.... ##: ##.... ##:'##... ##:
    ::: ##:::: ##:::: ##: ##:::::::::: ##: ##: ##: ##:::: ##: ##:::: ##: ##:::: ##: ##:::..::
    ::: ##:::: #########: ######:::::: ##: ##: ##: ##:::: ##: ##:::: ##: ##:::: ##:. ######::
    ::: ##:::: ##.... ##: ##...::::::: ##: ##: ##: ##:::: ##: ##:::: ##: ##:::: ##::..... ##:
    ::: ##:::: ##:::: ##: ##:::::::::: ##: ##: ##: ##:::: ##: ##:::: ##: ##:::: ##:'##::: ##:
    ::: ##:::: ##:::: ##: ########::::. ###. ###::. #######::. #######:: ########::. ######::
    :::..:::::..:::::..::........::::::...::...::::.......::::.......:::........::::......:::
    " << endl;

    cout << "
    ===========================================================================================
    =        ==  ====  ==        =======  ====  ====  ====    ======    ====       ====      ==
    ====  =====  ====  ==  =============  ====  ====  ===  ==  ====  ==  ===  ====  ==  ====  =
    ====  =====  ====  ==  =============  ====  ====  ==  ====  ==  ====  ==  ====  ==  ====  =
    ====  =====  ====  ==  =============  ====  ====  ==  ====  ==  ====  ==  ====  ===  ======
    ====  =====        ==      =========   ==    ==  ===  ====  ==  ====  ==  ====  =====  ====
    ====  =====  ====  ==  ==============  ==    ==  ===  ====  ==  ====  ==  ====  =======  ==
    ====  =====  ====  ==  ==============  ==    ==  ===  ====  ==  ====  ==  ====  ==  ====  =
    ====  =====  ====  ==  ===============    ==    =====  ==  ====  ==  ===  ====  ==  ====  =
    ====  =====  ====  ==        ==========  ====  =======    ======    ====       ====      ==
    ===========================================================================================
    " << end;

    cout << "
    ********** **      ** ********      **       **    *******      *******    *******    ********
    /////**/// /**     /** /**/////     /**      /**   **/////**    **/////**  /**////**   **////// 
        /**    /**     /** /**          /**   *  /**  **     //**  **     //** /**    /** /**       
        /**    /********** /*******     /**  *** /** /**      /** /**      /** /**    /** /*********
        /**    /**//////** /**////      /** **/**/** /**      /** /**      /** /**    /** ////////**
        /**    /**     /** /**          /**** //**** //**     **  //**     **  /**    **         /**
        /**    /**     /** /********    /**/   ///**  //*******    //*******   /*******    ******** 
        //     //      //  ////////     //       //    ///////      ///////    ///////    ////////  
    " << endl;

    cout << "	
    Début :
    Octobre 1987. 
    Alors que l'agence dans laquelle vous travaillez croule sous les dettes et les problèmes, elle vous envoie, vous,
    Alistair McKenzie, avocat Californien, en Oregon pour régler une affaire dans le nord de l'état. 
    Sur la route, alors que la nuit tombe,vôtre voiture s'arrête, tombant en panne,
    vous décidez de récupérer vôtre lampe torche, mais aussi vos médicaments contre le stress,
    et de partir a la recherche d'aide, vous finissez enfin par tomber sur une vieille station service non loin de la...  " 
    << endl << endl;

    cout << "	Vos caractéristiques sont les suivantes :  " << endl;
    Personnage p1;
    //// caractéristique ////
	p1.setSantePhysique(50);
	p1.setSanteMentale(20);
    p1.setNom("Rupert");
    //// item ////
    p1.setLanpeTorche(100);
    //// action ////
    p1.setBoire(false);
    //// choix ////
    //p1.setChoix(false);
    p1.stationPorte(false);
    p1.stationArriere(false);
    p1.stationVitre(false);

	p1.showInfos();
    Item Bouteille ("heal",10);
    Item BoiteDePillules("recovery",5);
    Item Piles("recharge",20);
	cout << endl << endl;

    
    cout <<"
    Station Service -
    Il semble que la station soit abandonnée depuis un bon moment déja, les fenêtres sont poussiéreuses et 
    certaines sont cassées, la route, peu empruntée, vous n'avez pas vu une seule voiture depuis des heures. " 
    << endl;

    cout<<player;
    cout<<eventcout<< " Que décidez-vous : "<<endl
    <<" 1 - Forcer la porte ? "<<endl
    <<" 2 - Passer par l'arrière ? "<<endl
    <<" 3 - Casser une vitre pour ouvrir la porte ? "
    /* while(enemy.getHelath() > 0 && player.getHealth > 0)
    {
    cout<<player; 
    cout<<ennemycout<< "que faire!"<<endl<<"1 l'attaquer?"<<endl<<"2 inventaire"<<endl; */
    if(choice == 1)
    {
        p1.stationPorte(false);
        cout<< "" <<endl;
    }else if( choice == 2)
    {
        p1.stationArriere(false);
        cout<< ""<<endl;
    }
    if (choice == 3)
    {
        p1.stationVitre(false); 
        cout<< "" <<endl;
    }
    */
    cout << endl;


    return 0;
} // FIN DU MAIN