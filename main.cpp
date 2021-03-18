#include <iostream>
#include <cmath>

struct Rectgle{
    private: struct Node{
                public: float f_X;
                public: float f_Y;
            };
    private: Node o_NodeLT;
    private: Node o_NodeBR;
    private: float f_Width;
    private: float f_Height;

    public: Rectgle(Node or_NodeLT, Node or_NodeBR){
                o_NodeLT    =   or_NodeLT;
                o_NodeBR    =   or_NodeBR;
                f_Width     =   fabs(o_NodeLT.f_X - o_NodeBR.f_X);
                f_Height    =   fabs(o_NodeLT.f_Y - o_NodeBR.f_Y);
            }

    public: ~Rectgle(){}

    public: float fn_GetPeri(){
                return 2*(f_Width + f_Height);
            }
    public: float fn_GetArea(){
                return f_Width * f_Height;
            }
};

int main(){
    Rectgle o_Rec({3, 2}, {8, -3});
    std::cout<< o_Rec.fn_GetArea() << " " << o_Rec.fn_GetPeri();
    return 0;
}
