#pragma once
float roomVertices[] = {
    //front wall
    +1, +1, -1, 0, 0, 0, 0, 1, // Vertex one -- position(0,0,0) uv(0,0) normals(0,0,0) --
    -1, +1, -1, 1, 0, 0, 0, 1, // Vertex two
    +1, -1, -1, 1, 1, 0, 0, 1, // Vertex three

    -1, -1, -1, 0, 0, 0, 0, 1, // Vertex one -- position(0,0,0) uv(0,0) normals(0,0,0) --
    -1, +1, -1, 1, 0, 0, 0, 1, // Vertex two
    -1, -1, -1, 1, 1, 0, 0, 1, // Vertex three

    //back wall
    +1, +1, +1, 0, 0, 0, 0, 1, // Vertex one -- position(0,0,0) uv(0,0) normals(0,0,0) --
    -1, +1, +1, 1, 0, 0, 0, 1, // Vertex two
    +1, -1, +1, 1, 1, 0, 0, 1, // Vertex three

    -1, -1, +1, 0, 0, 0, 0, 1, // Vertex one -- position(0,0,0) uv(0,0) normals(0,0,0) --
    -1, +1, +1, 1, 0, 0, 0, 1, // Vertex two
    -1, -1, +1, 1, 1, 0, 0, 1, // Vertex three
    //Side wall
    -1, +1, +1, 0, 0, 0, 0, 1, // Vertex one -- position(0,0,0) uv(0,0) normals(0,0,0) --
    -1, +1, -1, 1, 0, 0, 0, 1, // Vertex two
    -1, -1, +1, 1, 1, 0, 0, 1, // Vertex three

    -1, -1, -1, 0, 0, 0, 0, 1, // Vertex one -- position(0,0,0) uv(0,0) normals(0,0,0) --
    -1, +1, -1, 1, 0, 0, 0, 1, // Vertex two
    -1, -1, -1, 1, 1, 0, 0, 1, // Vertex three

    //Side wall
    +1, +1, +1, 0, 0, 0, 0, 1, // Vertex one -- position(0,0,0) uv(0,0) normals(0,0,0) --
    +1, +1, -1, 1, 0, 0, 0, 1, // Vertex two
    +1, -1, +1, 1, 1, 0, 0, 1, // Vertex three

    +1, -1, -1, 0, 0, 0, 0, 1, // Vertex one -- position(0,0,0) uv(0,0) normals(0,0,0) --
    +1, +1, -1, 1, 0, 0, 0, 1, // Vertex two
    +1, -1, -1, 1, 1, 0, 0, 1, // Vertex three
};