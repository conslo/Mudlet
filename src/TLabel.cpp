/***************************************************************************
 *   Copyright (C) 2008-2011 by Heiko Koehn - KoehnHeiko@googlemail.com    *
 *   Copyright (C) 2014 by Ahmed Charles - acharles@outlook.com            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#include "TLabel.h"

#include "Host.h"
#include "TEvent.h"

#include "pre_guard.h"
#include <QtEvents>
#include "post_guard.h"


TLabel::TLabel( QWidget * pW )
: QLabel( pW )
, mpHost( 0 )
{
    setMouseTracking( true );
}

QString nothing = "";

void TLabel::mousePressEvent( QMouseEvent * event )
{
    if( event->button() == Qt::LeftButton )
    {
        if( mpHost )
        {
            mpHost->getLuaInterpreter()->callEventHandler( mScript, mpParameters );
        }
        event->accept();
        return;
    }

    QWidget::mousePressEvent( event );
}

void TLabel::leaveEvent( QEvent * event )
{
    if (mLeave != ""){
        if( mpHost )
        {
            mpHost->getLuaInterpreter()->callEventHandler( mLeave, mLeaveParams );
        }
        event->accept();
        return;
    }
    QWidget::leaveEvent( event );
}

void TLabel::enterEvent( QEvent * event )
{
    if (mEnter != ""){
        if( mpHost )
        {
            mpHost->getLuaInterpreter()->callEventHandler( mEnter, mEnterParams );
        }
        event->accept();
        return;
    }
    QWidget::enterEvent( event );
}
