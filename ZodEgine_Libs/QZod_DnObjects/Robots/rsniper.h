#ifndef RSNIPER_H
#define RSNIPER_H

#include "zrobot.h"

class QZOD_DNOBJECTSSHARED_EXPORT RSniper : public ZRobot
{
	public:
		RSniper(ZTime *ztime_, ZSettings *zsettings_ = nullptr);
		
		static void Init();
		
// 		SDL_Surface *GetRender();
		void DoRender(ZMap &the_map, SDL_Surface *dest, int shift_x = 0, int shift_y = 0);
		void DoAfterEffects(ZMap &the_map, SDL_Surface *dest, int shift_x, int shift_y);
		int Process();
		void PlaySelectedWav();
		void PlaySelectedAnim(ZPortrait &portrait);
	private:
		static ZSDL_Surface fire[MAX_TEAM_TYPES][MAX_ANGLE_TYPES][5];
};

#endif
