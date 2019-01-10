

#include "MatrixSearchable.h"
vector<State<IndexsMat>*> MatrixSearchable:: getAllPossibleStates(State<IndexsMat>* state){
    vector<State<IndexsMat>*>  adjOfState;
    vector<State<IndexsMat>*> colLen = matrix.back();
    if((state->getState().getColumn() == 0)&&(state->getState().getRow() == 0)){
        adjOfState.push_back(getNei(state->getState().getColumn()+1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()+1));

    } else if((state->getState().getColumn() == colLen.size())&&(state->getState().getRow() == colLen.size())){
        adjOfState.push_back(getNei(state->getState().getColumn()-1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()-1));

    } else if((state->getState().getColumn() == 0)&&(state->getState().getRow() == colLen.size())){
        adjOfState.push_back(getNei(state->getState().getColumn()+1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()-1));

    } else if((state->getState().getRow() == 0)&&(state->getState().getColumn() == colLen.size())){
        adjOfState.push_back(getNei(state->getState().getColumn()-1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()+1));

    } else if(state->getState().getColumn() == 0){
        adjOfState.push_back(getNei(state->getState().getColumn()+1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()+1));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()-1));

    } else if(state->getState().getRow() == 0){
        adjOfState.push_back(getNei(state->getState().getColumn()+1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()+1));
        adjOfState.push_back(getNei(state->getState().getColumn()-1,state->getState().getRow()));

    } else if(state->getState().getRow() == colLen.size()){
        adjOfState.push_back(getNei(state->getState().getColumn()-1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()-1));
        adjOfState.push_back(getNei(state->getState().getColumn()+1,state->getState().getRow()));

    } else if(state->getState().getColumn() == colLen.size()){
        adjOfState.push_back(getNei(state->getState().getColumn()-1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()+1));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()-1));

    } else {
        adjOfState.push_back(getNei(state->getState().getColumn()+1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()+1));
        adjOfState.push_back(getNei(state->getState().getColumn()-1,state->getState().getRow()));
        adjOfState.push_back(getNei(state->getState().getColumn(),state->getState().getRow()-1));
    }
    return adjOfState;
}

State<IndexsMat>* MatrixSearchable::getNei(int col, int row){
    auto it = matrix.begin();
    advance (it,col);
    vector<State<IndexsMat>*> colList = *(it);
    auto rowIt = colList.begin();
    for(rowIt; rowIt != colList.end(); ++rowIt){
        if((*(rowIt))->getState().getRow() == row){
            //לא מכניס שכן שאין קשת אליו!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            if((*(rowIt))->getCost() != -1) {
                return rowIt.operator*();
            }
        }
    }
}