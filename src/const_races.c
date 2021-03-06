/***********************************************************************
 *                                                                     *
 * Original Diku Mud copyright (C) 1990, 1991 by Sebastian Hammer,     *
 * Michael Seifert, Hans-Henrik St熠eldt, Tom Madsen and Katja Nyboe   *
 *                                                                     *
 * Merc Diku Mud improvements copyright (C) 1992, 1993 by              *
 * Michael Chastain, Michael Quan, and Mitchell Tse                    *
 *                                                                     *
 *   ROM 2.4 is copyright 1993-1998 Russ Taylor                        *
 *        Russ Taylor (rtaylor@hypercube.org)                          *
 *        Gabrielle Taylor (gtaylor@hypercube.org)                     *
 *        Brian Moore (zump@rom.org)                                   *
 *   By using this code, you have agreed to follow the terms of the    *
 *   ROM license, in the file Rom24/doc/rom.license                    *
 *                                                                     *
 ***********************************************************************
 *                                                                     *
 * KILLER MUD is copyright 1999-2011 Killer MUD Staff (alphabetical)   *
 *                                                                     *
 * Andrzejczak Dominik   (kainti@go2.pl                 ) [Kainti    ] *
 * Jaron Krzysztof       (chris.jaron@gmail.com         ) [Razor     ] *
 * Koper Tadeusz         (garloop@killer-mud.net        ) [Garloop   ] *
 * Pietrzak Marcin       (marcin.pietrzak@mud.pl        ) [Gurthg    ] *
 * Sawicki Tomasz        (furgas@killer-mud.net         ) [Furgas    ] *
 * Trebicki Marek        (maro@killer.radom.net         ) [Maro      ] *
 * Zdziech Tomasz        (t.zdziech@elka.pw.edu.pl      ) [Agron     ] *
 *                                                                     *
 ***********************************************************************
 *
 * $Id: const_races.c 10701 2011-12-02 16:03:39Z illi $
 * $HeadURL: http://svn.iworks.pl/svn/clients/illi/killer/trunk/src/const_races.c $
 *
 */
#if defined(macintosh)
#include <types.h>
#else
#include <sys/types.h>
#endif
#include <stdio.h>
#include <time.h>
#include "merc.h"
#include "magic.h"
#include "interp.h"
#include "lang.h"
#include "music.h"

