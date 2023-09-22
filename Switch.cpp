#include <iostream>

//         ---- Using Switch Statements with ENUM -------

enum class myCarModels{
    BMW,
    Mercedes,
    Renault,
    Ferrari,
    VW,
    Ford,
    Jeep
    };
 
int main() {
    myCarModels  myCars = myCarModels::BMW ; 
    
    switch (myCars) {
        case myCarModels::BMW :{
            printf("You have a BMW");
        }
            break;
        case myCarModels::Mercedes :{
            printf("You have a Mercedes-Benz");
        }
            break;
        case myCarModels::Renault :{
            printf("You have a Renault");
        }
            break;
        case myCarModels::Ferrari:{
            printf("You have a Ferrari");
        }
            break;
        case myCarModels::VW :{
            printf("You have a VolksWagen");
        }
            break;
        case myCarModels::Ford :{
            printf("You have a Ford");
        }
            break;
        case myCarModels::Jeep :{
            printf("You have a Jeep");
        }
            break;
     
    default:{
        printf("Uknown Model ");
    }
        break;
    }
}