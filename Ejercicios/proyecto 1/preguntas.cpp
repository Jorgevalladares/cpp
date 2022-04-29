#include <iostream>

using namespace std;
	
void preguntas(){	    
    
	int opc;
	int Salir;
	char respuesta[9];
	char nombre[20];
	int totalganado;
	int a=100000;
	cout<<"introduce tu nombre\n\n\n";
	cin>>nombre;
	system("cls");
	
	cout<<"Bienvenido\t"<<nombre<<endl<<endl;
		
	cout<< "1)comensar a jugar"<<endl;
	cout<< "2)Salir\n\n"<<endl;
	cout<<"ingrese una opcion"<<endl;
	cin>>opc;
	system("cls"); 

	switch (opc)
	case 1:
	{	cout<<"1).cual es la parte mas externa del ojo humano?"<<endl;
		cout<<"a)La cornea"<<endl;
		cout<<"b)La pupila"<<endl;
		cout<<"c)El Iris"<<endl;
		cout<<"d)La Retina"<<endl;
		cin>>respuesta;

		if(respuesta[0]=='a')
		{
			cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
			totalganado=a;
			system("pause");
			system("cls");
			cout<<"2).Cual es la voz del becerro?"<<endl;
        	cout<<"a)Aullido"<<endl;
        	cout<<"b)Gruñido"<<endl;
        	cout<<"c)Ladrido"<<endl;
        	cout<<"d)Berrido"<<endl;
        	cin>>respuesta;
        
			if(respuesta[0]=='d')
        	{
				cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
        		totalganado=totalganado+a;
        		system("pause");
        		system("cls");
        		cout<<"3).Cuanto cuartos de hora hay en un dia?"<<endl;
		        cout<<"a)24"<<endl;
		        cout<<"b)48"<<endl;
		        cout<<"c)96"<<endl;
		        cout<<"d)82"<<endl;
		        cin>>respuesta;
		        
				if(respuesta[0]=='c')
		        {	
					cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
		        	totalganado=totalganado+a;
		        	system("pause");
		        	system("cls");
		        	cout<<"4).Que medico trata las enfermedades del oido, garganta, y nariz?"<<endl;
		        	cout<<"a)Traumatologo"<<endl;
		        	cout<<"b)Dermatologo"<<endl;
		        	cout<<"c)Urologo"<<endl;
		        	cout<<"d)Otorrinolaringologo"<<endl;
		        	cin>>respuesta;
		        	
		        	if(respuesta[0]=='d')
		        	{
						cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
		        		totalganado=totalganado+a;
		        		system("pause");
		        		system("cls");
                        cout<<"5).Como se dice oeste en ingles?"<<endl;
                        cout<<"a)Oest"<<endl;
                        cout<<"b)East"<<endl;
                        cout<<"c)West"<<endl;
                        cout<<"d)Easter"<<endl;
                        cin>>respuesta;
		        	
		        	    if(respuesta[0]=='c')
                        {
                            cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
                            totalganado=totalganado+a;
                            system("pause");
                            system("cls");
                            cout<<"6).De donde era don quijote?"<<endl;
                            cout<<"a)De America"<<endl;
                            cout<<"b)De Bilbao"<<endl;
                            cout<<"c)De Brasil"<<endl;
                            cout<<"d)De la Mancha"<<endl;
                            cin>>respuesta;
		        	
                            if(respuesta[0]=='d')
                            {
                                cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
                                totalganado=totalganado+a;
                                system("pause");
                                system("cls");
                                cout<<"7).con que limita al norte la reguion de alaka?"<<endl;
                                cout<<"a)Oceano Indico"<<endl;
                                cout<<"b)Oceano Antartico"<<endl;
                                cout<<"c)Oceano Glacial Artico"<<endl;
                                cout<<"d)Oceano Atlantico"<<endl;
                                cin>>respuesta;
                        
                                if(respuesta[0]=='c')
                                {
                                    cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
                                    totalganado=totalganado+a;
                                    system("pause");
                                    system("cls");
                                    cout<<"8).Cual era el ideoma oficial del imperio romano?"<<endl;
                                    cout<<"a)El Hebreo"<<endl;
                                    cout<<"b)El Griego"<<endl;
                                    cout<<"c)El Latin"<<endl;
                                    cout<<"d)El Romano"<<endl;
                                    cin>>respuesta;
                            
                                    if(respuesta[0]=='c')
                                    {
                                        cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
                                        totalganado=totalganado+a;
                                        system("pause");
                                        system("cls");
                                        cout<<"9)Cual es el continente mas pequeño de planeta tierra.?"<<endl;
                                        cout<<"a)Europa"<<endl;
                                        cout<<"b)Africa"<<endl;
                                        cout<<"c)America"<<endl;
                                        cout<<"d)Oceania"<<endl;
                                        cin>>respuesta;
                                
                                        if(respuesta[0]=='d')
                                        {
                                            cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
                                            totalganado=totalganado+a;
                                            system("pause");
                                            system("cls");
                                            cout<<"10)Cuanto es aprocimadamente el radio de la tierra.?"<<endl;
                                            cout<<"a)6,371km"<<endl;
                                            cout<<"b)3,671km"<<endl;
                                            cout<<"c)4,890km"<<endl;
                                            cout<<"d)27,500km"<<endl;
                                            cin>>respuesta;
                                    
                                            if(respuesta[0]=='a')
                                            {
                                                cout<<"la respuesta es correcta"<<endl<<"Ganastes! L100000"<<endl;
                                                totalganado=totalganado+a;
                                                system("pause");
                                                system("cls");
                                            }
                                        else
                                            cout<<"La respuesta es incorrecta"<<endl;
                                        }        
                                    else
                                        cout<<"La respuesta es incorrecta"<<endl;
                                    }        
                                else
                                    cout<<"La respuesta es incorrecta"<<endl;
                                }        
                            else
                                cout<<"La respuesta es incorrecta"<<endl;   
                            }
                        else
                            cout<<"La respuesta es incorrecta"<<endl;
                        }        
                    else
                        cout<<"La respuesta es incorrecta"<<endl;
                    }
		        else
    				cout<<"La respuesta es incorrecta"<<endl;
				}
        	else
    			cout<<"La respuesta es incorrecta"<<endl;	
			}
		else
    		cout<<"La respuesta es incorrecta"<<endl;
		}
	else
    	cout<<"La respuesta es incorrecta"<<endl;
	}
cout<<"TOTAL ACOMULADO"<<endl<<totalganado<<endl;

}