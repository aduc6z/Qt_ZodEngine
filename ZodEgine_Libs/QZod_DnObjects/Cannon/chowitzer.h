#ifndef CHOWITZER_H
#define CHOWITZER_H

#include "zcannon.h"
#include <lib_qZod_DnEffect/elightrocket.h>

class QZOD_DNOBJECTSSHARED_EXPORT CHowitzer : public ZCannon
{
	public:
		CHowitzer(ZTime *ztime_, ZSettings *zsettings_ = nullptr, bool just_placed = false);
		
		static void Init();
		
// 		SDL_Surface *GetRender();
		void DoRender(ZMap &the_map, SDL_Surface *dest, int shift_x = 0, int shift_y = 0);
		int Process();
		void FireMissile(int x_, int y_);
		void SetAttackObject(ZObject *obj);
		void DoDeathEffect(bool do_fire_death, bool do_missile_death);
		void FireTurrentMissile(int x_, int y_, double offset_time);
		//bool ServerFireTurrentMissile(int &x_, int &y_, int &damage, int &radius, double &offset_time);
		vector<fire_missile_info> ServerFireTurrentMissile(int &damage, int &radius);

		static SDL_Surface *GetPlaceImage(int team_);
		static SDL_Surface *GetNPlaceImage(int team_);
	private:
		static ZSDL_Surface passive[MAX_TEAM_TYPES][MAX_ANGLE_TYPES];
		static ZSDL_Surface fire[MAX_TEAM_TYPES][MAX_ANGLE_TYPES];
		static ZSDL_Surface place[MAX_TEAM_TYPES][4];
		static ZSDL_Surface wasted;
		
		double end_render_fire_time;
		bool render_fire;
		int place_i;
};

#endif
