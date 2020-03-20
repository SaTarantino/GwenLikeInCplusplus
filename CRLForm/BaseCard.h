#pragma once

//Base pure virtual class for the Cards object.
ref class BaseCard
{
public:
	BaseCard();

	virtual void setDetail(int *cardType, int *cardPower) = 0;
	virtual void setCardPower() = 0;
	
	//virtual void cardEffect() = 0;

	virtual int getCardType(int) = 0;
};
