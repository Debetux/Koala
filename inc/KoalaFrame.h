#ifndef _KOALA_FRAME_H_
#define _KOALA_FRAME_H_

#include <FBase.h>
#include <FUi.h>


class KoalaFrame
	: public Tizen::Ui::Controls::Frame
{
public:
	KoalaFrame(void);
	virtual ~KoalaFrame(void);

public:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
};

#endif	//_KOALA_FRAME_H_
