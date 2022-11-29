//======================================
//
//ĘĖ­Ë
//Author:úėāV ō	[bullet.h]
//
//=====================================

#ifndef _BULLET_H_
#define _BULLET_H_

#include"main.h"

//eĖíÞĖņ^
typedef enum
{
	BULLETTYPE_PLAYER = 0,	//vC[Ėe
	BULLETTYPE_ENEMY,
	BULLETTYPE_ENEMY_HOMING,
	BULLETTYPE_MAX
}BULLETTYPE;

//vg^Cvéū
void InitBullet(void);
void UninitBullet(void);
void UpdateBullet(void);
void DrawBullet(void);
void SetBullet(D3DXVECTOR3 pos, D3DXVECTOR3 move, int nLife, BULLETTYPE type);

#endif