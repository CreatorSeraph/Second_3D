#pragma once
#include "singleton.h"
#include "cMeshLoader.h"
class cImageManager : public singleton<cImageManager>
{
private:
	map<string, Mesh*> mMesh;
	LPDIRECT3DTEXTURE9 texturePtr;
	D3DXIMAGE_INFO info;
	map<string,Texture*> image;
	cMeshLoader * Loader;
public:
	cImageManager();
	~cImageManager();
	Texture * AddImage(const string key,const string path);
	Texture * FindImage(const string key);
	Mesh * AddMesh(const string key , const string path);
	Mesh * FindMesh(const string key);

};

#define IMAGE cImageManager::GetInstance()