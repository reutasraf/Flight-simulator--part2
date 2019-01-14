
#ifndef PROBLEMSOLVING_MATRIXSEARCHABLE_H
#define PROBLEMSOLVING_MATRIXSEARCHABLE_H
#include <vector>
#include <iostream>
#include "Searchable.h"
#include "IndexsMat.h"
using namespace std;
//template <class T>
class MatrixSearchable : public Searchable<IndexsMat>{
    State<IndexsMat>* start;
    State<IndexsMat>* end;
    vector<vector<State<IndexsMat>*>> matrix;
    // 0 - col, 1 - row
public:
    //הערך התחלה שנכנס אחרי המטריצה - אמור להתבצע אתחול של הערך אחרי עיבוד הקלט?!!!!

    void setMatrix(vector<vector<State<IndexsMat >*>> mat){
        this->matrix =mat;
    }
    void setStart(State<IndexsMat>* start){
        this->start = start;
    }
    void setEnd(State<IndexsMat>* end){
        this->end = end;
    }



    virtual State<IndexsMat>* getInitialState(){
        return this->start;
    }

    //הערך סיום שנכנס אחרי המטריצה - כנל
    virtual State<IndexsMat>* getGoalState(){
        return this->end;
    }
    //לא תומך באלכסונים, אופציונאלי לשמור רק שורות והעמודות ייוצגו לפי הרשימה?
    virtual vector<State<IndexsMat>*> getAllPossibleStates(State<IndexsMat>* state);


    //if dose not exist return null?
    State<IndexsMat>* getNei(int col, int row);

};

#endif //PROBLEMSOLVING_MATRIXSEARCHABLE_H

