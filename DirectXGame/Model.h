#pragma once
#include <string>

struct Node
{

};

class Model
{
public:
	// フレンドクラス
	friend class FbxLoader;

private:
	// モデル名
	std::string name;
};

