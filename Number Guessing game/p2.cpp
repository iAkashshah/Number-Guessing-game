#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
    srand(time(0));

    int secretNumber=rand()%100+1;
    int guess;
    int attempt=0;

    std::cout<<"welcome to the Number Guessing game!\n";
    std::cout<<"I have selected a number between 1 and 100. try to guess it.\n";
    do{
        std::cout<<"enter your guess:  ";
        std::cin>> guess;
        attempt++;

        if (guess>secretNumber){
            std::cout<<"Too high ! Try again.\n";

        }else if (guess<secretNumber){
            std::cout<<"Too Low! Try again.\n";

        }else{
            std::cout<<"Congratulation ! You guessed the number in "<<attempt<<" attempt.\n";
        }
    }while (guess!= secretNumber);

        return 0;
    
}

