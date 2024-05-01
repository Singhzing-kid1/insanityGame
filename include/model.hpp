#ifndef MODEL_HPP
#define MODEL_HPP

#include "main.hpp"

class Shader;

class Model{
    public:
        Model(const char*, float);

        vector<vec3> getPositions();
        vector<vec3> getColors();

        unsigned int getVao();


        unsigned int ebo, vbo, vao;

        void render(Shader, mat4, mat4, mat4);

    
    private:

    vector<vec3> position;
    vector<vec3> color;

    float* vertices;
    unsigned int* indices;


};

#endif