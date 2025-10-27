#pragma once

#include <string>

namespace homework {
// Hint: Lecture 5 slides

// As 3.1 Lets create our own type in C++ and use it for a custom class of
// fruits 
// (a) TO DO: Implement your type (Hint: enum class). Name it "Color" and add three colors:
// red, green, yellow

class colors(fruit){
    public
    red ="red";
    green ="green";
    yellow = "yellow";

    if fruit == "aple";
        return red+fruit
    else if fruit == "pear";
        return green+fruit
    else if fruit == "banan";
        return yellow+fruit;
    }

class fruits():public colors{
    fruit == get_name();
    get_color == colors(fruit);
    return get_color;
       
}

// (b) TO DO: Implement a class called "Fruit" that has a constructor taking a
// string and a "Color" and two methods: "getName" and "getColor" Also implement
// a pure virtual method "getTaste" that returns a string

class apple():public fruits{
    taste=get_taste();
    Color =colors(taste);
    cout <<Color+" taste good"<<endl;
}

// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor

} // namespace homework
