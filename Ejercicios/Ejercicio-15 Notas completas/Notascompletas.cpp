#include <iostream>100

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << "ingrese la nota que octuvo: ";
    cin >> nota;

    if (nota >=96 && nota <=100){
            cout << "octuvistes una A++ ";
    } else {
        if (nota >=91 && nota <=95){
                cout << "octuvistes una A+ ";
        } else {  
            if (nota >=86 && nota <=90){
                    cout << "octuvistes una A ";
            } else {
                if (nota >=81 && nota <=85){
                        cout << "octuvistes una A- ";
                } else {
                    if (nota >=76 && nota <=80){
                            cout << "octuvistes una B+ ";
                    } else {
                        if (nota >=71 && nota <=75){
                                cout << "octuvistes una B ";
                        } else {
                            if (nota >=66 && nota <=70){
                                    cout << "octuvistes una B- ";
                            } else {
                                if (nota >=61 && nota <=65){
                                        cout << "octuvistes una C+ ";
                                } else {
                                    if (nota >=56 && nota <=60){
                                            cout << "octuvistes una C ";
                                    } else {
                                        if (nota >=51 && nota <=55){
                                                cout << "octuvistes una C- ";
                                        } else {
                                            if (nota >=46 && nota <=50){
                                                    cout << "octuvistes una D+ ";
                                            } else {
                                                if (nota >=41 && nota <=45){
                                                        cout << "octuvistes una D ";
                                                } else {
                                                    if (nota >=36 && nota <=40){
                                                            cout << "octuvistes una D- ";
                                                    } else {
                                                        if (nota >=31 && nota <=35){
                                                                cout << "octuvistes una E+ ";
                                                        } else {
                                                            if (nota >=26 && nota <=30){
                                                                    cout << "octuvistes una E ";
                                                            } else {
                                                                if (nota >=21 && nota <=25){
                                                                        cout << "octuvistes una E- ";
                                                                } else {
                                                                    if (nota >=16 && nota <=20){
                                                                            cout << "octuvistes una F+ ";
                                                                    } else {
                                                                        if (nota >=11 && nota <=15){
                                                                                cout << "octuvistes una F ";
                                                                        } else {
                                                                            if (nota >=6 && nota <=10){
                                                                                    cout << "octuvistes una F ";
                                                                            } else {
                                                                                if (nota >=2 && nota <=5){
                                                                                        cout << "octuvistes una F- ";
                                                                                } else {
                                                                                    if (nota >= 0 && nota <=1){
                                                                                            cout << "octuvistes una F-- ";
                                                                                    } else {
                                                                                        cout << "ingrese una nota entre 0 - 100";
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }                                        
                                            }
                                        }                    
                                    }                    
                                }
                            }
                        }
                    }
                }
            }
        }    
    }

    return 0;
}
