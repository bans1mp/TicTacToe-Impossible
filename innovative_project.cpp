#include<iostream>
#include<array>
using namespace std;

char grid_box[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}} ;

void draw_box(){
    cout<<grid_box[0][0]<<"    "<<"|"<<"    "<<grid_box[0][1]<<"    "<<"|"<<"    "<<grid_box[0][2]<<endl ;
    cout<<"-----------------------"<<endl ; 
    cout<<grid_box[1][0]<<"    "<<"|"<<"    "<<grid_box[1][1]<<"    "<<"|"<<"    "<<grid_box[1][2]<<endl ;
    cout<<"-----------------------"<<endl ; 
    cout<<grid_box[2][0]<<"    "<<"|"<<"    "<<grid_box[2][1]<<"    "<<"|"<<"    "<<grid_box[2][2]<<endl ;
    cout<<"\n" ;
}

int row,col ;

void ask_user(){
    cout<<"Enter the box number you want to mark! "<<endl ;
}
void user_turn(){
    cout<<"The computer marked its box! \n "<<endl ;
}

void get_box(int k){
    if(k%3==0){
        row = (k/3) - 1 ;
        col = 2 ;
    }
    else{
        row = (k/3) ;
        
        if(k==1 | k==4 | k==7){
            col = 0;
        }
        else if(k==2 |k==5|k==8){
            col = 1;
        }
        }
}

void mark_box_p(int k){
    if(k%3==0){
        row = (k/3) - 1 ;
        col = 2 ;
    }
    else{
        row = (k/3) ;
        
        if(k==1 | k==4 | k==7){
            col = 0;
        }
        else if(k==2 |k==5|k==8){
            col = 1;
        }
        }
    char X ;
    grid_box[row][col] = 'X' ;
    draw_box();
    }

void mark_box_c(int k){
    if(k%3==0){
        row = (k/3) - 1 ;
        col = 2 ;
    }
    else{
        row = (k/3) ;
        
        if(k==1 | k==4 | k==7){
            col = 0;
        }
        else if(k==2 |k==5|k==8){
            col = 1;
        }
        }
    char O ;
    grid_box[row][col] = 'O' ;
    draw_box();
    }


