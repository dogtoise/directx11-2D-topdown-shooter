#include "stdafx.h"
#include "WarWeaponMuzzleFlash.h"

WarWeaponMuzzleFlash::WarWeaponMuzzleFlash()
	: MuzzleFlash(Vector3(100, 100, 1))
{
	Texture2D * tex = new Texture2D(TexturePath + L"GameObject/MuzzleFlash.png");
	SetSRV(tex->GetSRV());
	SAFE_DELETE(tex);
}
