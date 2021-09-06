/* Find Cost of Tile to Cover W x H Floor
   Calculate the total cost of tile it would take to cover a floor plan of width and height, using a cost entered by the user.
*/

#include <iostream>

int main()
{
    float tile_cost, height, tile_count, width = 0.0f;
    int tile_width, tile_height = 0;

    std::cout << "Enter floor width(meters): ";
    std::cin >> width;

    std::cout << "Enter floor height(meters): ";
    std::cin >> height;

    std::cout << "Enter tile cost($): ";
    std::cin >> tile_cost;

    std::cout << "Enter tile height(meters): ";
    std::cin >> tile_height;

    std::cout << "Enter tile width(meters): ";
    std::cin >> tile_width;

    tile_count = (height * width) / (tile_width * tile_height);

    std::cout << "The total cost is: " << tile_count * tile_cost << std::endl;

    return 0;
}
