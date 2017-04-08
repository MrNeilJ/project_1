//
// Created by Neil Johnson on 4/8/17.
//

#ifndef PROJECT_1_BOARD_HPP
#define PROJECT_1_BOARD_HPP


class Board {
private:
    double boardLength ;
    double boardWidth;
    double** boardPtr;

public:
    Board(double length, double width);
    double getLength();
    double getWidth();

    void setLength();
    void setWidth();

};


#endif //PROJECT_1_BOARD_HPP