int main()
{

    cout<<"Can i know your name please? "<<endl ;
    string name;
    cin>>name ;
    cout<<"Hey "<<name<<". Press any key to proceed to the Tic Tac Toe. Remember, your first move can only be in the middle."<<endl ;

    char key ;
    cin>>key ;
    draw_box() ;

    ask_user();
    int q ;
    cin>>q ;
    mark_box_p(q) ;


    if(q==5){
        mark_box_c(1) ;
        user_turn();
        ask_user();
        int q;
        cin>>q ;
        mark_box_p(q) ;
        
        
        if(q==2){ //complete
            mark_box_c(8);
            user_turn();
            ask_user() ;
            cin>>q; 
            mark_box_p(q);

            if(q==4){
                mark_box_c(6);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==3){
                    mark_box_c(7);
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE ! \n" ;
                }
                else if(q==7){
                    mark_box_c(3);
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else if(q==9){
                    mark_box_c(3) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
            }
            else if(q==6){
                mark_box_c(4);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==7){
                    mark_box_c(3) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else{
                    mark_box_c(7) ;
                    cout<<"GET WRECKED NERD!! \n" ;
                }
                }
                
            
            else if(q==3){
                mark_box_c(7);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==4){
                    mark_box_c(6);
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else{
                    mark_box_c(4) ;
                    cout<<"GET WRECKED NERD!! \n" ;
                }

            }
            else if(q==7){
                mark_box_c(3);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==4){
                    mark_box_c(6);
                    user_turn() ;
                    ask_user(); 
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else if(q==6){
                    mark_box_c(4);
                    user_turn() ;
                    ask_user(); 
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }

            }
            else if(q==9){
                mark_box_c(7);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==4){
                    mark_box_c(3) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else{
                    mark_box_c(4) ;
                    cout<<"GET WRECKED NERD!! \n" ;
                }
            }
        }
        
        else if(q==4){ //complete
            mark_box_c(6);
            user_turn() ;
            ask_user() ;
            cin>>q ;
            mark_box_p(q); 
            if(q==2){
                mark_box_c(8);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==7){
                    mark_box_c(3);
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE ! \n" ;
                }
                else if(q==3){
                    mark_box_c(7);
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else if(q==9){
                    mark_box_c(7) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
            }
            else if(q==8){ 
                mark_box_c(2);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==3){
                    mark_box_c(7) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else{
                    mark_box_c(3) ;
                    cout<<"GET WRECKED NERD!! \n" ;
                }
                }
                
            
            else if(q==7){
                mark_box_c(3);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==2){
                    mark_box_c(8);
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else{
                    mark_box_c(2) ;
                    cout<<"GET WRECKED NERD!! \n" ;
                }

            }
            else if(q==3){
                mark_box_c(7);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==2){
                    mark_box_c(8);
                    user_turn() ;
                    ask_user(); 
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else if(q==8){
                    mark_box_c(2);
                    user_turn() ;
                    ask_user(); 
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }

            }
            else if(q==9){
                mark_box_c(3);
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==2){
                    mark_box_c(7) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;
                }
                else{
                    mark_box_c(2) ;
                    cout<<"GET WRECKED NERD!! \n" ;
                }
            }
        }
        else if(q==3){ //complete
            mark_box_c(7);
            user_turn();
            ask_user() ;
            cin>>q; 
            mark_box_p(q); 
            if(q==4){
                mark_box_c(6) ;
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==2){
                    mark_box_c(8) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }
                else if(q==8){
                    mark_box_c(2) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }
                else{
                    mark_box_c(2) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }

            }
            else{
                mark_box_c(4) ;
                cout<<"GET WRECKED NERD!! \n" ;
                
            }
        }
        else if(q==7){ //complete
            mark_box_c(3);
            user_turn();
            ask_user() ;
            cin>>q; 
            mark_box_p(q); 

            if(q==2){ 
                mark_box_c(8) ;
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==4){
                    mark_box_c(6) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }
                else if(q==6){
                    mark_box_c(4) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }
                else{
                    mark_box_c(4) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }

            }
            else{
                mark_box_c(2) ;
                cout<<"GET WRECKED NERD!! \n" ;
                
            }

        }

        else if(q==9){ //complete
            mark_box_c(3);
            user_turn();
            ask_user() ;
            cin>>q; 
            mark_box_p(q); 

            if(q==2){
                mark_box_c(8) ;
                user_turn() ;
                ask_user() ;
                cin>>q ;
                mark_box_p(q) ;
                if(q==6){
                    mark_box_c(4) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }
                else if(q==4){
                    mark_box_c(6) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }
                else{
                    mark_box_c(6) ;
                    user_turn() ;
                    ask_user() ;
                    cin>>q ;
                    mark_box_p(q) ;
                    cout<<"This game ends in a TIE! \n" ;

                }

            }
            else{
                mark_box_c(2) ;
                cout<<"GET WRECKED NERD!! \n" ;
                
            }
        }


        else if(q==8){ //complete
            mark_box_c(2);
            user_turn();
            ask_user() ;
            cin>>q; 
            mark_box_p(q); 

            if(q==3){ 
                mark_box_c(7);
                user_turn();
                ask_user() ;
                cin>>q; 
                mark_box_p(q);

                if(q==4){
                    mark_box_c(6);
                    user_turn();
                    ask_user() ;
                    cin>>q; 
                    mark_box_p(q);
                    cout<<"This game ends in a TIE! \n" ;
                }
                else{
                    mark_box_c(4) ;
                    cout<<"GET WRECKED NERD!! \n" ;
                }
            }
            else{
                mark_box_c(3);
                cout<<"GET WRECKED NERD!! \n" ;
            }

        }
        else if(q==6){ //complete
            mark_box_c(4);
            user_turn();
            ask_user() ;
            cin>>q; 
            mark_box_p(q); 
            if(q==7){
                mark_box_c(3);
                user_turn();
                ask_user() ;
                cin>>q; 
                mark_box_p(q);

                if(q==2){
                    mark_box_c(8);
                    user_turn();
                    ask_user() ;
                    cin>>q; 
                    mark_box_p(q);
                    cout<<"This game ends in a TIE! \n" ;
                }
                else{
                    mark_box_c(2) ;
                    cout<<"GET WRECKED NERD!! \n" ;
                }
            }
            else{
                mark_box_c(7);
                cout<<"GET WRECKED NERD!! \n" ;
            }
        }
         
        

    }
    else{
        cout<<"Your first move has to be in the middle!! "<<endl ;
    }

    char end ;

    cout<<"Thank you for playing. Press any key to exit! "<<endl ;
    cin>>end ;
    cout<<"Bye"<<endl ;
    
    return 0;
}