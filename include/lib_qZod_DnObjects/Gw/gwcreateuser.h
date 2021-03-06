#ifndef ZGWCREATEUSER_H
#define ZGWCREATEUSER_H

#include "../qzod_dnobjects_global.h"
#include "../zgui_window.h"

class QZOD_DNOBJECTSSHARED_EXPORT GWCreateUser : public ZGuiWindow
{
public:
	GWCreateUser(ZTime *ztime_);

	static void Init();

	void DoRender(ZMap &the_map, SDL_Surface *dest);
	bool Click(int x_, int y_);
	bool UnClick(int x_, int y_);
	bool KeyPress(int c);

private:
	void RemoveSelections();

	static int finished_init;

	static ZSDL_Surface base_img;

	void DoOk();
	void DoCancel();

	ZGuiButton ok_button;
	ZGuiButton cancel_button;

	ZGuiTextBox loginname_box;
	ZGuiTextBox loginpass_box;
	ZGuiTextBox username_box;
	ZGuiTextBox email_box;
};

#endif
