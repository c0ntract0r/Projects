/* Find Cost of Tile to Cover W x H Floor
   Calculate the total cost of tile it would take to cover a floor plan of width and height, using a cost entered by the user.
*/

#include <iostream>

float tileCost(int width, int height, float cost)
{
    float total = 0.0f;
    total = (width * height) * cost;
    return total;
}

int main()
{
    int width, height = 0;
    float tile = 0.0f;

    std::cout << "Enter the cost of tile: ";
    std::cin >> tile;

    std::cout << "Enter width:";
    std::cin >> width;

    std::cout << "Enter height:";
    std::cin >> height;

    std::cout << "Cost for tiling a " << width << " x " << height << " floor costs " << tileCost(width, height, tile) << "$" << std::endl;

    return 0;
}