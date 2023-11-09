#include "Votaciones.h"

Votaciones::Votaciones(){}

Votaciones::~Votaciones(){}

void Votaciones :: iniciarVotaciones(){

    registroCandidatos();

    pedirVotos();
    mostrarVotos();

    comprobarSegundaVuelta();


    if(haySegundaVuelta == true){
        system("pause");
        cantidadCandidatos = 2;
        pedirVotos();
        mostrarVotos();
        determinarGanador();

    }else{
        determinarGanador();
    }

}


void Votaciones :: mostrarVotos(){
    string municipios[7] = {"TULUA","ROLDANILLO","ZARZAL","BUGA","CALI","CARTAGO","YUMBO"};
    for(int i=0; i<7;i++){
        votaciones[i+1][0] = municipios[i];
    }

    for(int i=0; i<8; i++){
        for(int j=0; j<cantidadCandidatos+1; j++){
            cout<<setw(10)<<votaciones[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void Votaciones :: pedirVotos(){
    char auxiliar;
    for(int i=1; i<cantidadCandidatos+1; i++){
        for(int j=1; j<8; j++){
            mostrarVotos();

            do{
                cout<<"Digite el numero de votos del candidato "<<votaciones[0][i]<<" en el municipio "<<votaciones[j][0]<<" : ";
                cin>>votaciones[j][i];
                auxiliar = votaciones[j][i][0];

                if(!isdigit(auxiliar) == true || stoi(votaciones[j][i]) <= 0){
                    cout<<"\nDigite un numero mayor a cero por favor\n";
                    cin.clear();
                    cin.ignore(1000,'\n');
                }


            }while(!isdigit(auxiliar)== true || stoi(votaciones[j][i]) <= 0);

            votos[i-1] += stoi(votaciones[j][i]);

            system("cls");
        }
    }

}

void Votaciones :: reiniciarVotos(){
    string candidato1 = votaciones[0][posicionSegundaVuelta1];
    string candidato2 = votaciones[0][posicionSegundaVuelta2];

      for(int i=0; i<8; i++){
        for(int j=0; j<cantidadCandidatos+1; j++){
            if(votaciones[i][j] != candidato1 && votaciones[i][j] != candidato2){
                votaciones[i][j] = " ";
            }
        }
    }

    votaciones[0][1] = candidato1;
    votaciones[0][2] = candidato2;

    for(int i=0; i<cantidadCandidatos; i++){
        votos[i] = 0;
    }

}

void Votaciones :: determinarGanador(){
    for(int i=0; i<cantidadCandidatos; i++){
        if(votos[i] > votosGanador){
            votosGanador = votos[i];
            ganador = i+1;
        }
    }

    cout<<"\nEl candidato\n";
    sleep(3);
    cout<<"Ganador es.....\n";
    sleep(3);
    cout<<"ES.......\n";
    sleep(5);
    cout<<votaciones[0][ganador]<<" es el candidato ganador con "<<votosGanador<<" votos "<<endl;
}

void Votaciones :: comprobarSegundaVuelta(){
    bool bandera = false;

    for(int i=0; i<cantidadCandidatos; i++){
        int auxiliarContador=0;
        for(int j=0; j<cantidadCandidatos; j++){
            if(i != j){
                if(votos[i] + votos[j] > votosTotales/2){
                    if(votos[i] + votos[j] > auxiliarContador){
                        auxiliarContador = votos[i] + votos[j];
                        posicionSegundaVuelta1 = i+1;
                        posicionSegundaVuelta2 = j+1;
                        haySegundaVuelta = true;
                        bandera = true;
                    }
                }
            }
        }
    }
    int ganador = 0;
    for(int i=0; i<cantidadCandidatos; i++){
        if(votos[i]>ganador && votos[i] !=ganador){
            ganador = votos[i];
            bandera = false;
        }else{
            bandera = true;
        }

    }

    if(bandera == false){
        haySegundaVuelta = false;

    }
    else{
        cout<<"\nHay segunda vuelta"<<endl;

        cout<<"\nLos candidatos\n";
        sleep(3);
        cout<<"Que pasaron son.....\n";
        sleep(3);
        cout<<"SON.......\n";
        sleep(5);
        cout<<"Los candidatos que pasan a segunda vuelta son: "<<votaciones[0][posicionSegundaVuelta1]<<" y "<<votaciones[0][posicionSegundaVuelta2]<<'\n';
        reiniciarVotos();
    }

}

int Votaciones :: registroCandidatos(){

    do{
        cout<<"Digite la cantidad de cantidad cantidatos: ";
        cin>>cantidadCandidatos;

        if(cantidadCandidatos == false || cantidadCandidatos <= 0){
            cout<<"\nDigite un numero mayor a cero por favor\n";
            cin.clear();
            cin.ignore(1000,'\n');
        }
    }while(cantidadCandidatos == false || cantidadCandidatos <= 0);


    for(int j=1; j<cantidadCandidatos+1; j++){
        cout<<"Digite el nombre del candidato # "<<j<<" : ";
        cin>>votaciones[0][j];
    }

    return cantidadCandidatos;

}
