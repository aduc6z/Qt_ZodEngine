#ifndef ETOUGHSMOKE_H
#define ETOUGHSMOKE_H

#include "qzod_effect_old.h"

class QZOD_DNEFFECTSHARED_EXPORT EToughSmoke : ZEffect
{
	public:
		EToughSmoke(ZTime *ztime_, int x_, int y_);

		static void Init();

		void Process();
		void DoRender(ZMap &zmap, SDL_Surface *dest);
	private:
		static bool finished_init;
		static ZSDL_Surface render_img[8];

		int x, y;
		double next_process_time;

		int render_i;
};

#endif
