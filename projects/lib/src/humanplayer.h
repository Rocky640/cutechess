/*
    This file is part of Cute Chess.

    Cute Chess is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Cute Chess is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Cute Chess.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "chessplayer.h"
namespace Chess { class GenericMove; }


class LIB_EXPORT HumanPlayer : public ChessPlayer
{
	Q_OBJECT

	public:
		HumanPlayer(QObject* parent = 0);

		// Inherted from ChessPlayer
		virtual void endGame(const Chess::Result& result);
		virtual void makeMove(const Chess::Move& move);
		virtual bool supportsVariant(const QString& variant) const;
		virtual bool isHuman() const;
		
	protected:
		// Inherited from ChessPlayer
		virtual void startGame();
		virtual void startThinking();

	public slots:
		void onHumanMove(const Chess::GenericMove& move,
				 const Chess::Side& side);
};

#endif // HUMANPLAYER_H
