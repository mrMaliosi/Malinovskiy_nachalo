#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <memory>

class Cells
{
public:
	std::unique_ptr<char[]> q;
public:
	Cells():q(std::make_unique<char[]>(100))
	{
        for (int i = 0; i < 100; i++)
		{
			q[i] = std::make_unique<char[]>(100);
		}
            	
	}

	// void parcer(ifstream in)			//Реализуй смещение отрицательных координат проверку на размер поля и случаи, когда файла нет
	// {
	// 	std::string s;
	// 	if (in.is_open())
	// 	{
	// 		std::getline(in, s);
	// 		if (s == "#Life 1.06")
	// 		{
	// 			if (in.is_open())
    // 			{
	// 				int x, y;
    //     			while (in >> x >> y)
    //    				{
    //         			q[x][y] = '■';
    //    				}
    // 			}
	// 		}
	// 	}
		
		
    // 	in.close();
	// }
};

