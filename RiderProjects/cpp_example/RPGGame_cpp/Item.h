﻿#pragma once

// Item
// - Weapon 
// - Armor
// - Consumable

enum ItemRarity
{
    IR_None,
    IR_Normal,
    IR_Rare,
    IR_Unique
};

class Item
{
public:
    Item();
    virtual ~Item();

    virtual void PrintInfo();
    
protected:
    int _itemId = 0;
    int _itemCount = 0;
    ItemRarity _rarity = IR_Normal;
};

class Weapon : public Item
{
public:
    Weapon();
    virtual ~Weapon();

    void SetDamage(int damage) {_damage = _damage;}
    int GetDamage() {return _damage;}
    virtual void PrintInfo() override;
private:
    int _damage = 0;
};

class Armor : public Item
{
public:
    Armor();
    virtual ~Armor();

    void SetDefence(int defence) {_defence = defence;}
    int GetDefence() {return _defence;}
    virtual void PrintInfo() override;
private:
    int _defence = 0;
    
};

// Q1 : 부모 클래스의 소멸자에 virtual 키워드가 없으면 무슨 문제가 있는가?

// Q2 : Class Armor : Item vs Class Armor : public Item의 차이는 무엇인가?

// Q3 : 자식 클래스 Weapon의 _damage 정보를 Item 타입 변수에서 접근하려면 어떻게 해야 할까?
// 가상함수로 만든다. virtual, override
// 캐스팅