const struct race_type race_table [] =
{
    /*
       {
       name, pc_race?,
       act bits, aff_by bits, off bits,
       form, parts
       minlevel, maxlevel
       },
     */
    {
        "unique", "unique", "unique", "unique", "unique", "unique",  // name2", "name3", "name4", "name5", "name6
        FALSE,                                                       // pc_race
        "",                                                          // act bits
        100,                                                         // skin multiplier
        "",                                                          // affected_by bits
        "",                                                          // off
        0,                                                           // form
        0,                                                           // parts
        0,                                                           // ANIMAL|PERSON|MONSTER|OUTSIDER
        {"","",""},                                                  // move in
        {"","",""},                                                  // move out
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0},                      // resists
        0,                                                           // wear
        0,                                                           // min level
        40,                                                          // max level
        "m闚i",                                                      // text to be displayed instead of "m闚i"
        "pyta"                                                       // text to be displayed instead of "pyta"
        "M闚isz",                                                    // text to be displayed instead of "M闚isz", first letter should be capital
    },
    /*
       RESIST_ALL           0
       RESIST_PIERCE        1
       RESIST_SLASH         2
       RESIST_BASH          3
       RESIST_MAGIC         4
       RESIST_FIRE          5
       RESIST_MAGIC_FIRE    6
       RESIST_ELECTRICITY   7
       RESIST_COLD          8
       RESIST_ACID          9
       RESIST_POISON       10
       RESIST_MAGIC_WEAPON 11
       RESIST_CHARM        12
       RESIST_FEAR         13
       RESIST_SUMMON       14
       RESIST_NEGATIVE     15
       RESIST_MENTAL       16
       RESIST_HOLY         17
       RESIST_SOUND        18
     */

    {
        "cz這wiek", "cz這wieka", "cz這wiekowi", "cz這wieka", "cz這wiekiem", "cz這wieku",
            TRUE,  "", 100,
            "", "", A|H|M|V|F,
            A|B|C|D|E|F|G|H|I|J|K|R,PERSON|MONSTER,
            {"przysz這","przyszed�","przysz豉"},
            {"odchodzi","odchodzi","odchodzi"},
            {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
            0, 40,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "elf", "elfa", "elfowi", "elfa", "elfem", "elfie",
        TRUE, "", 100,
        "infrared", "",  A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R,PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "nuci",
        "nuci",
        "Nucisz"
    },

    {
        "krasnolud", "krasnoluda", "krasnoludowi", "krasnoluda", "krasnoludem", "krasnoludzie",
        TRUE, "", 100,
        "infrared", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "dudni",
        "dudni",
        "Dudnisz"
    },

    {
        "gnom", "gnoma", "gnomowi", "gnoma", "gnomem", "gnomie",
        TRUE, "", 100,
        "infrared", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "p馧elf", "p馧elfa", "p馧elfowi", "p馧elfa", "p馧elfem", "p馧elfie",
        TRUE, "", 100,
        "infrared", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "nizio貫k", "nizio趾a", "nizio這wi", "nizio趾a", "nizio趾iem", "nizio趾u",
        TRUE, "", 100,
        "infrared", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "p馧ork", "p馧orka", "p馧orkowi", "p馧orka", "p馧orkiem", "p馧orku",
        TRUE,  "", 100,
        "infrared", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "gigant", "giganta", "gigantowi", "giganta", "gigantem", "gigancie",
        FALSE, "", 100,
        "",  "kick", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        8, 40,
        "grzmi",
        "pyta",
        "Grzmisz"
    },

    {
        "nietoperz", "nietoperza", "nietoperzowi", "nietoperza", "nietoperzem", "nietoperzu",
        FALSE, "", 20,
        "detect_hidden flying dark_vision", "dodge", A|G|V|F,
        A|C|D|E|F|H|J|K|P|R|S, ANIMAL|MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        0, 2,
        "piszczy",
        "piszczy",
        "Piszczysz"
    },

    {
        "nied德ied�", "nied德iedzia", "nied德iedziowi", "nied德iedzia", "nied德iedziem", "nied德iedziu",
        FALSE, "", 100,
        "dark_vision", "berserk", A|G|V|F,
        A|B|C|D|E|F|H|J|K|U|V|R|S, ANIMAL|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        6, 12,
        "warczy",
        "warczy",
        "Warczysz"
    },

    {
        "kot", "kota", "kotu", "kota", "kotem", "kocie",
        FALSE, "", 70,
        "detect_hidden dark_vision sneak", "dodge", A|G|V|F,
        A|C|D|E|F|H|J|K|Q|U|V|R|S, ANIMAL|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        0, 2,
        "miauczy",
        "miauczy",
        "Miauczysz"
    },

    {
        "stonoga", "stonogi", "stonodze", "stonog�", "stonog�", "stonodze",
        FALSE, "", 100,
        "dark_vision",  "",  A|B|G|O,
        A|C|K, MONSTER|INSECT,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "pies", "psa", "psu", "psa", "psem", "psie",
        FALSE, "", 70,
        "detect_hidden dark_vision",  "", A|G|V|F,
        A|C|D|E|F|H|J|K|U|V|R|S, ANIMAL|MONSTER,
        {"przybiegl","przybiegl","przybiegla"},
        {"biegnie","biegnie","biegnie"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        0, 3,
        "szczeka",
        "szczeka",
        "Szczekasz"
    },

    {
        "ghast", "ghasta", "ghastowi", "ghasta", "ghastem", "ghascie",
        FALSE, "undead", 100,
        "", "assist_race",
        I|M|F,  A|B|C|F|G|H|I|J|K|R,  UNDEAD|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        6, 9,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "smok", "smoka", "smokowi", "smoka", "smokiem", "smoku",
        FALSE, "mage warrior", 300,
        "infrared flying detect_invis", "assist_race", A|H|Z,
        A|C|D|E|F|G|H|I|J|K|P|Q|U|V|X|R|S, MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_NECK,
        11, 32,
        "ryczy",
        "pyta",
        "M闚isz"
    },

    {
        "fido", "fida", "fidu", "fida", "fidem", "fidzie",
        FALSE, "", 100,
        "",  "dodge assist_race", A|B|G|V|F,
        A|C|D|E|F|H|J|K|Q|S|V, MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "lis", "lisa", "lisowi", "lisa", "lisem", "lisie",
        FALSE, "", 100,
        "dark_vision", "", A|G|V|F,
        A|C|D|E|F|H|J|K|Q|V|R|S, ANIMAL|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        0, 2,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "zwierze", "zwierz璚ia", "zwierz璚iu", "zwierz�", "zwierz璚iem", "zwierz璚iu",
        FALSE, "", 100,
        "dark_vision detect_hidden", "", A|G|V|F,
        A|C|D|E|F|H|J|K|Q|V|R|S, ANIMAL|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "goblin", "goblina", "goblinowi", "goblina", "goblinem", "goblinie",
        FALSE, "", 100,
        "infrared", "assist_race", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        2, 4,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "hobgoblin", "hobgoblina", "hobgoblinowi", "hobgoblina", "hobgoblinem", "hobgoblinie",
        FALSE, "", 100,
        "infrared", "assist_race", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|Y|R, PERSON|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_EAR|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        3, 6,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "kobold", "kobolda", "koboldowi", "kobolda", "koboldem", "koboldzie",
        FALSE, "", 100,
        "infrared", "assist_race", A|B|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_EAR|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        2, 4,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "gad", "gada", "gadowi", "gada", "gadem", "gadzie",
        FALSE, "", 20,
        "detect_hidden",  "", A|G|X|cc,
        A|C|D|E|F|H|K|Q|V|R|S, ANIMAL|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "modron", "modrona", "modronowi", "modrona", "modronem", "modronie",
        FALSE, "", 100,
        "infrared", "assist_race assist_align", H,
        A|B|C|G|H|J|K|R, UNKNOWN,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "ork", "orka", "orkowi", "orka", "orkiem", "orku",
        FALSE, "", 100,
        "infrared", "assist_race", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_EAR|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        2, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "鈍inia", "鈍ini", "鈍ini", "鈍ini�", "鈍ini�", "鈍ini",
        FALSE, "", 70,
        "",  "", A|G|V|F,
        A|C|D|E|F|H|J|K|R|S, ANIMAL|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        0, 3,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "zaj帷", "zaj帷a", "zaj帷u", "zaj帷a", "zaj帷em", "zaj帷u",
        FALSE, "", 70,
        "detect_hidden",  "", A|G|V|F,
        A|C|D|E|F|H|J|K|R|S, ANIMAL|MONSTER,
        {"przykica這","przykica�","przykica豉"},
        {"odkica這","odkica�","odkica豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        0, 2,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "ettin", "ettina", "ettinowi", "ettina", "ettinem", "ettinie",
        FALSE, "", 100,
        "", "assist_race kick bash",
        A|E|M|V|F, A|B|C|D|E|F|G|H|I|J|K|U|V|R, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            10, 20,
            "grzmi",
            "pyta",
            "Grzmisz"
    },

    {
        "w捫", "w篹a", "w篹owi", "w篹a", "w篹em", "w篹u",
        FALSE, "", 120,
        "detect_hidden",  "", A|G|X|Y|cc,
        A|D|E|F|K|L|Q|V|X|R|S, ANIMAL|MONSTER,
        {"przypelz這","przype透�","przype透豉"},
        {"odpe透這","odpe透�","odpe透豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 15,
        "syczy",
        "syczy",
        "Syczysz"
    },

    {
        "ptak", "ptaka", "ptaka", "ptaka", "ptakiem", "ptaku",
        FALSE, "", 20,
        "flying detect_hidden", "", A|G|W|F,
        A|C|D|E|F|H|K|P|R|S|T, ANIMAL|MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 12,
        "酥iewa",
        "酥iewa",
        "如iewasz"
    },

    {
        "ptak 酥iewaj帷y", "ptaka 酥iewaj帷ego", "ptaka 酥iewaj帷ego", "ptaka 酥iewaj帷ego", "ptakiem 酥iewaj帷ym", "ptaku 酥iewaj帷ym",
        FALSE, "", 20,
        "flying", "", A|G|W|F,
        A|C|D|E|F|H|K|P|R|S|T, ANIMAL,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 5,
        "酥iewa",
        "酥iewa",
        "如iewasz"
    },

    {
        "troll", "trolla", "trollowi", "trolla", "trollem", "trollu",
        FALSE, "", 100,
        "troll_power regeneration infrared", "assist_race", A|B|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|U|V|R, MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_EAR|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        6, 19,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "duergar", "duergara", "duergarowi", "duergara", "duergarem", "duergarze",
        TRUE, "", 100,
        "infrared", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,10, 0,0,0,0,0, 0,0,0,0,0, 0,0,}, //resist magic 10%
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "dudni",
        "dudni",
        "Dudnisz"
    },

    {
        "wilk", "wilka", "wilkowi", "wilka", "wilkiem", "wilku",
        FALSE, "", 100,
        "dark_vision detect_hidden", "assist_race", A|G|V|F,
        A|C|D|E|F|J|K|Q|V|R|S, ANIMAL|MONSTER,
        {"przybieg這","przybieg�","przybieg豉"},
        {"odbieg這","odbieg�","odbieg豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        5, 10,
        "warczy",
        "warczy",
        "Warczysz"
    },

    {
        "wywerna", "wywerny", "wywernie", "wywern�", "wywern�", "wywernie",
        FALSE, "", 250,
        "flying detect_invis detect_hidden", "", A|B|G|Z|F,
        A|C|D|E|F|H|J|K|Q|V|X|R|S, MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        10, 12
    },


    {
        "d磨n", "d磨na", "d磨nowi", "d磨na", "d磨nem", "d磨nie",
        FALSE, "", 100,
        "flying", "", C|F,
        A|B|C|D|G|H|I|J|K, MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        13, 33,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "duch", "ducha", "duchowi", "ducha", "duchem", "duchu",
        FALSE, "undead", 100,
        "pass_door flying",  "", I|L,
        A|B|C|G|H|I, UNDEAD|OUTSIDER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_FLOAT|ITEM_WIELD|ITEM_WIELDSECOND,
        0, 18,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "zombi", "zombi", "zombi", "zombi", "zombi", "zombi",
        FALSE, "undead", 100,
        "",  "", A|B|I|cc,
        A|B|C|G|H|I|R, UNDEAD,
        {"","",""},
        {"","",""},
        {0,10,10,10,0, 0,0,0,0,0, 0,0,0,0,0, 0,0},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_EAR|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        4, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "ankheg", "ankhega", "ankhegowi", "ankhega", "ankhegiem", "ankhegu",
        FALSE, "", 100,
        "", "assist_race", O|R,
        A|B|D|E|F|J|K|Q|U|X, ANIMAL|MONSTER|INSECT,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        6, 10
    },

    {
        "svirneblin", "svirneblina", "svirneblinowi", "svirneblina", "svirneblinem", "svirneblinie",
        TRUE, "", 100,
        "infrared", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|ITEM_WEAR_EAR|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "baatezu", "baatezu", "baatezu", "baatezu", "baatezu", "baatezu",
        FALSE, "mage warrior", 100,
        "free_action regeneration infrared detect_magic", "", C|D|E|M,
        A|B|C|D|E|F|H|J|K|P|Q|U|V|W|X, MONSTER|DEMON|OUTSIDER,
        {"przybylo","przybyl","przybyla"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,100,0,0, 0,0}, //immune charm,sleep
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        26, 37,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "banshee", "banshee", "banshee", "banshee", "banshee", "banshee",
        FALSE, "undead", 100,
        "pass_door detect_invis detect_hidden infrared", "", C|I|K|M,
        A|B|C|G|H|I|J|K, UNDEAD|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,100,0, 0,1,100,0,0, 0,0,}, //immune charm,cold,sleep,non_magic_weapon
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        13, 15,
        "zawodzi",
        "pyta",
        "Zawodzisz"
    },

    {
        "bazyliszek", "bazyliszka", "bazyliszkowi", "bazyliszka", "bazyliszkiem", "bazyliszku",
        FALSE, "", 200,
        "infrared", "assist_race", G|X,
        A|C|D|E|F|H|J|K|Q|U|R|S, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,100,0,0, 0,0,},
        ITEM_WEAR_NECK,
        10, 19,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "wypatrywacz", "wypatrywacza", "wypatrywaczowi", "wypatrywacza", "wypatrywaczem", "wypatrywaczu",
        FALSE, "mage", 200,
        "regeneration detect_hidden detect_invis", "", C|E,
        A|F|J|K|M|N|S,  MONSTER,
        {"przybylo","przybyl","przybyla"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,20, 0,0,0,0,0,0 ,2,0,0,0, 0,50,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        7, 30,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "centaur", "centaura", "centaurowi", "centaura", "centaurem", "centaurze",
        FALSE, "", 100,
        "", "kick assist_race", A|H|N|V|F,
        A|B|C|D|E|F|G|I|J|K|Q|R, ANIMAL|PERSON,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|
            ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_WAIST|
            ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        6, 11,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "chimera", "chimery", "chimerze", "chimer�", "chimer�", "chimerze",
        FALSE, "", 170,
        "infrared detect_hidden detect_magic", "",
        G|R|W,  A|B|C|D|E|F|J|K|P|Q|U|V|W|X|R|S, ANIMAL|MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        15, 17,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "kuroliszek", "kuroliszka", "kuroliszkowi", "kuroliszka", "kuroliszkiem", "kuroliszku",
        FALSE, "", 100,
        "", "",
        A|G|W|F, A|D|E|F|H|J|K|P|Q|U|R|S,  ANIMAL|MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 100,75,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        9, 11,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "krokodyl", "krokodyla", "krokodylowi", "krokodyla", "krokodylem", "krokodylu",
        FALSE, "", 150,
        "", "assist_race",
        A|G|X,  A|B|C|D|F|H|J|K|Q|U|R|S,  ANIMAL,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        4, 7,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "krokodyl olbrzymi", "krokodyla olbrzymiego", "krokodylowi olbrzymiemu", "krokodyla olbrzymiego", "krokodylem olbrzymim", "krokodylu olbrzymim",
        FALSE, "", 180,
        "", "assist_race",
        A|G|X,  A|B|C|D|F|H|J|K|Q|U|R|S,  ANIMAL,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        10, 12,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "skorupiak olbrzymi", "skorupiaka olbrzymiego", "skorupiakowi olbrzymiemu", "skorupiaka olbrzymiego", "skorupiakiem olbrzymim", "skorupiaku olbrzymim",
        FALSE, "", 100,
        "", "",
        M|Q|V,  A|B|C|D|G|H|I|J|M,  ANIMAL|MONSTER|INSECT,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        5, 7,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "kryptowiec", "kryptowca", "kryptowcowi", "kryptowca", "kryptowcem", "kryptowcu",
        FALSE, "undead warrior", 100,
        "infrared", "",
        E|M|X,  A|B|C|G|H|I|J|K|Q|U,  UNDEAD|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,100,0, 0,0,100,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_EAR|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        10, 11,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "upiorny rycerz", "upiornego rycerza", "upiornemu rycerzowi", "upiornego rycerza", "upiornym rycerzem", "upiornym rycerzu",
        FALSE, "undead black_knight", 100,
        "", "",
        E|M|V, A|B|C|D|E|F|G|H|I|J|K,  UNDEAD,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,75, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 75%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_EAR|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            18, 27,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "mykonid", "mykonida", "mykonidowi", "mykonida", "mykonidem", "mykonidzie",
        FALSE, "", 100,
        "", "",
        A|E|M|dd, A|K|R|B|C|D|E|F|G|H|I,    PLANT|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_SHIELD|ITEM_WIELD|ITEM_HOLD|
            ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        6, 12,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "przemieszczacz", "przemieszczacza", "przemieszczaczowi", "przemieszczacza", "przemieszczaczem", "przemieszczaczu",
        FALSE, "", 200,
        "detect_magic blink", "",
        A|G,  A|B|C|D|E|F|H|I|J|K|N|Q|U|V, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,} ,
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        11, 16,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "delfin", "delfina", "delfinowi", "delfina", "delfinem", "delfinie",
        FALSE, "", 150,
        "", "assist_race assist_align",
        A|H|V|bb|F,  A|D|F|J|K|O|Q|R|S,  ANIMAL,
        {"przyplynelo","przyplynal","przyplynela"},
        {"odplynelo","odplynal","odplynela"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        4, 5,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "sobowt鏎", "sobowt鏎a", "sobowt鏎owi", "sobowt鏎a", "sobowt鏎em", "sobowt鏎e",
        FALSE, "", 100,
        "", "assist_race",
        C|E|M|V|F,  A|B|C|D|E|F|D|H|I|J|K|R, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,100,0,0, 0,0,} //immune sleep, charm
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            7, 9,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "drakolicz", "drakolicza", "drakoliczowi", "drakolicza", "drakoliczem", "drakoliczu",
        FALSE, "undead", 100,
        "detect_magic", "assist_race",
        I|Z,  A|B|C|F|G|H|I|J|K|P|V,  MONSTER|UNDEAD,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,100,100,0, 0,0,100,0,0, 0,0,} //imm charm,sleep,polymorph,cold,electricity,hold,insanity,death_spells
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            13, 33,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "pseudosmok", "pseudosmoka", "pseudosmokowi", "pseudosmoka", "pseudosmokiem", "pseudosmoku",
        FALSE, "", 150,
        "", "",
        Z,  A|B|C|D|E|F|H|I|J|K|P|Q|U|X|R|S, MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,35, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 35%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            0, 10,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "drow", "drowa", "drowu", "drowa", "drowem", "drowie",
        FALSE, "", 100,
        "infrared detect_hidden", "",
        A|H|M|V|F, A|B|C|D|E|F|G|H|I|J|K|L|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,15, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 15%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            0, 40,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "driada", "driady", "driadzie", "driady", "driad�", "driadzie",
        FALSE, "druid", 100,
        "hide sneak detect_hidden", "assist_race",
        E|M|F,  A|B|C|G|H|I|J|K|R,  MONSTER|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,50, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 50%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            9, 11,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "篡wio�", "篡wio逝", "篡wio這wi", "篡wio�", "篡wio貫m", "篡wiole",
        FALSE, "", 100,
        "", "",
        C|E|M,  A|B|C|G|H|I|J|K,  MONSTER|OUTSIDER,
        {"przybylo","przybyl","przybyla"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        12, 38,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "s這�", "s這nia", "s這niowi", "s這nia", "s這niem", "s這niu",
        FALSE, "", 150,
        "", "bash",
        G|F,  A|C|D|E|F|H|J|K|R|S,  ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        11, 18,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "martwy wypatrywacz", " martwego wypatrywacza", "matrwemu wypatrywaczowi", "martwego wypatrywacza", "martwym wypatrywaczem", "martwym wypatrywaczu",
        FALSE, "mage undead", 200,
        "regeneration detect_hidden detect_invis", "", C|E|I,
        A|F|J|K|M|N,  MONSTER|UNDEAD,
        {"przybylo","przybyl","przybyla"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,20, 0,0,0,0,0,100 ,2,0,0,0, 0,100,}, //20% na magie, resist_weapon 2, charm 100%
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        7, 30,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "ryba", "ryby", "rybie", "ryb�", "ryb�", "rybie",
        FALSE, "", 100,
        "", "",
        A|G|bb, A|D|F|O|Q|R|X,   ANIMAL|MONSTER,
        {"przyplynelo","przyplynal","przyplynela"},
        {"odplynelo","odplynal","odplynela"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 18
    },


    {
        "瘸ba", "瘸by", "瘸bie", "瘸b�", "瘸b�", "瘸bie",
        FALSE, "", 20,
        "", "",
        A|G,  A|C|D|F|G|H|I|J|K|L|R|S,  ANIMAL|MONSTER,
        {"przyskoczylo","przyskoczyl","przyskoczyla"},
        {"odskoczylo","odskoczyl","odskoczyla"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 7,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "grzyb", "grzyba", "grzybu", "grzyb", "grzybem", "grzybie",
        FALSE, "", 100,
        "", "",
        A|E|M|dd, A|K|R,    PLANT,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        5, 12,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "gargulec", "gargulca", "gargulcowi", "gargulca", "gargulcem", "gargulcu",
        FALSE, "", 100,
        "infrared", "assist_race",
        E|M,  A|R|N|D|E|F|G|H|I|J|K|P|Q|U|V|R, MONSTER,
        {"przybylo","przybyl","przybyla"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        8, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "ghul", "ghula", "ghulowi", "ghula", "ghulem", "ghulu",
        FALSE, "undead", 100,
        "", "assist_race",
        I|M|F,  A|B|C|F|G|H|I|J|K|R,  UNDEAD|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        6, 9,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "gith", "githa", "githowi", "githa", "githem", "githu",
        FALSE, "", 100,
        "infrared", "",
        A|M|V|X|F, A|B|C|D|E|F|G|H|I|J|K|U|R, PERSON|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        8, 20,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "githyanki", "githyanki", "githyanki", "githyanki", "githyanki", "githyanki",
        FALSE, "", 100,
        "infrared", "",
        A|M|V|F, A|B|C|D|E|F|G|H|I|J|K|R,  PERSON|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        8, 20,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "cie�", "cienia", "cieniu", "cienia", "cieniem", "cieniu",
        FALSE, "undead", 100,
        "hide pass_door", "",
        C|I|K,  A|B|C|G|H|I|J|K|U|V,  UNDEAD,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},  //imm sleep,charm,cold
        {0,0,0,0,0, 0,0,0,100,0, 0,0,100,0,0, 0,0,},
        ITEM_WEAR_FLOAT,
        7, 9,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "gnoll", "gnolla", "gnollowi", "gnolla", "gnollem", "gnollu",
        FALSE, "", 100,
        "", "assist_race",
        A|G|M|V|F, A|B|C|D|E|F|G|H|I|J|K|Q|U|V|R, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        3, 8,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "golem", "golema", "golemowi", "golema", "golemem", "golemie",
        FALSE, "", 100,
        "", "crush",   //zalezy od rodzaju golema
        C|E|M|J, A|B|C|G|H|I|J|K,  MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //w zaleznosci od rodzaju golemow rozne
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WEAR_FLOAT,
            7, 26,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "gremlin", "gremlina", "gremlinowi", "gremlina", "gremlinem", "gremlinie",
        FALSE, "", 110,
        "", "",
        A|G|M|V|F, A|B|C|D|E|F|G|H|I|J|K|R|S, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        2, 9,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "gryf", "gryfa", "gryfowi", "gryfa", "gryfem", "gryfie",
        FALSE, "", 170,
        "detect_hidden flying", "",
        A|G|V|W|F, A|B|C|D|E|F|D|H|I|J|K|P|Q|U|V|R|S|T, ANIMAL|MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_WEAR_EAR|ITEM_WEAR_NECK|ITEM_WEAR_FLOAT,
            9, 11,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "slaad", "slaada", "slaadowi", "slaada", "slaadem", "slaadzie",
        FALSE, "", 100,
        "infrared",
        "assist_race",
        C, //forms
        A|B|C|D|E|F|G|H|I|J|K|Q|U|V|R, // parts
        DEMON|MONSTER|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        14, 20,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "harpia", "harpii", "harpii", "harpi�", "harpi�", "harpii",
        FALSE, "", 150,
        "", "",
        A|G|M|V|W|F, A|B|C|D|E|F|G|H|I|J|K|P|Q|U|V|R|S, ANIMAL|MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|
            ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|ITEM_WEAR_WAIST|ITEM_WIELD|ITEM_HOLD|
            ITEM_WEAR_EAR|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        10, 12,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "piekielny ogar", "piekielnego ogara", "piekielnemu ogarowi", "piekielnego ogara", "piekielnym ogarem", "piekielnym ogarze",
        FALSE, "", 130,
        "detect_magic detect_hidden", "",
        C|G|V|F, A|C|D|E|F|H|I|J|K|Q|U|V|R|S, ANIMAL|MONSTER|DEMON|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,10, 75,25,0,0,0, 0,0,0,0,0, 0,0,} //magic 10%
        ,
            ITEM_WEAR_EAR|ITEM_WEAR_NECK,
            8, 12,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "hydra", "hydry", "hydrze", "hydr�", "hydr�", "hydrze",
        FALSE, "", 150,
        "", "",
        C|G|R,  A|C|D|F|H|I|J|K|Q|U|V|S,  MONSTER,
        {"przypelz這","przype透�","przype透豉"},
        {"odpe透這","odpe透�","odpe透豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK|ITEM_WEAR_HEAD,
        17, 21,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "imp", "impa", "impowi", "impa", "impem", "impie",
        FALSE, "", 100,
        "detect_good detect_magic", "",
        A|M|V,  A|B|C|D|E|F|G|H|I|J|K,  ANIMAL|MONSTER|DEMON|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,25, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 25%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            7, 9,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "niewidzialny my郵iwy", "niewidzialnego my郵iwego", "niewidzialnemu my郵iwemu", "niewidzialnego my郵iwgo", "niewidzialnym my郵iwym", "niewidzialnym my郵iwym",
        FALSE, "", 100,
        "invisible detect_invis", "",
        C|E|K|M, A|B|C|G|H|I|J|K|Q|U|V,  MONSTER|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,1,0,0,0, 0,0,} //non_magic_weapon
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            12, 14,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "ro郵ina", "ro郵inie", "ro郵iny", "ro郵in�", "ro郵in�", "ro郵inie",
        FALSE, "", 100,
        "", "",
        A|aa,  V|X|Y|Z, PLANT,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        3, 25,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "thri-kreen", "thri-kreena", "thri-kreenowii", "thri-kreena", "thri-kreenem", "thri-kreenie",
        FALSE, "", 100,
        "", "",
        O|P,  A|B|C|D|E|F|G|I|K, INSECT|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, -10,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_HANDS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        5, 20,
        "wydaje d德i瘯",
        "pyta",
        "Wydajesz d德i瘯"
    },

    {
        "leprechaun", "leprechauna", "leprechaunowi", "leprechauna", "leprechaunem", "leprechaunie",
        FALSE, "", 100,
        "", "",
        E|M|V|F, A|B|C|D|E|D|H|I|J|K|P|R,  PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        5, 7,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "licz", "licza", "liczu", "licza", "liczem", "liczu",
        FALSE, "undead", 100,
        "", "",
        C|I|M,  A|B|C|G|H|I|J|K,   UNDEAD,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,100,100,0, 0,4,100,0,0, 0,0,} //imm charm, cold, sleep, polymorph, electricity, insanity, death_spells, magic_weapon_<_4
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            18, 21,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "篡j帷a 軼iana", "篡j帷ej 軼iany", "篡j帷ej 軼ianie", "篡j帷� 軼ian�", "篡j帷� 軼ian�", "篡j帷ej 軼ianie",
        FALSE, "", 100,
        "", "",
        C/*|dd*/,  A|B|K|J,   PLANT,
        {"","",""},
        {"","",""},
        {0,0,0,0,20, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 20%
        ,
            0,
            12, 38,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "jaszczurocz這wiek", "jaszczurocz這wieka", "jaszczurocz這wiekowi", "jaszczurocz這wieka", "jaszczurocz這wiekiem", "jaszczurocz這wieku",
        FALSE, "", 100,
        "infrared", "",
        A|M|V|X, A|B|C|D|E|F|G|H|I|J|K|Q|U|V|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_EAR|ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            4, 10,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "zwisak", "zwisaka", "zwisakowi", "zwisaka", "zwisakiem", "zwisaku",
        FALSE, "", 130,
        "", "",
        G|P,  A|C|D|F|H|K|S,   ANIMAL|MONSTER|INSECT,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            11, 13,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "likantrop", "likantropa", "likantropowi", "likantropa", "likantropem", "likantropie",
        FALSE, "", 100,
        "", "",
        A|G|J|M|V|bb|F, A|B|C|D|E|F|G|H|I|J|K|Q|V|R, MONSTER,
        {"przybylo","przybyl","przybyla"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            7, 12,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "mantykora", "mantykory", "mantykorze", "mantykor�", "mantykor�", "mantykorze",
        FALSE, "", 150,
        "", "",
        A|G|J|V|F, A|B|C|D|E|F|G|H|I|J|K|P|Q|U|V|R|S, MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_WEAR_NECK,
            9, 12,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "meduza", "meduzy", "meduzie", "meduz�", "meduz�", "meduzie",
        FALSE, "", 150,
        "", "",
        E|M|V,  A|R|C|D|E|F|G|H|I|J|K|N, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_WEAR_EAR|ITEM_WEAR_NECK,
            4, 15,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "mimik", "mimika", "mimikowi", "mimika", "mimikiem", "mimiku",
        FALSE, "", 100,
        "hide", "",
        C|G|W,  A|C|D|E|F|H|J|K|P|U,  ANIMAL|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            10, 13,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "illithid", "illithida", "illithidowi", "illithida", "illithidem", "illithidzie",
        FALSE, "mage", 100,
        "infrared", "",
        E|M|V|Z, A|B|C|D|E|F|G|H|I|J|K,  PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,90, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 90%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            13, 17,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "minotaur", "minotaura", "minotaurowi", "minotaura", "minotaurem", "minotaurze",
        FALSE, "warrior", 150,
        "", "bash",
        A|M|V|F, A|B|C|D|E|F|G|H|I|J|K|W|R|S, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            11, 20,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "b這tny cz這wiek", "b這tnego cz這wieka", "b這tnemu cz這wiekowi", "b這tnego cz這wieka", "b這tnym cz這wiekiem", "b這tnym cz這wieku",
        FALSE, "", 100,
        "", "",
        E|M,  A|B|C|G|H|I|K|N,  PERSON|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 100,0,100,0,0, 0,0,} //imm poison,hold,charm,sleep
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            6, 12,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "mumia", "mumii", "mumi�", "mumi�", "mumi�", "mumii",
        FALSE, "undead", 100,
        "", "",
        C|I|M|J, A|B|C|G|H|I|J|K,  UNDEAD,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,100,0, 0,0,100,0,0, 0,0,} //imm sleep,charm,hold,cold
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            12, 18
    },

    {
        "mumia wi瘯sza", "mumii wi瘯szej", "mumi� wi瘯sz�", "mumi� wi瘯sz�", "mumi� wi瘯sz�", "mumii wi瘯szej",
        FALSE, "undead", 100,
        "", "",
        C|I|M|J, A|B|C|G|H|I|J|K,  UNDEAD,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,100,0, 0,0,100,0,0, 0,0,} //imm sleep,charm,hold,cold
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            18, 25,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "naga", "nagi", "nag�", "nag�", "nag�", "nadze",
        FALSE, "", 150,
        "infrared", "",
        A|J|M|V|Y, A|B|C|D|E|F|G|H|I|J|K|Q|U|R|S, MONSTER|OUTSIDER,
        {"przypelz這","przype透�","przype透豉"},
        {"odpe透這","odpe透�","odpe透豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|
                ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            13, 17,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "ogr", "ogra", "ogrowi", "ogra", "ogrem", "ogrze",
        FALSE, "", 100,
        "", "assist_race kick bash",
        A|E|M|V|F, A|B|C|D|E|F|G|H|I|J|K|U|V|R, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            10, 20,
            "grzmi",
            "pyta",
            "Grzmisz"
    },

    /*szlam,sluz,galareta*/
    {
        "ooze", "ooze", "ooze", "ooze", "ooze", "ooze",
        FALSE, "", 100,
        "water_breath", "",
        C|E|S,  B|C|K|N,   UNKNOWN,
        {"","",""},
        {"","",""},
        {0,70,100,50,5, 0,0,0,0,0, 0,1,0,0,0, 0,0,} //magic 5%, imm slash, pierce(70%), bash (50%), non_magic_weapon
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            0, 40,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "sowinied德ied�", "sowinied德iedzia", "sowinied德iedziowi", "sowinied德iedzia", "sowinied德iedziem", "sowinied德iedziu",
        FALSE, "", 150,
        "", "",
        A|C|G|J|V|W|F, A|C|D|E|F|H|I|J|K|P|Q|U|V|R|S|T, ANIMAL|MONSTER,
        {"przybieg這","przybieg�","przybieg豉"},
        {"odbieg這","odbieg�","odbieg豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_WEAR_NECK,
            7, 9,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "pegaz", "pegaza", "pegazowi", "pegaza", "pegazem", "pegazie",
        FALSE, "mountable", 200,
        "detect_good detect_evil flying", "assist_race",
        A|C|G|J|V|W|F, A|C|D|E|F|J|K|P|Q|R|S|T,  ANIMAL|MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,10, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 10%
        ,
            ITEM_WEAR_EAR|ITEM_WEAR_NECK,
            8, 10,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "feniks", "feniksa", "feniksowi", "feniksa", "feniksem", "feniksie",
        FALSE, "", 100,
        "detect_evil detect_magic protect_evil flying", "",
        C|W|F,  A|C|D|E|F|H|J|K|P|Q|U|R|T,  MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,50, 100,100,0,0,0, 0,3,0,0,0, 0,0,} //magic_weapon(+3 to hit), magic 50%, imm fire i magic fire
        ,
            ITEM_WEAR_NECK,
            25, 27,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "rakszasza", "rakszaszy", "rakszasz�", "rakszasz�", "rakszasz�", "rakszaszie",
        FALSE, "", 100,
        "", "",
        C|M|V|Y|F, A|B|C|D|E|F|G|H|I|J|K|Q|U|R, MONSTER|DEMON|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,1,0,0,0, 0,0,} //non_magic_weapon
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            13, 21,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "rdzawnik", "rdzawnika", "rdzawnikowi", "rdzawnika", "rdzawnikiem", "rdzawniku",
        FALSE, "", 100,
        "", "",
        C|G|O,  A|C|D|K,   ANIMAL|MONSTER,
        {"przypelz這","przype透�","przype透豉"},
        {"odpe透這","odpe透�","odpe透豉"},
        {0,30,30,30,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //hard_body -> resist normal damage 30%
        ,
            ITEM_WEAR_NECK,
            5, 7,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "sahuagin", "sahuagina", "sahuaginowi", "sahuagina", "sahuaginem", "sahuaginie",
        FALSE, "", 100,
        "water_breath", "",
        A|M|V|bb|F, A|B|C|D|E|F|G|H|I|J|K|O|Q|U|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            6, 13,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "satyr", "satyra", "satyrowi", "satyra", "satyrem", "satyrze",
        FALSE, "", 100,
        "", "",
        A|J|M|V|F, A|B|C|D|E|F|G|I|J|K|W/*|Z*/, PERSON|MONSTER|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,50, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 50%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            10, 12,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "skorpion", "skorpiona", "skorpionowi", "skorpiona", "skorpionem", "skorpionie",
        FALSE, "", 100,
        "", "",
        G|O,  A|B|C|D|E|I|K|Q|U,  ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        6, 9,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "cieniskrzyd造", "cieniskrzyd貫go", "cieniskrzyd貫mu", "cieniskrzyd貫go", "cieniskrzyd造m", "cieniskrzyd造m",
        FALSE, "", 100,
        "infrared", "",
        A|R|W,  A|C|D|E|F|H|I|J|K|P|Q|U|V, MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        10, 16,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "syrena", "syreny", "syrenie", "syrenie", "syren�", "syrenie",
        FALSE, "", 100,
        "water_breath", "",
        A|J|M|V|bb, A|B|C|D|E|F|G|H|I|J|K|O|T,  MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,20, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 20%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_HEAD|
                ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            4, 8,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "szkielet", "szkieleta", "szkieletowi", "szkielet", "szkieletem", "szkielecie",
        FALSE, "undead", 100,
        "", "",
        C|I|J,  A|B|C|G|H|I|J|K|R,  UNDEAD,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,100,0,0, 0,0,}, //imm sleep,charm,hold
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        4, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "szkielet wojownik", "szkieletu wojownika", "szkieleta wojownika", "szkielet wojownik", "szkieletem wojownika", "szkielecie wojownika",
        FALSE, "undead", 100,
        "", "",
        C|I|J,  A|B|C|G|H|I|J|K|R,  UNDEAD,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,100,0,0, 0,0,}, //imm sleep,charm,hold
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        11, 16,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "paj彗", "paj彗a", "paj彗owi", "paj彗a", "paj彗iem", "paj彗u",
        FALSE, "", 100,
        "", "",
        G|P,  A|C|K,    ANIMAL|MONSTER|INSECT,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 17,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "widmo", "widma", "widmu", "widmo", "widmem", "widmie",
        FALSE, "undead", 100,
        "pass_door flying", "",
        C|I|M|W, A|B|C|G|H|I|J|K|P|U,  UNDEAD|OUTSIDER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,100,0, 0,1,100,0,0, 0,0,} //imm cold, charm, hold, non_magic_weapon
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            12, 14,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "tanar'ri", "tanar'ri", "tanar'ri", "tanar'ri", "tanar'ri", "tanar'ri",
        FALSE, "", 100,
        "detect_evil detect_good detect_magic", "",
        C|E|V, A|B|C|D|E|F|G|H|I|J|K|P|U|V, MONSTER|DEMON|OUTSIDER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,2,0,0,0, 0,0,} //imm non_&_low_magic_weapon(+2),
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            33, 34,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "tarask", "taraska", "taraskowi", "taraska", "taraskiem", "tarasku",
        FALSE, "", 100,
        "regeneratation haste detect_evil detect_good detect_magic detect_invis detect_hidden", "",
        C|G|X,  A|B|C|D|E|F|H|I|J|K|Q|U|V|X, MONSTER|DEMON|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 100,75,0,0,0, 0,3,0,0,0, 0,0,}, //imm fire,non_magic_weapon(+3)
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        37, 37,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "tasloi", "tasloi", "tasloi", "tasloi", "tasloi", "tasloi",
        FALSE, "", 100,
        "sneak  infrared", "",
        E|G|M|V, A|B|C|D|E|F|G|H|I|J|K,  MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        3, 8,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "tytan", "tytana", "tytanowi", "tytana", "tytanem", "tytanie",
        FALSE, "", 100,
        "protect_evil", "", //bless - nie ma
        A|M|V|F, A|B|C|D|E|F|G|H|I|J|K,  MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,50, 0,0,0,0,0, 0,0,0,0,0, 0,0,} //magic 50%
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_HEAD|
                ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_BODY|ITEM_WEAR_FEET|ITEM_WEAR_LEGS|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            25, 30,
            "grzmi",
            "pyta",
            "Grzmisz"
    },

    {
        "ropucha", "ropuchy", "ropusze", "ropuch�", "ropusze", "ropuch�",
        FALSE, "", 20,
        "", "",
        G,  A|C|D|E|F|G|H|I|J|K|L|R|S,  ANIMAL|MONSTER,
        {"przyskoczylo","przyskoczyl","przyskoczyla"},
        {"odskoczylo","odskoczyl","odskoczyla"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 4,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "ropucha olbrzymia", "ropuchy olbrzymiej", "ropusze olbrzymiej", "ropuch� olbrzymi�", "ropuch� olbrzymi�", "ropusze olbrzymiej",
        FALSE, "", 20,
        "", "",
        G, A|C|D|E|F|G|H|I|J|K|L|R|S,  ANIMAL|MONSTER,
        {"przyskoczylo","przyskoczyl","przyskoczyla"},
        {"odskoczylo","odskoczyl","odskoczyla"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        4, 7,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "drzewiec", "drzewca", "drzewcowi", "drzewca", "drzewcem", "drzewcu",
        FALSE, "", 100,
        "", "",
        C|E/*|dd*/, J|K/*|S|T*/,   PLANT,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND,
        12, 17,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "troglodyta", "troglodyty", "troglodycie", "troglodyt�", "troglodyt�", "troglodycie",
        FALSE, "", 100,
        "", "",
        A|M|V,  A|B|C|D|E|F|G|H|I|J|K|R, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            5, 9,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "krowa", "krowy", "krowie", "krow�", "krow�", "krowie",
        FALSE, "", 100,
        "", "kick",
        A|F|G|V, A|B|C|D|E|J|K|R|S, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_WEAR_NECK,
            2, 5,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "umberkolos", "umberkolosa", "umberkolosowi", "umberkolosa", "umberkolosem", "umberkolosie",
        FALSE, "", 150,
        "infrared", "",
        G|M|O|V, A|B|C|D|E|F|G|H|I|J|K|U|Y|S, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            11, 15,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "jednoro瞠c", "jednoro盧a", "jednoro盧owi", "jednoro盧a", "jednoro盧em", "jednoro盧u",
        FALSE, "", 200,
        "detect_evil", "",
        A|C|G|V|F, A|C|D|E|F|J|K|Q|Z|R|S,  ANIMAL|MONSTER,
        {"przytruchta這","przytruchta�","przytruchta豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_WEAR_EAR|ITEM_WEAR_NECK,
            7, 10,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "wampir", "wampira", "wampirowi", "wampira", "wampirem", "wampirze",
        FALSE, "undead", 100,
        "detect_hidden", "",
        C|I|M|V, A|B|C|D|G|H|I|J|K|R,  UNDEAD,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,1,0,0,0, 0,0,} //imm charm,fear, non_magic_weapon
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            17, 20,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "zmora", "zmory", "zmorze", "zmor�", "zmor�", "zmorze",
        FALSE, "undead", 100,
        "pass_door", "",
        I|M|V,  A|B|C|G|H|I|J|K|U|V,  UNDEAD|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,1,100,0,0, 0,0,} //imm non_magic_weapon,sleep,charm,hold
        ,
            ITEM_WEAR_NECK,
            10, 12,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "b喚dny ognik", "b喚dnego ognika", "b喚dnemu ognikowi", "b喚dnego ognika", "b喚dnym ognikiem", "b喚dnym ogniku",
        FALSE, "", 100,
        "protectn_evil", "",
        C|S|F,  K,    OUTSIDER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,5, 0,0,0,0,0, 0,0,0,0,0, 0,0,}, //magic 5%
        0,
        12, 15,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "豉kowilk", "豉kowilka", "豉kowilkowi", "豉kowilka", "豉kowilkiem", "豉kowilku",
        FALSE, "", 100,
        "detect_hidden", "",
        G|M|V|F, A|B|C|D|E|F|G|H|I|J|K|U|V|R, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,10, 0,0,0,0,0, 0,1,0,0,0, 0,0,} //im non_magic_weapon, magic 10%
        ,
            ITEM_WEAR_EAR|ITEM_WEAR_NECK,
            10, 12,
            "warczy",
            "warczy",
            "Warczysz"
    },

    {
        "czerw", "czerwia", "czerwiowi", "czerwia", "czerwiem", "czerwiu",
        FALSE, "", 100,
        "", "",
        A|G|R,  A|D|K|Q||S|V|X,   ANIMAL|MONSTER|INSECT,
        {"przypelz這","przype透�","przype透豉"},
        {"odpe透這","odpe透�","odpe透豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            0,
            0, 24,
            "piszczy",
            "piszczy",
            "Piszczysz"
    },

    {
        "upi鏎", "upi鏎a", "upi鏎owi", "upi鏎a", "upi鏎em", "upi鏎ze",
        FALSE, "undead", 100,
        "pass_door", "",
        I|K|M,  A|B|C|G|H|I|J|K,  UNDEAD|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,1,100,0,0, 0,0,} //imm non_magic_weapon,sleep,charm,hold
        ,
            ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
                ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
                ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
            11, 13,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "ko�", "konia", "koniowi", "konia", "koniem", "koniu",
        FALSE, "", 100,
        "", "",
        A|F|G|V, A|C|D|E|F|J|K|Q|R|S, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,}
        ,
            ITEM_WEAR_EAR|ITEM_WEAR_NECK,
            2, 5,
            "m闚i",
            "pyta",
            "M闚isz"
    },

    {
        "yuan-ti", "yuan-ti", "yuan-ti", "yuan-ti", "yuan-ti", "yuan-ti",
        FALSE, "", 100,
        "", "",
        A|G|J|M|V|Y|F, A|B|D|E|F|G|I|J|K|Q|U|R,  MONSTER,
        {"przype透這","przype透�","przype透豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,70, 0,0,0,0,0, 0,0,}, //poison 70%
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        11, 19,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "簑k", "簑ka", "簑kowi", "簑ka", "簑kiem", "簑ku",
        FALSE, "", 100,
        "", "",
        G|R, A|C|U, ANIMAL|INSECT,
        {"przypelz這","przype透�","przype透豉"},
        {"odpe透這","odpe透�","odpe透豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 3,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "owad pe透aj帷y", "owada pe透aj帷ego", "owadowi pe透aj帷emu", "owada pe透aj帷ego", "owadem pe透aj帷ym", "owadzie pe透aj帷ym",
        FALSE, "", 100,
        "", "",
        G|R,  A|C,   ANIMAL|INSECT,
        {"przypelz這","przype透�","przype透豉"},
        {"odpe透這","odpe透�","odpe透豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "owad lataj帷y", "owada lataj帷ego", "owadowi lataj帷emu", "owada lataj帷ego", "owadem lataj帷ym", "owadzie lataj帷ym",
        FALSE, "", 100,
        "flying", "",
        O,  A|C|P,   ANIMAL|INSECT,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,} ,
        0,
        0, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "wa磬a", "wa磬i", "wa盧e", "wa磬�", "wa磬�", "wa盧e",
        FALSE, "", 100,
        "flying", "",
        O,  A|C|P,   ANIMAL|INSECT,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,} ,
        0,
        0, 3,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "dzik",  "dzika", "dzikowi", "dzika", "dzikiem", "dziku",
        FALSE, "memory", 130,
        "infrared detect_hidden", "assist_race", A|G|F|V,
        A|C|D|E|F|J|K|R|S, ANIMAL|MONSTER,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        0, 4,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "wiewi鏎ka", "wiewi鏎ki", "wiewi鏎ce", "wiewi鏎k�", "wiewi鏎k�", "wiewi鏎ce",
        FALSE, "wimpy", 20,
        "dark_vision detect_hidden",  "", A|G|V|F,
        A|C|D|E|F|J|K|Q|R|S, ANIMAL,
        {"przykica這","przykica�","przykica豉"},
        {"odkica這","odkica�","odkica豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        0, 2,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "tygrys", "tygrysa", "tygrysowi", "tygrysa", "tygrysem", "tygrysie",
        FALSE, "mountable memory", 150,
        "dark_vision infrared detect_hidden", "berserk", A|G|V|F,
        A|C|D|E|F|J|K|Q|R|S|V, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,30,50,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        2, 10,
        "ryczy",
        "ryczy",
        "Ryczysz"
    },

    {
        "mysz", "myszy", "myszy", "mysz", "mysz�", "myszy",
        FALSE, "wimpy", 20,
        "dark_vision detect_hidden",  "", A|G|V|F,
        A|C|D|E|F|J|K|Q|R|S, ANIMAL,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        0, 1,
        "piszczy",
        "piszczy",
        "Piszczysz"
    },

    {
        "szczur", "szczura", "szczurowi", "szczura", "szczurem", "szczurze",
        FALSE, "", 20,
        "dark_vision detect_hidden",  "", A|G|V|F,
        A|C|D|E|F|J|K|Q|R|S, ANIMAL,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        0, 2,
        "piszczy",
        "piszczy",
        "Piszczysz"
    },

    {
        "behemot", "behemota", "behemotowi", "behemota", "behemotem", "behemocie",
        FALSE, "memory", 200,
        "regeneration detect_hidden", "berserk crush bash", A|G|V|F,
        A|B|C|D|E|F|I|J|K|R|Y|S, MONSTER|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,40,60,0, 0,0,},
        ITEM_WEAR_NECK,
        20, 32,
        "grzmi",
        "grzmi",
        "Grzmisz"
    },

    {
        "yeti", "yeti", "yeti", "yeti", "yeti", "yeti",
        FALSE,  "", 150,
        "detect_hidden", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R|S, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,50,0,0, 0,0,0,0,0, 0,0,},//50% resist na cold
        ITEM_TAKE|ITEM_WEAR_NECK|
            ITEM_WEAR_EAR|ITEM_WEAR_ARMS|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_HOLD|ITEM_WEAR_FLOAT,
        7, 9,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "smokowiec", "smokowca", "smokowcu", "smokowca", "smokowcem", "smokowcu",
        FALSE, "", 100,
        "infrared", "assist_race", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|J|K|R, PERSON|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        4, 8,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "demon", "demona", "demonowi", "demona", "demonem", "demonie",
        FALSE, "", 100,
        "detect_invis detect_hidden infrared fly",
        "fast two_attack",
        C, //forms
        A|B|C|D|E|F|G|H|I|J|K|R, // parts
        DEMON|MONSTER|OUTSIDER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,20,20,20,5, 10,10,10,10,10, 10,1,100,100,100, 10,10,}, //no to w ko鎍u demon jest, nie?
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        24, 28,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "r鎩 owad闚", "r鎩u owad闚", "r鎩owi owad闚", "r鎩 owad闚", "r鎩em owad闚", "r鎩u owad闚",
        FALSE, "", 100,
        "", "",
        0, 0, ANIMAL|INSECT,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 5,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "celestial", "celestiala", "celestialowi", "celestiala", "celestialem", "celestialu",
        FALSE,  "", 100,
        "fly detect_invis detect_hidden infrared", "", A|H|M|V|F,
        A|B|C|D|E|F|G|H|I|K|R|P, PERSON|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_EAR|ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        22, 36,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "kr鏊ik", "kr鏊ika", "kr鏊ikowi", "kr鏊ika", "kr鏊ikiem", "kr鏊iku",
        FALSE, "",  70,
        "detect_hidden",  "", A|G|V|F,
        A|C|D|E|F|H|J|K|R|S, ANIMAL,
        {"przykica這","przykica�","przykica豉"},
        {"odkica這","odkica�","odkica豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        0, 2,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "郾ie積y wilk", "郾ie積ego wilka", "郾ie積emu wilkowi", "郾ie積ego wilka", "郾ie積ym wilkiem", "郾ie積ym wilku",
        FALSE, "", 170,
        "dark_vision detect_hidden resist_cold", "assist_race", A|G|V|F,
        A|C|D|E|F|J|K|Q|V|R|S, ANIMAL|MONSTER,
        {"przybieg這","przybieg�","przybieg豉"},
        {"odbieg這","odbieg�","odbieg豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        5, 15,
        "warczy",
        "warczy",
        "M闚isz"
    },

    {
        "jele�", "jelenia", "jeleniowi", "jelenia", "jeleniem", "jeleniu",
        FALSE, "", 110,
        "detect_hidden fear", "assist_race", A|G|V|F,
        A|C|D|E|F|J|K|Q|V|R|S, ANIMAL,
        {"przybieg這","przybieg�","przybieg豉"},
        {"odbieg這","odbieg�","odbieg豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        5, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "daniel", "daniela", "danielowi", "daniela", "danielem", "danielu",
        FALSE, "", 110,
        "detect_hidden fear", "assist_race", A|G|V|F,
        A|C|D|E|F|J|K|Q|V|R|S, ANIMAL,
        {"przybieg這","przybieg�","przybieg豉"},
        {"odbieg這","odbieg�","odbieg豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        3, 8
    },
    {
        "ry�", "rysia", "rysiowi", "rysia", "rysiem", "rysiu",
        FALSE, "", 100,
        "dark_vision detect_hidden sneak", "assist_race", A|G|V|F,
        A|C|D|E|F|J|K|Q|V|R|S, ANIMAL,
        {"przybieg這","przybieg�","przybieg豉"},
        {"odbieg這","odbieg�","odbieg豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_EAR|ITEM_WEAR_NECK,
        5, 8,
        "ryczy",
        "ryczy",
        "Ryczysz"
    },

    {
        "mefit", "mefita", "mefitowi", "mefita", "mefitem", "meficie",
        FALSE, "", 100,
        "detect_hidden flying dark_vision", "dodge", A|C|G|V|F,
        A|C|D|E|F|H|J|K|P|R, ANIMAL|MONSTER|DEMON|OUTSIDER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_WEAR_NECK,
        2, 6,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "ptak nielot", "ptaka nielota", "ptakowi nielotowi", "ptaka nielota", "ptakiem nielotem", "ptaku nielocie",
        FALSE, "", 100,
        "detect_hidden", "", A|G|W|F,
        A|C|D|E|F|H|K|P|R|S|T, ANIMAL,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "necrophidius", "necrophidiusa", "necrophidiusowi", "necrophidiusa", "necrophidiusem", "necrophidiusie",
        FALSE, "", 100,
        "detect_hidden",
        "",
        C|J, // to nie jest undead, ale konstrukt - golem z kosci (kregoslup + czaszka)
        A|Q, // ten stworek to taki niby-waz - ogon + glowa
        MONSTER,
        {"przype透這","przype透�","przype透豉"},
        {"odpe透這","odpe透�","odpe透豉"},
        {0,0,0,0,0, 0,0,0,0,100, 0,0,0,0,0, 0,100,}, //resist poison 100% i mental 100%
        0,
        15,
        25,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "篡wio豉k", "篡wio豉ka", "篡wio豉kowi", "篡wio豉ka", "篡wio豉kiem", "篡wio豉ku",
        FALSE, "", 100,
        "", "", C,
        A|B|C|G|H|I, MONSTER|OUTSIDER,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,100,}, //resist mental 100%
        0,
        10, 22,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "kura", "kury", "kurze", "kur�", "kur�", "kurze",
        FALSE, "", 50,
        "detect_hidden", "", A|G|W|F,
        A|C|D|E|F|H|K|P|R|S|T, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "kogut", "koguta", "kogutowi", "koguta", "kogutem", "kogucie",
        FALSE, "", 100,
        "detect_hidden", "", A|G|W|F,
        A|C|D|E|F|H|K|P|R|S|T, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 10,
        "pieje",
        "pieje",
        "Piejesz"
    },

    {
        "g窷", "g瘰i", "g瘰i", "g窷", "g瘰i�", "g瘰i",
        FALSE, "", 100,
        "detect_hidden", "", A|G|W|F,
        A|C|D|E|F|H|K|P|R|S|T, ANIMAL|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 10,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "kaszcz", "kaszcza", "kaszczowi", "kaszcza", "kaszczem", "kaszczu",
        FALSE, "aggressive", 100,
        "detect_hidden detect_hidden dark_vision", "", A|H|M|V|cc,
        C|D|E|F|G|H|I|K|R|U, MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odesz這","odszed�","odesz豉"},
        {0,0,0,0,10, -3,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_LEGS|ITEM_WEAR_FLOAT|ITEM_WIELD,
        8, 18,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "ghast", "ghasta", "ghastowi", "ghasta", "ghastem", "ghascie",
        FALSE, "undead", 100,
        "", "assist_race",
        I|M|F,  A|B|C|F|G|H|I|J|K|R,  UNDEAD|MONSTER,
        {"przysz這","przyszed�","przysz豉"},
        {"odchodzi","odchodzi","odchodzi"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT,
        6, 9,
        "m闚i",
        "pyta",
        "M闚isz"
    },

    {
        "s瘼", "s瘼a", "s瘼owi", "s瘼a", "s瘼em", "s瘼ie",
        FALSE, "", 20,
        "flying infrared sneak", "dodge", A|G|W|F,
        A|C|D|E|F|H|K|P|R|S|T, ANIMAL|MONSTER,
        {"przylecia這","przylecia�","przylecia豉"},
        {"odlecia這","odlecia�","odlecia豉"},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,},
        0,
        0, 12,
        "skrzeczy",
        "skrzeczy",
        "如iewasz"
    },

    {
        NULL, NULL, NULL, NULL, NULL, NULL, 0, "", 100, "", "", 0, 0, 0,
        {"","",""},
        {"","",""},
        {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,} ,
        ITEM_TAKE|ITEM_WEAR_FINGER|ITEM_WEAR_NECK|ITEM_WEAR_BODY|ITEM_WEAR_HEAD|ITEM_WEAR_LEGS|
            ITEM_WEAR_FEET|ITEM_WEAR_HANDS|ITEM_WEAR_ARMS|ITEM_WEAR_SHIELD|ITEM_WEAR_ABOUT|ITEM_WEAR_EAR|
            ITEM_WEAR_WAIST|ITEM_WEAR_WRIST|ITEM_WIELD|ITEM_HOLD|ITEM_WIELDSECOND|ITEM_WEAR_LIGHT|ITEM_WEAR_FLOAT|ITEM_INSTRUMENT,
        0, 40,
        "m闚i",
        "pyta",
        "M闚isz"
    }

};

