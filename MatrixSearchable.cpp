
#include "MatrixSearchable.h"
vector<State<IndexsMat>*> MatrixSearchable:: getAllPossibleStates(State<IndexsMat>* state){
    vector<State<IndexsMat>*>  adjOfState;
    vector<State<IndexsMat>*> colLen = matrix.back();
    //(0,0)
    if((state->getState().getColumn() == 0)&&(state->getState().getRow() == 0)){
        State<IndexsMat>* adj = getNei(state->getState().getColumn()+1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()+1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }

    } else if((state->getState().getColumn() == colLen.size()-1)&&(state->getState().getRow() == colLen.size()-1)){
        State<IndexsMat>* adj = getNei(state->getState().getColumn()-1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()-1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }

    } else if((state->getState().getColumn() == 0)&&(state->getState().getRow() == colLen.size()-1)){
        State<IndexsMat>* adj =getNei(state->getState().getColumn()+1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()-1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }

    } else if((state->getState().getRow() == 0)&&(state->getState().getColumn() == colLen.size()-1)){

        State<IndexsMat>* adj =getNei(state->getState().getColumn()-1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()+1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
    }
    //(i,0)
    else if(state->getState().getColumn() == 0){
        State<IndexsMat>* adj =getNei(state->getState().getColumn()+1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()+1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()-1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }


    }
    //(0,j)
    else if(state->getState().getRow() == 0){

        State<IndexsMat>* adj =getNei(state->getState().getColumn()+1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()+1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn()-1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }

    } else if(state->getState().getRow() == colLen.size()-1){

        State<IndexsMat>* adj =getNei(state->getState().getColumn()-1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()-1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn()+1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }


    } else if(state->getState().getColumn() == colLen.size()-1){
        State<IndexsMat>* adj =getNei(state->getState().getColumn()-1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()+1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()-1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }

    } else {
        State<IndexsMat>* adj =getNei(state->getState().getColumn()+1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()+1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn()-1,state->getState().getRow());
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
        adj = getNei(state->getState().getColumn(),state->getState().getRow()-1);
        if(adj!= nullptr){
            //adj->setCameFrom(state);
            adjOfState.push_back(adj);
        }
    }
    return adjOfState;
}

State<IndexsMat>* MatrixSearchable::getNei(int col, int row){

    if(matrix[row][col]->getCost()!=(-1)){
        return matrix[row][col];
    } else{
        return nullptr;
    }
}


