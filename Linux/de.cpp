// based on a keyboard map from an 'xkb/symbols/de' file

default
xkb_symbols "basic" {

    include "latin(type4)"

    name[Group1]="German";

    key <AE02>	{ [         2,   quotedbl,  twosuperior,    oneeighth ]	};
    key <AE03>	{ [         3,    section, threesuperior,    sterling ]	};
    key <AE04>	{ [         4,     dollar,   onequarter,     currency ]	};

    key <AE11> {type[Group1]="FOUR_LEVEL_PLUS_LOCK",  symbols[Group1]=
                  [ssharp, question, backslash, questiondown, 0x1001E9E ]};
    key <AE12>	{ [dead_acute, dead_grave, dead_cedilla,  dead_ogonek ]	};

    key <AD03>	{ [         e,          E,     EuroSign,     EuroSign ]	};
    key <AD06>	{ [         z,          Z,    leftarrow,          yen ]	};
    key <AD11>	{ [udiaeresis, Udiaeresis, dead_diaeresis, dead_abovering ] };
    key <AD12>	{ [      plus,   asterisk,   asciitilde,  macron ]	};

    key <AC02>  { [         s,          S,                U017F,     U1E9E    ] };
    key <AC07>  { [         j,          J,        dead_belowdot, dead_abovedot   ] };
    key <AC10>	{ [odiaeresis, Odiaeresis, dead_doubleacute, dead_belowdot ] };
    key <AC11>	{ [adiaeresis, Adiaeresis, dead_circumflex, dead_caron ] };
    key <TLDE>	{ [dead_circumflex, degree,	U2032,    U2033	] };

    key <BKSL>	{ [numbersign, apostrophe, rightsinglequotemark,   dead_breve ]	};
    key <AB01>	{ [         y,          Y,       guillemotright,    U203A 	] };
    key <AB02>	{ [         x,          X,        guillemotleft,    U2039 	] };
    key <AB04>	{ [         v,          V,   doublelowquotemark, singlelowquotemark ]	};
    key <AB05>	{ [         b,          B,  leftdoublequotemark, leftsinglequotemark ] };
    key <AB06>	{ [         n,          N, rightdoublequotemark, rightsinglequotemark ]	};
    key <AB08>  { [     comma,  semicolon,       periodcentered,     multiply	] };
    key <AB09>	{ [    period,      colon,                U2026,     division 	] };
    key <AB10>	{ [     minus, underscore,               endash,     emdash	] };
    key <LSGT>	{ [     less,     greater,                  bar, dead_belowmacron ] };

    include "kpdl(comma)"

    include "level3(ralt_switch)"
};

partial alphanumeric_keys
xkb_symbols "deadtilde" {
    // previous standard German layout with tilde as dead key

    include "de(basic)"
    name[Group1]="German (dead tilde)";

    key <AD12>	{ [      plus,   asterisk,   dead_tilde,  dead_macron ]	};
};

partial alphanumeric_keys
xkb_symbols "nodeadkeys" {

    // modify the basic German layout to not have any dead keys

    include "de(basic)"
    name[Group1]="German (no dead keys)";

    key <TLDE>	{ [asciicircum,     degree,              notsign,     notsign ]	};
    key <AE12>	{ [      acute,      grave,              cedilla,     cedilla ]	};
    key <AD11>	{ [ udiaeresis, Udiaeresis,            diaeresis,   diaeresis ]	};
    key <AD12>	{ [       plus,   asterisk,           asciitilde,      macron ]	};
    key <AC10>	{ [ odiaeresis, Odiaeresis,          doubleacute, doubleacute ]	};
    key <AC11>	{ [ adiaeresis, Adiaeresis,          asciicircum, asciicircum ]	};
    key <BKSL>	{ [ numbersign, apostrophe, rightsinglequotemark,       grave ]	};
};

partial alphanumeric_keys
xkb_symbols "deadgraveacute" {
    // modify the basic German layout to have only acute and grave
    // as dead keys (tilde and circumflex are needed as spacing characters
    // in many programming languages)

    include "de(basic)"
    name[Group1]="German (dead grave acute)";

    key <TLDE>	{ [asciicircum,     degree,              notsign,      notsign ] };
    key <AD12>	{ [       plus,   asterisk,           asciitilde,  dead_macron ] };
    key <BKSL>	{ [ numbersign, apostrophe, rightsinglequotemark,        grave ] };
};

partial alphanumeric_keys
xkb_symbols "deadacute" {
    // modify the basic German layout to have only acute as
    // dead keys (ASCII grave, tilde and circumflex are needed as
    // spacing characters in many programming languages and text formatters)

    include "de(deadgraveacute)"

    name[Group1]="German (dead acute)";

    key <AE12>	{ [dead_acute,      grave,           dead_cedilla,  dead_ogonek ] };
    key <BKSL>	{ [numbersign, apostrophe,   rightsinglequotemark,   dead_grave ] };
};


partial alphanumeric_keys
xkb_symbols "T3" {
    name[Group1]="German (T3)";

    key.type[Group1] = "EIGHT_LEVEL";
    key <TLDE> { [ dead_circumflex,          degree,        multiply,        NoSymbol,           U204A,            hyphen,             bar,        NoSymbol ] };
    key <AE01> { [               1,          exclam, rightsinglequotemark,   NoSymbol,     onesuperior,        exclamdown,           U02B9,        NoSymbol ] };
    key <AE02> { [               2,        quotedbl,     twosuperior,        NoSymbol,     twosuperior,          currency,           U02BA,        NoSymbol ] };
    key <AE03> { [               3,         section,   threesuperior,        NoSymbol,   threesuperior,          sterling,           U02BF,        NoSymbol ] };
    key <AE04> { [               4,          dollar,          emdash,        NoSymbol,      onequarter,            0x20AC,           U02BE,        NoSymbol ] };
    key <AE05> { [               5,         percent,      exclamdown,        NoSymbol,         onehalf,           uparrow,           U02C1,        NoSymbol ] };
    key <AE06> { [               6,       ampersand,    questiondown,        NoSymbol,   threequarters,         downarrow,           U02C0,        NoSymbol ] };
    key <AE07> { [               7,           slash,       braceleft,        NoSymbol,       oneeighth,         leftarrow,       braceleft,        NoSymbol ] };
    key <AE08> { [               8,       parenleft,     bracketleft,        NoSymbol,    threeeighths,        rightarrow,      braceright,        NoSymbol ] };
    key <AE09> { [               9,      parenright,    bracketright,        NoSymbol,     fiveeighths,         plusminus,     bracketleft,        NoSymbol ] };
    key <AE10> { [               0,           equal,      braceright,        NoSymbol,    seveneighths,         trademark,    bracketright,        NoSymbol ] };
    key <AE11> { [          ssharp,        question,       backslash,        NoSymbol,       backslash,      questiondown,           U02BB,        NoSymbol ] };
    key <AE12> { [      dead_acute,      dead_grave,   dead_abovedot,        NoSymbol,    dead_cedilla,       dead_ogonek,         notsign,        NoSymbol ] };

    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC";
    key <AD01> { [               q,               Q,              at,        NoSymbol,           U0242,           U0241,           U030D,        NoSymbol ] };
    key <AD02> { [               w,               W,      dead_caron,        NoSymbol,           U02B7,           U2126,   dead_abovedot,        NoSymbol ] };
    key <AD03> { [               e,               E,        EuroSign,        NoSymbol,              oe,              OE,      dead_breve,        NoSymbol ] };
    key <AD04> { [               r,               R,  dead_diaeresis,        NoSymbol,       paragraph,      registered, dead_circumflex,        NoSymbol ] };
    key <AD05> { [               t,               T,     dead_macron,        NoSymbol,           UA78C,           UA78B,  dead_diaeresis,        NoSymbol ] };
    key <AD06> { [               z,               Z, dead_doubleacute,       NoSymbol,           U027C,             yen, dead_invertedbreve,     NoSymbol ] };
    key <AD07> { [               u,               U,      dead_breve,        NoSymbol,           U0223,           U0222,      dead_caron,        NoSymbol ] };
    key <AD08> { [               i,               I,      dead_tilde,        NoSymbol,        idotless,           U214D, dead_abovecomma,        NoSymbol ] };
    key <AD09> { [               o,               O,  dead_abovering,        NoSymbol,          oslash,          Oslash,       dead_horn,        NoSymbol ] };
    key <AD10> { [               p,               P,       dead_hook,        NoSymbol,           thorn,           THORN,       dead_hook,        NoSymbol ] };
    key <AD11> { [      udiaeresis,      Udiaeresis,       dead_horn,        NoSymbol,           U017F,  dead_abovering,      dead_grave,        NoSymbol ] };
    key.type[Group1] = "EIGHT_LEVEL";
    key <AD12> { [            plus,        asterisk,      asciitilde,        NoSymbol,      dead_tilde,     dead_macron,              at,        NoSymbol ] };
    
    key.type[Group1] = "ONE_LEVEL";
    key <CAPS>  { [ Caps_Lock	]	};
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC";
    key <AC01> { [               a,               A,   lessthanequal,        NoSymbol,              ae,              AE,           U0329,        NoSymbol ] };
    key <AC02> { [               s,               S, greaterthanequal,       NoSymbol,          ssharp,         section,   dead_belowdot,        NoSymbol ] };
    key <AC03> { [               d,               D,           U2300,        NoSymbol,             eth,             ETH, dead_belowbreve,        NoSymbol ] };
    key <AC04> { [               f,               F,         minutes,        NoSymbol,           U0294,     ordfeminine, dead_belowcircumflex,   NoSymbol ] };
    key <AC05> { [               g,               G,         seconds,        NoSymbol,             eng,             ENG, dead_belowmacron,       NoSymbol ] };
    key <AC06> { [               h,               H,           U1E9E,        NoSymbol,           U0272,           U019D,           U0332,        NoSymbol ] };
    key <AC07> { [               j,               J,    dead_cedilla,        NoSymbol,           U0133,           U0132,  dead_belowring,        NoSymbol ] };
    key <AC08> { [               k,               K, dead_belowcomma,        NoSymbol,             kra, dead_belowcomma,     dead_stroke,        NoSymbol ] };
    key <AC09> { [               l,               L,     dead_ogonek,        NoSymbol,         lstroke,         Lstroke,           U0338,        NoSymbol ] };
    key <AC10> { [      odiaeresis,      Odiaeresis,   dead_belowdot,        NoSymbol,      dead_acute, dead_doubleacute,         degree,        NoSymbol ] };
    key <AC11> { [      adiaeresis,      Adiaeresis,     dead_stroke,        NoSymbol,           U019B,           U1E9E,         minutes,        NoSymbol ] };
    key.type[Group1] = "EIGHT_LEVEL";
    key <BKSL> { [      numbersign,      apostrophe,      registered,        NoSymbol,           schwa,           SCHWA,         seconds,        NoSymbol ] };

    key <LSGT> { [            less,         greater,             bar,        NoSymbol,           U0149,       brokenbar,           U266A,        NoSymbol ] };
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC";
    key <AB01> { [               y,               Y,           U203A,        NoSymbol,           U0292,           U01B7,   guillemotleft,        NoSymbol ] };
    key <AB02> { [               x,               X,  guillemotright,        NoSymbol, doublelowquotemark, singlelowquotemark, guillemotright,   NoSymbol ] };
    key <AB03> { [               c,               C,       copyright,        NoSymbol,            cent,       copyright,  Greek_horizbar,        NoSymbol ] };
    key <AB04> { [               v,               V,   guillemotleft,        NoSymbol, leftdoublequotemark, leftsinglequotemark,   U2039,        NoSymbol ] };
    key <AB05> { [               b,               B,           U2039,        NoSymbol, rightdoublequotemark, rightsinglequotemark, U203A,        NoSymbol ] };
    key <AB06> { [               n,               N,          endash,        NoSymbol,           U019E,           U0220,          endash,        NoSymbol ] };
    key <AB07> { [               m,               M,              mu,        NoSymbol,              mu,       masculine,          emdash,        NoSymbol ] };
    key.type[Group1] = "EIGHT_LEVEL";
    key <AB08> { [           comma,       semicolon,           U02BB,        NoSymbol,        ellipsis,        multiply,          dollar,        NoSymbol ] };
    key <AB09> { [          period,           colon,           U200C,        NoSymbol,  periodcentered,        division,      numbersign,        NoSymbol ] };
    key <AB10> { [           minus,      underscore,          hyphen,        NoSymbol,           U0140,           U013F,           U2011,        NoSymbol ] };

    key <SPCE> { [           space,           space,    nobreakspace,        NoSymbol,           U202F,           U200C,    nobreakspace,        NoSymbol ] };

    include "kpdl(comma)"

    include "level5(modifier_mapping)"
    include "level3(modifier_mapping)"
    key.type[Group1] = "THREE_LEVEL";
    key <LFSH> { [ Shift_L, Shift_L, ISO_Level5_Latch ] };
    key <RTSH> { [ Shift_R, Shift_R, ISO_Level5_Latch ] };
    key <RALT> { [ ISO_Level3_Shift, ISO_Level5_Latch, ISO_Level5_Latch ] };
 };

partial alphanumeric_keys
xkb_symbols "ro" {
    // add romanian-specific letters to the basic German layout.
    // Romanian symbols are accessible with combination of <AltGr> and
    // 'a', 's', 't', 'i', 'ä (&auml)' (+<Shift> for capital letters).
    // To view romanian-specific symbols, add "export LC_CTYPE=ro_RO"
    // or "export LC_CTYPE=de_DE.utf8" to your .profile.

    include "de(basic)"

    name[Group1]="Romanian (Germany)";

    key <AD05> { [         t,    T,           tcedilla,     Tcedilla    ] };
    key <AD08> { [         i,    I,        icircumflex,  Icircumflex    ] };
    key <AC01> { [         a,    A,        acircumflex,  Acircumflex    ] };
    key <AC02> { [         s,    S,           scedilla,     Scedilla    ] };
    key <AC11> { [ adiaeresis,   Adiaeresis,    abreve,       Abreve    ] };
};

partial alphanumeric_keys
xkb_symbols "ro_nodeadkeys" {
    // add romanian-specific letters to the German nodeadkeys layout.
    // Read the comment for de_ro !

    include "de(nodeadkeys)"
    name[Group1]="Romanian (Germany, no dead keys)";

    key <AD05> { [         t,    T,           tcedilla,     Tcedilla    ] };
    key <AD08> { [         i,    I,        icircumflex,  Icircumflex    ] };
    key <AC01> { [         a,    A,        acircumflex,  Acircumflex    ] };
    key <AC02> { [         s,    S,           scedilla,     Scedilla    ] };
    key <AC11> { [ adiaeresis,   Adiaeresis, abreve,       Abreve       ] };
};

// German Dvorak keymap by Thorsten Staerk (www.staerk.de/thorsten)
// Have acute and grave as dead keys, tilde and circumflex alive as they are needed 
// in many programming languages.
// to use this keymap, use a 105-key-keyboard and the command setxkbmap -model pc105 -layout dvorak -variant de
// source: http://www-lehre.informatik.uni-osnabrueck.de/~rfreund/dvorak.php
partial alphanumeric_keys
xkb_symbols "dvorak" {
    include "us(dvorak)"

    name[Group1]="German (Dvorak)";

    key <TLDE> { [ asciicircum, degree ] };

    key <AE01> { [ 1, exclam, onesuperior ] };
    key <AE02> { [ 2, quotedbl, twosuperior ] };
    key <AE03> { [ 3, section, threesuperior ] };
    key <AE04> { [ 4, dollar, bar ] };
    key <AE05> { [ 5, percent, bar ] };
    key <AE06> { [ 6, ampersand, brokenbar ] };
    key <AE07> { [ 7, slash, braceleft ] };
    key <AE08> { [ 8, parenleft, bracketleft ] };
    key <AE09> { [ 9, parenright, bracketright ] };
    key <AE10> { [ 0, equal, braceright ] };
    key <AE11> { [ plus, asterisk, asciitilde ] };
    key <AE12> { [ less, greater, dead_grave ] };

    key <AD01> { [ udiaeresis, Udiaeresis, at ] };
    key <AD02> { [ comma, semicolon, dead_diaeresis ] };
    key <AD03> { [ period, colon ] };
    key <AD08> { [ c, C, copyright, Cacute ] };
    key <AD09> { [ t, T, trademark ] };
    key <AD10> { [ z, Z, zabovedot, Zabovedot ] };
    key <AD11> { [ question, ssharp ] };
    key <AD12> { [ slash, backslash, dead_acute ] };

    key <AC01> { [ a, A, at, aogonek ] };
    key <AC02> { [ o, O, oacute, Oacute ] };
    key <AC03> { [ e, E, EuroSign, eogonek ] };
    key <AC04> { [ i, I ] };
    key <AC05> { [ u, U ] };
    key <AC06> { [ h, H ] };
    key <AC07> { [ d, D ] };
    key <AC08> { [ r, R, registered ] };
    key <AC09> { [ n, N, nacute, Nacute ] };
    key <AC10> { [ s, S, sacute, Sacute] };
    key <AC11> { [ l, L, lstroke, Lstroke ] };

    key <AB01> { [ odiaeresis, Odiaeresis ] };
    key <AB02> { [ q, Q, at ] };
    key <AB07> { [ m, M, mu ] };
    key <AB10> { [ numbersign, apostrophe ] };

    key <BKSL> { [ minus, underscore, hyphen, diaeresis] };

    key <LSGT> { [ adiaeresis, Adiaeresis, bar ] };

    include "level3(ralt_switch)"
};

partial alphanumeric_keys
xkb_symbols "Sundeadkeys" {

    // For naming consistency

    include "de(basic)"

};

partial alphanumeric_keys
xkb_symbols "sundeadkeys" {

    // For naming consistency

    include "de(Sundeadkeys)"

    name[Group1]="German (with Sun dead keys)";
};


// German Neo-Layout Version 2
// adopted 2004 by Hanno Behrens <Hanno.Behrens@gmx.de>
// inspired by Dvorak/de-ergo  http://www.goebel-consult.de/de-ergo/
//
// Authors: 
//      Stephan Hilb <stephan at ehilb dot de>
//      <lucky at zankt dot net>
//      Benjamin Kellermann <Benjamin dot Kellermann at gmx dot Germany>
//      Erik Streb <mail at erikstreb dot de>
//        and many other contributors
//
//      http://www.neo-layout.org
//
// $Revision$, $Date$

partial alphanumeric_keys modifier_keys keypad_keys
//This is the 1st line of Linux\Neo_snippet_Colemak_DH.cpp which corresponds to the 307th line of Linux\de.cpp

xkb_symbols "neo_base" {

    // Levels in Neo jargon
    // --------------------------------------------------------------
    // Ebene 1: normal
    // Ebene 2: Shift
    // Ebene 3: Mod3
    // Ebene 4: Mod4 (for marking something use Shift + Mod4)
    // Ebene 5: Shift + Mod3
    // Ebene 6: Mod3 + Mod4
    // Compose (not a level): Mod3 + Tab
    // Feststelltaste (Capslock): Shift + Shift
    // Mod4-Lock: Mod4 + Mod4
    // Mod4-Lock: Shift + Mod3 + Tab

    // Legend
    // ===============
    // Levels in Xkbmap jargon to be found here in the definitions. 
    // These are the levels used, and Xorg's translations:
    // --------------------------------------------------------------
    // Xorg:       Level1                   Level2                   Level3                   Level4                   Level5                   Level6                   Level7                   Level8                   
    // Neo:        Ebene1                   Ebene2                   Ebene3                   Ebene5                   Ebene4                   Pseudo-Ebene             Ebene6                   ???                      
    // Keys (Neo): None                     Shift                    Mod3                     Mod3 + Shift             Mod4                     Mod4 + Shift             Mod3 + Mod4              Mod3 + Mod4 + Shift      


    // Alphanumeric-keys
    // ===============
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";

    // Tab as Multi_key (Compose)
    // --------------------------------------------------------------
    key  <TAB> { [ Tab,                     ISO_Left_Tab,            U2302,                   ISO_Level5_Lock,         NoSymbol,                NoSymbol,                NoSymbol,                ISO_Level5_Lock          ] };


    // Number row
    // --------------------------------------------------------------
    key <TLDE> { [ dead_circumflex,         dead_caron,              dead_abovedot,           dead_belowdot,           dead_breve,              Pointer_EnableKeys,      U02DE,                   NoSymbol                 ] };

    key <AE01> { [ 1,                       degree,                  U2133,                   U2055,                   ordfeminine,             NoSymbol,                notsign,                 NoSymbol                 ] };
    key <AE02> { [ 2,                       section,                 twosuperior,             twosubscript,            masculine,               NoSymbol,                logicalor,               NoSymbol                 ] };
    key <AE03> { [ 3,                       sterling,                threesuperior,           threesubscript,          U2212,                   NoSymbol,                logicaland,              NoSymbol                 ] };
    key <AE04> { [ 4,                       guillemotright,          U203A,                   femalesymbol,            U2058,                   NoSymbol,                U22A5,                   NoSymbol                 ] };
    key <AE05> { [ 5,                       guillemotleft,           U2039,                   malesymbol,              U2059,                   NoSymbol,                U2221,                   NoSymbol                 ] };
    key <AE06> { [ 6,                       EuroSign,                U2104,                   U26A5,                   currency,                NoSymbol,                U2225,                   NoSymbol                 ] };

    key <AE07> { [ 7,                       notequal,                approxeq,                U03F0,                   U2685,                   NoSymbol,                identical,               NoSymbol                 ] };
    key <AE08> { [ 8,                       doublelowquotemark,      singlelowquotemark,      U27E8,                   U2684,                   ISO_Left_Tab,            U017F,                   NoSymbol                 ] };
    key <AE09> { [ 9,                       leftdoublequotemark,     leftsinglequotemark,     U27E9,                   U2683,                   KP_Divide,               U2610,                   NoSymbol                 ] };
    key <AE10> { [ 0,                       rightdoublequotemark,    rightsinglequotemark,    enfilledcircbullet,      KP_7,                    KP_Multiply,             emptyset,                NoSymbol                 ] };
    key <AE11> { [ grave,                   division,                dead_grave,              Greek_eta,               KP_8,                    KP_Subtract,             U2135,                   NoSymbol                 ] };
    key <AE12> { [ asciitilde,              multiply,                dead_tilde,              dead_dasia,              KP_9,                    NoSymbol,                dead_macron,             NoSymbol                 ] };

    // Top row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD01> { [ q,                       Q,                       U232C,                   U03D5,                   Prior,                   Prior,                   U211A,                   NoSymbol                 ] };
    key <AD02> { [ w,                       W,                       plus,                    Greek_omega,             BackSpace,               BackSpace,               Greek_OMEGA,             NoSymbol                 ] };
    key <AD03> { [ f,                       F,                       braceleft,               Greek_phi,               Up,                      Up,                      Greek_PHI,               NoSymbol                 ] };
    key <AD04> { [ p,                       P,                       Greek_pi,                U205B,                   Delete,                  Delete,                  Greek_PI,                NoSymbol                 ] };
    key <AD05> { [ b,                       B,                       braceright,              Greek_beta,              Next,                    Next,                    Greek_GAMMA,             NoSymbol                 ] };
   
    key <AD06> { [ j,                       J,                       U300C,                   Greek_theta,             U2682,                   NoSymbol,                Greek_THETA,             NoSymbol                 ] };
    key <AD07> { [ l,                       L,                       U2113,                   Greek_lambda,            U2681,                   U2466,                   Greek_LAMBDA,            NoSymbol                 ] };
    key <AD08> { [ u,                       U,                       U300D,                   U205C,                   U2680,                   U2467,                   U2203,                   NoSymbol                 ] };
    key <AD09> { [ y,                       Y,                       asterisk,                Greek_upsilon,           KP_4,                    U2468,                   nabla,                   NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AD10> { [ apostrophe,              quotedbl,                ampersand,               U03F5,                   KP_5,                    KP_Add,                  intersection,            NoSymbol                 ] };
    key <AD11> { [ minus,                   underscore,              asciicircum,             Greek_finalsmallsigma,   KP_6,                    NoSymbol,                jot,                     NoSymbol                 ] };
    key <AD12> { [ dead_abovering,          U21BB,                   ellipsis,                dead_psili,              U203B,                   NoSymbol,                dead_doubleacute,        NoSymbol                 ] };

    // Middle row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AC01> { [ a,                       A,                       U0D9E,                   Greek_alpha,             Home,                    Home,                    U2200,                   NoSymbol                 ] };
    key <AC02> { [ r,                       R,                       dead_acute,              Greek_rho,               Left,                    Left,                    U211D,                   NoSymbol                 ] };
    key <AC03> { [ s,                       S,                       bracketleft,             Greek_sigma,             Down,                    Down,                    Greek_SIGMA,             NoSymbol                 ] };
    key <AC04> { [ t,                       T,                       bracketright,            Greek_tau,               Right,                   Right,                   partialderivative,       NoSymbol                 ] };
    key <AC05> { [ g,                       G,                       U210A,                   Greek_gamma,             End,                     End,                     Greek_PSI,               NoSymbol                 ] };

    key <AC06> { [ m,                       M,                       dollar,                  Greek_mu,                U2318,                   NoSymbol,                U204A,                   NoSymbol                 ] };
    key <AC07> { [ n,                       N,                       parenleft,               Greek_nu,                U0E3F,                   U2463,                   U2115,                   NoSymbol                 ] };
    key <AC08> { [ e,                       E,                       parenright,              Greek_epsilon,           dead_diaeresis,          U2464,                   uparrow,                 NoSymbol                 ] };
    key <AC09> { [ i,                       I,                       colon,                   Greek_iota,              KP_1,                    U2465,                   integral,                NoSymbol                 ] };
    key <AC10> { [ o,                       O,                       semicolon,               Greek_omicron,           KP_2,                    U24EA,                   elementof,               NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AC11> { [ Multi_key,               dead_cedilla,            percent,                 U205D,                   KP_3,                    KP_Decimal,              union,                   NoSymbol                 ] };

    // Bottom row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AB01> { [ x,                       X,                       U221C,                   Greek_xi,                Escape,                  Escape,                  Greek_XI,                NoSymbol                 ] };
    key <AB02> { [ c,                       C,                       U221B,                   Greek_chi,               includedin,              Tab,                     U2102,                   NoSymbol                 ] };
    key <AB03> { [ d,                       D,                       radical,                 Greek_delta,             Insert,                  Insert,                  Greek_DELTA,             NoSymbol                 ] };
    key <AB04> { [ v,                       V,                       backslash,               U205E,                   Return,                  Return,                  U2234,                   NoSymbol                 ] };
    key <AB05> { [ z,                       Z,                       bar,                     Greek_zeta,              U205A,                   Redo,                    U2124,                   NoSymbol                 ] };

    key <AB06> { [ k,                       K,                       numbersign,              Greek_kappa,             variation,               U2051,                   U2235,                   NoSymbol                 ] };
    key <AB07> { [ h,                       H,                       at,                      Greek_psi,               U221E,                   U2460,                   leftarrow,               NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AB08> { [ comma,                   less,                    exclam,                  U03F1,                   U2755,                   U2461,                   downarrow,               NoSymbol                 ] };
    key <AB09> { [ period,                  greater,                 equal,                   U03D1,                   KP_0,                    U2462,                   rightarrow,              NoSymbol                 ] };
    key <AB10> { [ slash,                   question,                dead_stroke,             U2011,                   U2754,                   U21CC,                   U204F,                   NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";

    // Space key
    // --------------------------------------------------------------
    key <SPCE> { [ space,                   space,                   space,                   nobreakspace,            space,                   space,                   U202F,                   NoSymbol                 ] };


    // Keypad-keys 
    // ===============

    // The former Numlock key:
    key <NMLK> { [ Tab,                     ISO_Left_Tab,            U2042,                   U21A6,                   U2051,                   Pointer_EnableKeys,      U00AD,                   NoSymbol                 ] };

    // Topmost row
    // --------------------------------------------------------------
    key <KPDV> { [ KP_Divide,               KP_Divide,               U2215,                   U2300,                   U2044,                   NoSymbol,                U2223,                   NoSymbol                 ] };
    key <KPMU> { [ KP_Multiply,             KP_Multiply,             U22C5,                   U2299,                   periodcentered,          NoSymbol,                U2297,                   NoSymbol                 ] };
    key <KPSU> { [ KP_Subtract,             KP_Subtract,             U2212,                   U2296,                   U2216,                   NoSymbol,                U2238,                   NoSymbol                 ] };

    // Top row
    // --------------------------------------------------------------
    key  <KP7> { [ KP_7,                    U2714,                   U21D5,                   U226A,                   KP_Home,                 KP_Home,                 upstile,                 NoSymbol                 ] };
    key  <KP8> { [ KP_8,                    U2718,                   U21D1,                   intersection,            KP_Up,                   KP_Up,                   U22C2,                   NoSymbol                 ] };
    key  <KP9> { [ KP_9,                    dagger,                  U20D7,                   U226B,                   KP_Prior,                KP_Prior,                U2309,                   NoSymbol                 ] };
    key <KPAD> { [ KP_Add,                  KP_Add,                  plusminus,               U2295,                   U2213,                   NoSymbol,                U2214,                   NoSymbol                 ] };

    // Middle row
    // --------------------------------------------------------------
    key  <KP4> { [ KP_4,                    club,                    U21D0,                   includedin,              KP_Left,                 KP_Left,                 U2286,                   NoSymbol                 ] };
    key  <KP5> { [ KP_5,                    U2605,                   U204A,                   U22B6,                   KP_Begin,                KP_Begin,                U22B7,                   NoSymbol                 ] };
    key  <KP6> { [ KP_6,                    U2023,                   U21D2,                   includes,                KP_Right,                KP_Right,                U2287,                   NoSymbol                 ] };

    // Bottom row
    // --------------------------------------------------------------
    key  <KP1> { [ KP_1,                    diamond,                 ifonlyif,                lessthanequal,           KP_End,                  KP_End,                  downstile,               NoSymbol                 ] };
    key  <KP2> { [ KP_2,                    heart,                   U21D3,                   union,                   KP_Down,                 KP_Down,                 U22C3,                   NoSymbol                 ] };
    key  <KP3> { [ KP_3,                    U2660,                   U21CC,                   greaterthanequal,        KP_Next,                 KP_Next,                 U230B,                   NoSymbol                 ] };
    key <KPEN> { [ KP_Enter,                KP_Enter,                KP_Enter,                KP_Enter,                KP_Enter,                KP_Enter,                KP_Enter,                NoSymbol                 ] };
    key <KPEQ> { [ KP_Equal,                NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol                 ] };

    // Bottommost row
    // --------------------------------------------------------------
    key  <KP0> { [ KP_0,                    U2423,                   U211E,                   U2030,                   endash,                  KP_Insert,               U25A1,                   NoSymbol                 ] };
    key <KPDL> { [ period,                  KP_Separator,            comma,                   minutes,                 emdash,                  KP_Delete,               seconds,                 NoSymbol                 ] };
};

partial alphanumeric_keys modifier_keys keypad_keys
xkb_symbols "neo" {

    include "de(neo_base)"

    name[Group1]= "German (Neo 2)";

    include "shift(both_capslock)"
    include "level3(caps_switch)"
    include "level3(bksl_switch)"
    include "level5(lsgt_switch_lock)"
    include "level5(ralt_switch_lock)"
};

// Copied from macintosh_vndr/de
// olh@suse.de   very close to MacOS map

partial alphanumeric_keys
xkb_symbols "mac" {

    include "de"
    name[Group1]= "German (Macintosh)";

    key <AE01>	{ [         1,     exclam,   exclamdown,           at ]	};
    key <AE05>	{ [         5,    percent,  bracketleft       ]	};
    key <AE06>	{ [         6,  ampersand, bracketright       ]	};
    key <AE07>	{ [         7,      slash,          bar,    backslash ]	};
    key <AE08>	{ [         8,  parenleft,    braceleft,   asciitilde ]	};
    key <AE09>	{ [         9, parenright,   braceright       ]	};
    key <AD01>	{ [         q,          Q, guillemotleft, guillemotright ]	};
    key <AD04>	{ [         r,          R,   registered       ]	};
    key <AD07>	{ [         u,          U,    diaeresis,       Aacute ]	};
    key <AD08>	{ [         i,          I,        slash,  Ucircumflex ]	};
    key <AD11>	{ [ udiaeresis, Udiaeresis, periodcentered,    degree ]	};
    key <AD12>	{ [      plus,   asterisk,   asciitilde       ]	};
    key <AC01>	{ [         a,          A,        aring,        Aring ]	};
    key <AC05>	{ [         g,          G,    copyright       ]	};
    key <AC06>	{ [         h,          H,  ordfeminine       ]	};
    key <AC09>	{ [         l,          L,           at       ]	};
    key <AC10>	{ [ odiaeresis, Odiaeresis,  dead_acute       ]	};
    key <AB06>	{ [         n,          N,   asciitilde       ]	};

};

partial alphanumeric_keys
xkb_symbols "mac_nodeadkeys" {
    // modify the standard German mac layout to not have any dead keys
    include "de(mac)"
    name[Group1]= "German (Macintosh, no dead keys)";

    key <TLDE>	{ [ asciicircum,    degree,     notsign       ]	};
    key <AE04>	{ [          4,     dollar,  onequarter,     currency ]	};
    key <AE12>	{ [      acute,      grave,     cedilla       ]	};
    key <AD11>	{ [ udiaeresis, Udiaeresis,   diaeresis       ]	};
    key <AD12>	{ [       plus,   asterisk,  asciitilde,       macron ]	};
    key <AC10>	{ [ odiaeresis, Odiaeresis,       acute       ]	};
    key <AC11>	{ [ adiaeresis, Adiaeresis, asciicircum       ]	};

    key <BKSL>	{ [ numbersign, apostrophe, rightsinglequotemark ] };
};

partial alphanumeric_keys
xkb_symbols "dsb"
{
	include "latin(basic)"
	name[Group1] = "Lower Sorbian";
	key <AB01> { [              z,              Z,         zcaron,         Zcaron ] };
	key <AB02> { [              x,              X,         zacute,         Zacute ] };
	key <AB03> { [              c,              C,         cacute,         Cacute ] };
	key <AB04> { [              v,              V,         ccaron,         Ccaron ] };
	key <AB06> { [              n,              N,         nacute,         Nacute ] };
	key <AC02> { [              s,              S,         sacute,         Sacute ] };
	key <AC03> { [              d,              D,         scaron,         Scaron ] };
	key <AC04> { [              f,              F                                 ] };
	key <AD01> { [              q,              Q                                 ] };
	key <AD02> { [              w,              W                                 ] };
	key <AD03> { [              e,              E,         ecaron,         Ecaron ] };
	key <AD04> { [              r,              R,         racute,         Racute ] };
	key <AD05> { [              t,              T,          U20B5,       EuroSign ] };
	key <AD09> { [              o,              O,         oacute,         Oacute ] };
	include "kpdl(comma)"
	include "level3(ralt_switch)"
};

partial alphanumeric_keys
xkb_symbols "dsb_qwertz"
{
	include "latin(basic)"
	name[Group1] = "Lower Sorbian (QWERTZ)";
	key <AB01> { [              y,              Y                                 ] };
	key <AB02> { [              x,              X                                 ] };
	key <AB03> { [              c,              C,         cacute,         Cacute ] };
	key <AB04> { [              v,              V,         ccaron,         Ccaron ] };
	key <AB06> { [              n,              N,         nacute,         Nacute ] };
	key <AC02> { [              s,              S,         sacute,         Sacute ] };
	key <AC03> { [              d,              D,         scaron,         Scaron ] };
	key <AC04> { [              f,              F                                 ] };
	key <AD01> { [              q,              Q                                 ] };
	key <AD02> { [              w,              W                                 ] };
	key <AD03> { [              e,              E,         ecaron,         Ecaron ] };
	key <AD04> { [              r,              R,         racute,         Racute ] };
	key <AD05> { [              t,              T,          U20B5,       EuroSign ] };
	key <AD06> { [              z,              Z,         zcaron,         Zcaron ] };
	key <AD07> { [              u,              U,         zacute,         Zacute ] };
	key <AD09> { [              o,              O,         oacute,         Oacute ] };
	include "kpdl(comma)"
	include "level3(ralt_switch)"
};

partial alphanumeric_keys
xkb_symbols "qwerty" {

    // This layout should work exactly as a de with the exception 
    // of 'Z' and 'Y' keys, which are in the qwerty style (ie. swapped).
    // 2008 by Matej Košík <kosik@fiit.stuba.sk>

    include "de(basic)"

    name[Group1] = "German (QWERTY)";

    key <AB01>	{ [         z,          Z,     leftarrow,         yen ]	};
    key <AD06>	{ [         y,          Y, guillemotleft,        less ]	};
};

// layout for Russian letters on an german keyboard
// based on US-RU layout by Ivan Popov <pin@konvalo.org> 2005-07-17
// adopted for german layout by Alexey Fisher <bug-track@fisher-privat.net> 2010-08-19

partial alphanumeric_keys
xkb_symbols "ru" {

    include "de(basic)"

    name[Group1]= "Russian (Germany, phonetic)";

    key <LatA> { [        Cyrillic_a,        Cyrillic_A ] };
    key <LatB> { [       Cyrillic_be,       Cyrillic_BE ] };
    key <LatW> { [       Cyrillic_ve,       Cyrillic_VE ] };
    key <LatG> { [      Cyrillic_ghe,      Cyrillic_GHE ] };
    key <LatD> { [       Cyrillic_de,       Cyrillic_DE ] };
    key <LatE> { [       Cyrillic_ie,       Cyrillic_IE ] };
    key <TLDE> { [       Cyrillic_io,       Cyrillic_IO, asciitilde ] };
    key <LatX> { [      Cyrillic_zhe,      Cyrillic_ZHE ] };
    key <LatZ> { [       Cyrillic_ze,       Cyrillic_ZE ] };
    key <LatI> { [        Cyrillic_i,        Cyrillic_I ] };
    key <LatJ> { [   Cyrillic_shorti,   Cyrillic_SHORTI ] };
    key <LatK> { [       Cyrillic_ka,       Cyrillic_KA ] };
    key <LatL> { [       Cyrillic_el,       Cyrillic_EL ] };
    key <LatM> { [       Cyrillic_em,       Cyrillic_EM ] };
    key <LatN> { [       Cyrillic_en,       Cyrillic_EN ] };
    key <LatO> { [        Cyrillic_o,        Cyrillic_O ] };
    key <LatP> { [       Cyrillic_pe,       Cyrillic_PE ] };
    key <LatR> { [       Cyrillic_er,       Cyrillic_ER ] };
    key <LatS> { [       Cyrillic_es,       Cyrillic_ES ] };
    key <LatT> { [       Cyrillic_te,       Cyrillic_TE ] };
    key <LatU> { [        Cyrillic_u,        Cyrillic_U ] };
    key <LatF> { [       Cyrillic_ef,       Cyrillic_EF ] };
    key <LatH> { [       Cyrillic_ha,       Cyrillic_HA ] };
    key <LatC> { [      Cyrillic_tse,      Cyrillic_TSE ] };
    key <AC10> { [      Cyrillic_che,      Cyrillic_CHE ] };
    key <AD11> { [      Cyrillic_sha,      Cyrillic_SHA ] };
    key <AD12> { [    Cyrillic_shcha,    Cyrillic_SHCHA, plus, asterisk ] };
    key <AE12> { [ Cyrillic_hardsign, Cyrillic_HARDSIGN ] };
    key <LatY> { [     Cyrillic_yeru,     Cyrillic_YERU ] };
    key <LatV> { [ Cyrillic_softsign, Cyrillic_SOFTSIGN ] };
    key <AC11> { [        Cyrillic_e,        Cyrillic_E ] };
    key <BKSL> { [       Cyrillic_yu,       Cyrillic_YU, numbersign, apostrophe ] };
    key <LatQ> { [       Cyrillic_ya,       Cyrillic_YA ] };

    include "level3(ralt_switch)"
};

// layout for Russian (recommended) letters on a german keyboard
// based on "Russisch für Deutsche, empfohlen" by B. Bendixen und H. Rothe http://russisch.urz.uni-leipzig.de/key2000.htm 2016-02-01
// adapted for Linux by Niko Krause <nikokrause@gmx.de> 2016-06-09

partial alphanumeric_keys
xkb_symbols "ru-recom" {

    include "de(basic)"

    name[Group1]= "Russian (Germany, recommended)";

    key <LatA> { [        Cyrillic_a,        Cyrillic_A ] };
    key <LatB> { [       Cyrillic_be,       Cyrillic_BE ] };
    key <LatW> { [       Cyrillic_ve,       Cyrillic_VE ] };
    key <LatG> { [      Cyrillic_ghe,      Cyrillic_GHE, Ukrainian_ghe_with_upturn, Ukrainian_GHE_WITH_UPTURN ] };
    key <LatD> { [       Cyrillic_de,       Cyrillic_DE ] };
    key <LatE> { [       Cyrillic_ie,       Cyrillic_IE ] };
    key <TLDE> { [       Cyrillic_ya,       Cyrillic_YA, asciicircum, degree ] };
    key <LatX> { [      Cyrillic_ha,      Cyrillic_HA ] };
    key <LatZ> { [       Cyrillic_tse,       Cyrillic_TSE ] };
    key <LatI> { [        Cyrillic_i,        Cyrillic_I, Ukrainian_i,  Ukrainian_I ] };
    key <LatJ> { [   Cyrillic_shorti,   Cyrillic_SHORTI, Ukrainian_yi, Ukrainian_YI ] };
    key <LatK> { [       Cyrillic_ka,       Cyrillic_KA ] };
    key <LatL> { [       Cyrillic_el,       Cyrillic_EL ] };
    key <LatM> { [       Cyrillic_em,       Cyrillic_EM ] };
    key <LatN> { [       Cyrillic_en,       Cyrillic_EN ] };
    key <LatO> { [        Cyrillic_o,        Cyrillic_O ] };
    key <LatP> { [       Cyrillic_pe,       Cyrillic_PE ] };
    key <LatR> { [       Cyrillic_er,       Cyrillic_ER ] };
    key <LatS> { [       Cyrillic_es,       Cyrillic_ES, Cyrillic_ze, Cyrillic_ZE ] };
    key <LatT> { [       Cyrillic_te,       Cyrillic_TE ] };
    key <LatU> { [        Cyrillic_u,        Cyrillic_U ] };
    key <LatF> { [       Cyrillic_ef,       Cyrillic_EF ] };
    key <LatH> { [       Cyrillic_zhe,       Cyrillic_ZHE ] };
    key <LatC> { [      Cyrillic_che,      Cyrillic_CHE ] };
    key <AC10> { [      Cyrillic_io,      Cyrillic_IO ] };
    key <AD11> { [      Cyrillic_yu,      Cyrillic_YU ] };
    key <AD12> { [    Cyrillic_sha,    Cyrillic_SHA, plus, asterisk ] };
    key <LSGT> { [ Cyrillic_ze, Cyrillic_ZE ] };
    key <LatY> { [     Cyrillic_yeru,     Cyrillic_YERU ] };
    key <LatV> { [ Cyrillic_softsign, Cyrillic_SOFTSIGN ] };
    key <AC11> { [        Cyrillic_e,        Cyrillic_E, Ukrainian_ie, Ukrainian_IE ] };
    key <BKSL> { [       Cyrillic_hardsign,       Cyrillic_HARDSIGN, numbersign, apostrophe ] };
    key <LatQ> { [       Cyrillic_shcha,       Cyrillic_SHCHA ] };

    key <AE11> { [ asciitilde, question, backslash, questiondown ] };
    key <AE12>	{ [     U0301,      U0300,      U0323,      U0307 ]	};

    include "level3(ralt_switch)"
};

// layout for Russian (transliteration) letters on a german keyboard
// based on "Russisch für Deutsche, Transliteration" by B. Bendixen und H. Rothe http://russisch.urz.uni-leipzig.de/key2000.htm 2016-02-01
// adapted for Linux by Niko Krause <nikokrause@gmx.de> 2016-06-09

partial alphanumeric_keys
xkb_symbols "ru-translit" {

    include "de(basic)"

    name[Group1]= "Russian (Germany, transliteration)";

    key <LatA> { [        Cyrillic_a,        Cyrillic_A ] };
    key <LatB> { [       Cyrillic_be,       Cyrillic_BE ] };
    key <LatW> { [       Cyrillic_sha,       Cyrillic_SHA ] };
    key <LatG> { [      Cyrillic_ghe,      Cyrillic_GHE, Ukrainian_ghe_with_upturn, Ukrainian_GHE_WITH_UPTURN ] };
    key <LatD> { [       Cyrillic_de,       Cyrillic_DE ] };
    key <LatE> { [       Cyrillic_ie,       Cyrillic_IE ] };
    key <TLDE> { [       Cyrillic_ya,       Cyrillic_YA, asciicircum, degree ] };
    key <LatX> { [      Cyrillic_ha,      Cyrillic_HA ] };
    key <LatZ> { [       Cyrillic_ze,       Cyrillic_ZE ] };
    key <LatI> { [        Cyrillic_i,        Cyrillic_I, Ukrainian_i,  Ukrainian_I ] };
    key <LatJ> { [   Cyrillic_shorti,   Cyrillic_SHORTI, Ukrainian_yi, Ukrainian_YI ] };
    key <LatK> { [       Cyrillic_ka,       Cyrillic_KA ] };
    key <LatL> { [       Cyrillic_el,       Cyrillic_EL ] };
    key <LatM> { [       Cyrillic_em,       Cyrillic_EM ] };
    key <LatN> { [       Cyrillic_en,       Cyrillic_EN ] };
    key <LatO> { [        Cyrillic_o,        Cyrillic_O ] };
    key <LatP> { [       Cyrillic_pe,       Cyrillic_PE ] };
    key <LatR> { [       Cyrillic_er,       Cyrillic_ER ] };
    key <LatS> { [       Cyrillic_es,       Cyrillic_ES, Cyrillic_che, Cyrillic_CHE ] };
    key <LatT> { [       Cyrillic_te,       Cyrillic_TE ] };
    key <LatU> { [        Cyrillic_u,        Cyrillic_U ] };
    key <LatF> { [       Cyrillic_ef,       Cyrillic_EF ] };
    key <LatH> { [       Cyrillic_zhe,       Cyrillic_ZHE ] };
    key <LatC> { [      Cyrillic_tse,      Cyrillic_TSE ] };
    key <AC10> { [      Cyrillic_io,      Cyrillic_IO ] };
    key <AD11> { [      Cyrillic_yu,      Cyrillic_YU ] };
    key <AD12> { [    Cyrillic_hardsign,    Cyrillic_HARDSIGN, plus, asterisk ] };
    key <LSGT> { [ Cyrillic_che, Cyrillic_CHE ] };
    key <LatY> { [     Cyrillic_yeru,     Cyrillic_YERU ] };
    key <LatV> { [ Cyrillic_ve, Cyrillic_VE ] };
    key <AC11> { [        Cyrillic_e,        Cyrillic_E, Ukrainian_ie, Ukrainian_IE ] };
    key <BKSL> { [       Cyrillic_softsign,       Cyrillic_SOFTSIGN, numbersign, apostrophe ] };
    key <LatQ> { [       Cyrillic_shcha,       Cyrillic_SHCHA ] };

    key <AE11> { [ asciitilde, question, backslash, questiondown ] };
    key <AE12>	{ [     U0301,      U0300,      U0323,      U0307 ]	};

    include "level3(ralt_switch)"
};

partial alphanumeric_keys
xkb_symbols "pl" {

    // Combined layout for entering both German and Polish symbols on a German physical
    // keyboard. Based on German (no dead keys) and Polish (basic). Polish diacritics
    // on AltGr+"acelnosxz". EuroSign moved to AE04 (AltGr+dollar key) to avoid conflict
    // with Polish eogonek.
    //
    // https://github.com/kontextify/xkeyboard-config

    include "latin(type4)"
 
    name[Group1]= "Polish (Germany, no dead keys)";

    include "de(nodeadkeys)"
    key <AE04>	{ [         4,     dollar,   EuroSign,     currency ]	};

    key <AD01>  { [         q,          Q ] };
    key <AD02>  { [         w,          W ] };
    key <AD03>	{ [         e,          E,      eogonek,      Eogonek ]	};
    key <AD09>	{ [         o,          O,       oacute,       Oacute ]	};
    key <AC01>	{ [         a,          A,      aogonek,      Aogonek ]	};
    key <AC02>	{ [         s,          S,       sacute,       Sacute ]	};
    key <AC04>  { [         f,          F ] };
    key <AD06>	{ [         z,          Z,    zabovedot,    Zabovedot ]	};
    key <AB02>	{ [         x,          X,       zacute,       Zacute ]	};
    key <AB03>	{ [         c,          C,       cacute,       Cacute ]	};
    key <AB06>	{ [         n,          N,       nacute,       Nacute ]	};

    include "kpdl(comma)"

    include "level3(ralt_switch)"
};

partial alphanumeric_keys
xkb_symbols "tr" {

    // add turkish-specific letters to the basic German layout.
    // Turkish symbols are accessible with combination of <AltGr> and
    // 'i', 's', 'g', 'c'' (+<Shift> for capital letters).

    include "de(basic)"

    name[Group1]="Turkish (Germany)";

    key <AD08>  { [    i,      I,      U0131,  U0130   ] };
    key <AC02>  { [    s,      S,      U015F,  U015E   ] };
    key <AC05>  { [    g,      G,      U011F,  U011E   ] };
    key <AB03>  { [    c,      C,      U0E7,   U0C7    ] };

};

// EXTRAS:

partial alphanumeric_keys
xkb_symbols "us" {
    include "us"

    name[Group1]="German (US, with German letters)";

    key <AC01> { [           a,          A, adiaeresis, Adiaeresis ] };
    key <AC02> { [           s,          S,     ssharp,      U1E9E ] };
    key <AC10> { [   semicolon,      colon, odiaeresis, Odiaeresis ] };
    key <AC11> { [  apostrophe,   quotedbl, adiaeresis, Adiaeresis ] };
    key <AD03> { [           e,          E,   EuroSign,   EuroSign ] };
    key <AD07> { [           u,          U, udiaeresis, Udiaeresis ] };
    key <AD09> { [           o,          O, odiaeresis, Odiaeresis ] };
    key <AD11> { [ bracketleft,  braceleft, udiaeresis, Udiaeresis ] };
    key <AE03> { [           3, numbersign,    section,    section ] };
    key <AE11> { [       minus, underscore,     ssharp,   question ] };

    include "level3(ralt_switch)"
};

partial alphanumeric_keys
xkb_symbols "hu" {

    // modify the basic German layout to not have any dead keys and add Hungarian letters

    include "de(basic)"
    name[Group1]="German (with Hungarian letters and no dead keys)";

    key <AB01> { [         y,          Y,        guillemotleft,         less ] };
    key <AC10> { [odiaeresis, Odiaeresis,               eacute,       Eacute ] };
    key <AC11> { [adiaeresis, Adiaeresis,               aacute,        Aacute] };
    key <AD03> { [         e,          E,             EuroSign,     EuroSign ] };
    key <AD06> { [         z,          Z,            leftarrow,          yen ] };
    key <AD07> { [         u,          U,               uacute,       Uacute ] };
    key <AD08> { [         i,          I,               iacute,       Iacute ] };
    key <AD09> { [         o,          O,         odoubleacute, Odoubleacute ] };
    key <AD11> { [udiaeresis, Udiaeresis,         udoubleacute, Udoubleacute ] };
    key <AD12> { [      plus,   asterisk,           asciitilde,       macron ] };
    key <AE12> { [     acute,      grave,               oacute,       Oacute ] };
    key <BKSL> { [numbersign, apostrophe, rightsinglequotemark,        grave ] };
    key <TLDE> { [asciicircum,    degree,              notsign,      notsign ] };
};

partial alphanumeric_keys
	xkb_symbols "sun_type6" {
	include "sun_vndr/de(sun_type6)"
};

partial alphanumeric_keys
xkb_symbols "adnw_base" {
    include "de(neo_base)"

    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AD04> { [ period,                  enfilledcircbullet,      NoSymbol,                U03D1,                   NoSymbol,                NoSymbol,                U21A6,                   NoSymbol                 ] };
    key <AB04> { [ comma,                   endash,                  NoSymbol,                U03F1,                   NoSymbol,                NoSymbol,                U21D2,                   NoSymbol                 ] };

    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD01> { [ k,                       K,                       NoSymbol,                Greek_kappa,             NoSymbol,                NoSymbol,                multiply,                NoSymbol                 ] };
    key <AD02> { [ u,                       U,                       NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                includedin,              NoSymbol                 ] };
    key <AD03> { [ udiaeresis,              Udiaeresis,              NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                union,                   NoSymbol                 ] };
    key <AD05> { [ adiaeresis,              Adiaeresis,              NoSymbol,                Greek_eta,               NoSymbol,                NoSymbol,                U2135,                   NoSymbol                 ] };
    key <AD06> { [ v,                       V,                       NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                radical,                 NoSymbol                 ] };
    key <AD07> { [ g,                       G,                       NoSymbol,                Greek_gamma,             NoSymbol,                NoSymbol,                Greek_GAMMA,             NoSymbol                 ] };
    key <AD08> { [ c,                       C,                       NoSymbol,                Greek_chi,               NoSymbol,                NoSymbol,                U2102,                   NoSymbol                 ] };
    key <AD09> { [ l,                       L,                       NoSymbol,                Greek_lambda,            NoSymbol,                NoSymbol,                Greek_LAMBDA,            NoSymbol                 ] };
    key <AD10> { [ j,                       J,                       NoSymbol,                Greek_theta,             NoSymbol,                NoSymbol,                Greek_THETA,             NoSymbol                 ] };
    key <AD11> { [ f,                       F,                       NoSymbol,                Greek_phi,               NoSymbol,                NoSymbol,                Greek_PHI,               NoSymbol                 ] };
    key <AC01> { [ h,                       H,                       NoSymbol,                Greek_psi,               NoSymbol,                NoSymbol,                Greek_PSI,               NoSymbol                 ] };
    key <AC02> { [ i,                       I,                       NoSymbol,                Greek_iota,              NoSymbol,                NoSymbol,                integral,                NoSymbol                 ] };
    key <AC03> { [ e,                       E,                       NoSymbol,                Greek_epsilon,           NoSymbol,                NoSymbol,                U2203,                   NoSymbol                 ] };
    key <AC04> { [ a,                       A,                       NoSymbol,                Greek_alpha,             NoSymbol,                NoSymbol,                U2200,                   NoSymbol                 ] };
    key <AC05> { [ o,                       O,                       NoSymbol,                Greek_omicron,           NoSymbol,                NoSymbol,                elementof,               NoSymbol                 ] };
    key <AC06> { [ d,                       D,                       NoSymbol,                Greek_delta,             NoSymbol,                NoSymbol,                Greek_DELTA,             NoSymbol                 ] };
    key <AC07> { [ t,                       T,                       NoSymbol,                Greek_tau,               NoSymbol,                NoSymbol,                partialderivative,       NoSymbol                 ] };
    key <AC08> { [ r,                       R,                       NoSymbol,                Greek_rho,               NoSymbol,                NoSymbol,                U211D,                   NoSymbol                 ] };
    key <AC09> { [ n,                       N,                       NoSymbol,                Greek_nu,                NoSymbol,                NoSymbol,                U2115,                   NoSymbol                 ] };
    key <AC10> { [ s,                       S,                       NoSymbol,                Greek_sigma,             NoSymbol,                NoSymbol,                Greek_SIGMA,             NoSymbol                 ] };
    key <AC11> { [ ssharp,                  U1E9E,                   NoSymbol,                Greek_finalsmallsigma,   NoSymbol,                NoSymbol,                jot,                     NoSymbol                 ] };
    key <AB01> { [ x,                       X,                       NoSymbol,                Greek_xi,                NoSymbol,                NoSymbol,                Greek_XI,                NoSymbol                 ] };
    key <AB02> { [ y,                       Y,                       NoSymbol,                Greek_upsilon,           NoSymbol,                NoSymbol,                nabla,                   NoSymbol                 ] };
    key <AB03> { [ odiaeresis,              Odiaeresis,              NoSymbol,                U03F5,                   NoSymbol,                NoSymbol,                intersection,            NoSymbol                 ] };
    key <AB05> { [ q,                       Q,                       NoSymbol,                U03D5,                   NoSymbol,                NoSymbol,                U211A,                   NoSymbol                 ] };
    key <AB06> { [ b,                       B,                       NoSymbol,                Greek_beta,              NoSymbol,                NoSymbol,                U21D0,                   NoSymbol                 ] };
    key <AB07> { [ p,                       P,                       NoSymbol,                Greek_pi,                NoSymbol,                NoSymbol,                Greek_PI,                NoSymbol                 ] };
    key <AB08> { [ w,                       W,                       NoSymbol,                Greek_omega,             NoSymbol,                NoSymbol,                Greek_OMEGA,             NoSymbol                 ] };
    key <AB09> { [ m,                       M,                       NoSymbol,                Greek_mu,                NoSymbol,                NoSymbol,                ifonlyif,                NoSymbol                 ] };
    key <AB10> { [ z,                       Z,                       NoSymbol,                Greek_zeta,              NoSymbol,                NoSymbol,                U2124,                   NoSymbol                 ] };
};

partial alphanumeric_keys modifier_keys keypad_keys
xkb_symbols "adnw" {

    include "de(adnw_base)"

    name[Group1]= "German (Aus der Neo-Welt)";

    include "shift(both_capslock)"
    include "level3(caps_switch)"
    include "level3(bksl_switch)"
    include "level5(ralt_switch_lock)"
    include "level5(lwin_switch_lock)"
};

partial alphanumeric_keys
xkb_symbols "koy_base" {
    include "de(neo_base)"

    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AD02> { [ period,                  enfilledcircbullet,      NoSymbol,                U03D1,                   NoSymbol,                NoSymbol,                U21A6,                   NoSymbol                 ] };
    key <AD04> { [ comma,                   endash,                  NoSymbol,                U03F1,                   NoSymbol,                NoSymbol,                U21D2,                   NoSymbol                 ] };

    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD01> { [ k,                       K,                       NoSymbol,                Greek_kappa,             NoSymbol,                NoSymbol,                multiply,                NoSymbol                 ] };
    key <AD03> { [ o,                       O,                       NoSymbol,                Greek_omicron,           NoSymbol,                NoSymbol,                elementof,               NoSymbol                 ] };
    key <AD05> { [ y,                       Y,                       NoSymbol,                Greek_upsilon,           NoSymbol,                NoSymbol,                nabla,                   NoSymbol                 ] };
    key <AD06> { [ v,                       V,                       NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                radical,                 NoSymbol                 ] };
    key <AD07> { [ g,                       G,                       NoSymbol,                Greek_gamma,             NoSymbol,                NoSymbol,                Greek_GAMMA,             NoSymbol                 ] };
    key <AD08> { [ c,                       C,                       NoSymbol,                Greek_chi,               NoSymbol,                NoSymbol,                U2102,                   NoSymbol                 ] };
    key <AD09> { [ l,                       L,                       NoSymbol,                Greek_lambda,            NoSymbol,                NoSymbol,                Greek_LAMBDA,            NoSymbol                 ] };
    key <AD10> { [ ssharp,                  U1E9E,                   NoSymbol,                Greek_finalsmallsigma,   NoSymbol,                NoSymbol,                jot,                     NoSymbol                 ] };
    key <AD11> { [ z,                       Z,                       NoSymbol,                Greek_zeta,              NoSymbol,                NoSymbol,                U2124,                   NoSymbol                 ] };
    key <AC01> { [ h,                       H,                       NoSymbol,                Greek_psi,               NoSymbol,                NoSymbol,                Greek_PSI,               NoSymbol                 ] };
    key <AC02> { [ a,                       A,                       NoSymbol,                Greek_alpha,             NoSymbol,                NoSymbol,                U2200,                   NoSymbol                 ] };
    key <AC03> { [ e,                       E,                       NoSymbol,                Greek_epsilon,           NoSymbol,                NoSymbol,                U2203,                   NoSymbol                 ] };
    key <AC04> { [ i,                       I,                       NoSymbol,                Greek_iota,              NoSymbol,                NoSymbol,                integral,                NoSymbol                 ] };
    key <AC05> { [ u,                       U,                       NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                includedin,              NoSymbol                 ] };
    key <AC06> { [ d,                       D,                       NoSymbol,                Greek_delta,             NoSymbol,                NoSymbol,                Greek_DELTA,             NoSymbol                 ] };
    key <AC07> { [ t,                       T,                       NoSymbol,                Greek_tau,               NoSymbol,                NoSymbol,                partialderivative,       NoSymbol                 ] };
    key <AC08> { [ r,                       R,                       NoSymbol,                Greek_rho,               NoSymbol,                NoSymbol,                U211D,                   NoSymbol                 ] };
    key <AC09> { [ n,                       N,                       NoSymbol,                Greek_nu,                NoSymbol,                NoSymbol,                U2115,                   NoSymbol                 ] };
    key <AC10> { [ s,                       S,                       NoSymbol,                Greek_sigma,             NoSymbol,                NoSymbol,                Greek_SIGMA,             NoSymbol                 ] };
    key <AC11> { [ f,                       F,                       NoSymbol,                Greek_phi,               NoSymbol,                NoSymbol,                Greek_PHI,               NoSymbol                 ] };
    key <AB01> { [ x,                       X,                       NoSymbol,                Greek_xi,                NoSymbol,                NoSymbol,                Greek_XI,                NoSymbol                 ] };
    key <AB02> { [ q,                       Q,                       NoSymbol,                U03D5,                   NoSymbol,                NoSymbol,                U211A,                   NoSymbol                 ] };
    key <AB03> { [ adiaeresis,              Adiaeresis,              NoSymbol,                Greek_eta,               NoSymbol,                NoSymbol,                U2135,                   NoSymbol                 ] };
    key <AB04> { [ udiaeresis,              Udiaeresis,              NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                union,                   NoSymbol                 ] };
    key <AB05> { [ odiaeresis,              Odiaeresis,              NoSymbol,                U03F5,                   NoSymbol,                NoSymbol,                intersection,            NoSymbol                 ] };
    key <AB06> { [ b,                       B,                       NoSymbol,                Greek_beta,              NoSymbol,                NoSymbol,                U21D0,                   NoSymbol                 ] };
    key <AB07> { [ p,                       P,                       NoSymbol,                Greek_pi,                NoSymbol,                NoSymbol,                Greek_PI,                NoSymbol                 ] };
    key <AB08> { [ w,                       W,                       NoSymbol,                Greek_omega,             NoSymbol,                NoSymbol,                Greek_OMEGA,             NoSymbol                 ] };
    key <AB09> { [ m,                       M,                       NoSymbol,                Greek_mu,                NoSymbol,                NoSymbol,                ifonlyif,                NoSymbol                 ] };
    key <AB10> { [ j,                       J,                       NoSymbol,                Greek_theta,             NoSymbol,                NoSymbol,                Greek_THETA,             NoSymbol                 ] };
};

partial alphanumeric_keys modifier_keys keypad_keys
xkb_symbols "koy" {

    include "de(koy_base)"

    name[Group1]= "German (KOY)";

    include "shift(both_capslock)"
    include "level3(caps_switch)"
    include "level3(bksl_switch)"
    include "level5(ralt_switch_lock)"
};

partial alphanumeric_keys
xkb_symbols "bone_base" {
    include "de(neo_base)"

    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AB08> { [ comma,                   endash,                  NoSymbol,                U03F1,                   NoSymbol,                NoSymbol,                U21D2,                   NoSymbol                 ] };
    key <AB09> { [ period,                  enfilledcircbullet,      NoSymbol,                U03D1,                   NoSymbol,                NoSymbol,                U21A6,                   NoSymbol                 ] };

    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD01> { [ j,                       J,                       NoSymbol,                Greek_theta,             NoSymbol,                NoSymbol,                Greek_THETA,             NoSymbol                 ] };
    key <AD02> { [ d,                       D,                       NoSymbol,                Greek_delta,             NoSymbol,                NoSymbol,                Greek_DELTA,             NoSymbol                 ] };
    key <AD03> { [ u,                       U,                       NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                includedin,              NoSymbol                 ] };
    key <AD04> { [ a,                       A,                       NoSymbol,                Greek_alpha,             NoSymbol,                NoSymbol,                U2200,                   NoSymbol                 ] };
    key <AD05> { [ x,                       X,                       NoSymbol,                Greek_xi,                NoSymbol,                NoSymbol,                Greek_XI,                NoSymbol                 ] };
    key <AD06> { [ p,                       P,                       NoSymbol,                Greek_pi,                NoSymbol,                NoSymbol,                Greek_PI,                NoSymbol                 ] };
    key <AD07> { [ h,                       H,                       NoSymbol,                Greek_psi,               NoSymbol,                NoSymbol,                Greek_PSI,               NoSymbol                 ] };
    key <AD08> { [ l,                       L,                       NoSymbol,                Greek_lambda,            NoSymbol,                NoSymbol,                Greek_LAMBDA,            NoSymbol                 ] };
    key <AD09> { [ m,                       M,                       NoSymbol,                Greek_mu,                NoSymbol,                NoSymbol,                ifonlyif,                NoSymbol                 ] };
    key <AD10> { [ w,                       W,                       NoSymbol,                Greek_omega,             NoSymbol,                NoSymbol,                Greek_OMEGA,             NoSymbol                 ] };
    key <AD11> { [ ssharp,                  U1E9E,                   NoSymbol,                Greek_finalsmallsigma,   NoSymbol,                NoSymbol,                jot,                     NoSymbol                 ] };
    key <AC01> { [ c,                       C,                       NoSymbol,                Greek_chi,               NoSymbol,                NoSymbol,                U2102,                   NoSymbol                 ] };
    key <AC02> { [ t,                       T,                       NoSymbol,                Greek_tau,               NoSymbol,                NoSymbol,                partialderivative,       NoSymbol                 ] };
    key <AC03> { [ i,                       I,                       NoSymbol,                Greek_iota,              NoSymbol,                NoSymbol,                integral,                NoSymbol                 ] };
    key <AC04> { [ e,                       E,                       NoSymbol,                Greek_epsilon,           NoSymbol,                NoSymbol,                U2203,                   NoSymbol                 ] };
    key <AC05> { [ o,                       O,                       NoSymbol,                Greek_omicron,           NoSymbol,                NoSymbol,                elementof,               NoSymbol                 ] };
    key <AC06> { [ b,                       B,                       NoSymbol,                Greek_beta,              NoSymbol,                NoSymbol,                U21D0,                   NoSymbol                 ] };
    key <AC07> { [ n,                       N,                       NoSymbol,                Greek_nu,                NoSymbol,                NoSymbol,                U2115,                   NoSymbol                 ] };
    key <AC08> { [ r,                       R,                       NoSymbol,                Greek_rho,               NoSymbol,                NoSymbol,                U211D,                   NoSymbol                 ] };
    key <AC09> { [ s,                       S,                       NoSymbol,                Greek_sigma,             NoSymbol,                NoSymbol,                Greek_SIGMA,             NoSymbol                 ] };
    key <AC10> { [ g,                       G,                       NoSymbol,                Greek_gamma,             NoSymbol,                NoSymbol,                Greek_GAMMA,             NoSymbol                 ] };
    key <AC11> { [ q,                       Q,                       NoSymbol,                U03D5,                   NoSymbol,                NoSymbol,                U211A,                   NoSymbol                 ] };
    key <AB01> { [ f,                       F,                       NoSymbol,                Greek_phi,               NoSymbol,                NoSymbol,                Greek_PHI,               NoSymbol                 ] };
    key <AB02> { [ v,                       V,                       NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                radical,                 NoSymbol                 ] };
    key <AB03> { [ udiaeresis,              Udiaeresis,              NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                union,                   NoSymbol                 ] };
    key <AB04> { [ adiaeresis,              Adiaeresis,              NoSymbol,                Greek_eta,               NoSymbol,                NoSymbol,                U2135,                   NoSymbol                 ] };
    key <AB05> { [ odiaeresis,              Odiaeresis,              NoSymbol,                U03F5,                   NoSymbol,                NoSymbol,                intersection,            NoSymbol                 ] };
    key <AB06> { [ y,                       Y,                       NoSymbol,                Greek_upsilon,           NoSymbol,                NoSymbol,                nabla,                   NoSymbol                 ] };
    key <AB07> { [ z,                       Z,                       NoSymbol,                Greek_zeta,              NoSymbol,                NoSymbol,                U2124,                   NoSymbol                 ] };
    key <AB10> { [ k,                       K,                       NoSymbol,                Greek_kappa,             NoSymbol,                NoSymbol,                multiply,                NoSymbol                 ] };
};

partial alphanumeric_keys modifier_keys keypad_keys
xkb_symbols "bone" {

    include "de(bone_base)"

    name[Group1]= "German (Bone)";

    include "shift(both_capslock)"
    include "level3(caps_switch)"
    include "level3(bksl_switch)" 
    include "level5(ralt_switch_lock)"
};

partial alphanumeric_keys
xkb_symbols "bone_eszett_home_base" {
    include "de(bone_base)"

    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD11> { [ q,                       Q,                       NoSymbol,                U03D5,                   NoSymbol,                NoSymbol,                U211A,                   NoSymbol                 ] };
    key <AC11> { [ ssharp,                  U1E9E,                   NoSymbol,                Greek_finalsmallsigma,   NoSymbol,                NoSymbol,                jot,                     NoSymbol                 ] };
};

partial alphanumeric_keys modifier_keys keypad_keys
xkb_symbols "bone_eszett_home" {

    include "de(bone_eszett_home_base)"

    name[Group1]= "German (Bone, eszett home row)";

    include "shift(both_capslock)"
    include "level3(caps_switch)"
    include "level3(bksl_switch)" 
    include "level5(ralt_switch_lock)"
};

partial alphanumeric_keys
xkb_symbols "neo_qwertz_base" {
    include "de(neo_base)"

    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AB08> { [ comma,                   endash,                  NoSymbol,                U03F1,                   NoSymbol,                NoSymbol,                U21D2,                   NoSymbol                 ] };
    key <AB09> { [ period,                  enfilledcircbullet,      NoSymbol,                U03D1,                   NoSymbol,                NoSymbol,                U21A6,                   NoSymbol                 ] };
    key <AB10> { [ minus,                   emdash,                  NoSymbol,                U2011,                   NoSymbol,                NoSymbol,                hyphen,                  NoSymbol                 ] };

    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AE11> { [ ssharp,                  U1E9E,                   NoSymbol,                Greek_finalsmallsigma,   NoSymbol,                NoSymbol,                jot,                     NoSymbol                 ] };
    key <AD01> { [ q,                       Q,                       NoSymbol,                U03D5,                   NoSymbol,                NoSymbol,                U211A,                   NoSymbol                 ] };
    key <AD02> { [ w,                       W,                       NoSymbol,                Greek_omega,             NoSymbol,                NoSymbol,                Greek_OMEGA,             NoSymbol                 ] };
    key <AD03> { [ e,                       E,                       NoSymbol,                Greek_epsilon,           NoSymbol,                NoSymbol,                U2203,                   NoSymbol                 ] };
    key <AD04> { [ r,                       R,                       NoSymbol,                Greek_rho,               NoSymbol,                NoSymbol,                U211D,                   NoSymbol                 ] };
    key <AD05> { [ t,                       T,                       NoSymbol,                Greek_tau,               NoSymbol,                NoSymbol,                partialderivative,       NoSymbol                 ] };
    key <AD06> { [ z,                       Z,                       NoSymbol,                Greek_zeta,              NoSymbol,                NoSymbol,                U2124,                   NoSymbol                 ] };
    key <AD07> { [ u,                       U,                       NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                includedin,              NoSymbol                 ] };
    key <AD08> { [ i,                       I,                       NoSymbol,                Greek_iota,              NoSymbol,                NoSymbol,                integral,                NoSymbol                 ] };
    key <AD09> { [ o,                       O,                       NoSymbol,                Greek_omicron,           NoSymbol,                NoSymbol,                elementof,               NoSymbol                 ] };
    key <AD10> { [ p,                       P,                       NoSymbol,                Greek_pi,                NoSymbol,                NoSymbol,                Greek_PI,                NoSymbol                 ] };
    key <AD11> { [ udiaeresis,              Udiaeresis,              NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                union,                   NoSymbol                 ] };
    key <AC01> { [ a,                       A,                       NoSymbol,                Greek_alpha,             NoSymbol,                NoSymbol,                U2200,                   NoSymbol                 ] };
    key <AC02> { [ s,                       S,                       NoSymbol,                Greek_sigma,             NoSymbol,                NoSymbol,                Greek_SIGMA,             NoSymbol                 ] };
    key <AC03> { [ d,                       D,                       NoSymbol,                Greek_delta,             NoSymbol,                NoSymbol,                Greek_DELTA,             NoSymbol                 ] };
    key <AC04> { [ f,                       F,                       NoSymbol,                Greek_phi,               NoSymbol,                NoSymbol,                Greek_PHI,               NoSymbol                 ] };
    key <AC05> { [ g,                       G,                       NoSymbol,                Greek_gamma,             NoSymbol,                NoSymbol,                Greek_GAMMA,             NoSymbol                 ] };
    key <AC06> { [ h,                       H,                       NoSymbol,                Greek_psi,               NoSymbol,                NoSymbol,                Greek_PSI,               NoSymbol                 ] };
    key <AC07> { [ j,                       J,                       NoSymbol,                Greek_theta,             NoSymbol,                NoSymbol,                Greek_THETA,             NoSymbol                 ] };
    key <AC08> { [ k,                       K,                       NoSymbol,                Greek_kappa,             NoSymbol,                NoSymbol,                multiply,                NoSymbol                 ] };
    key <AC09> { [ l,                       L,                       NoSymbol,                Greek_lambda,            NoSymbol,                NoSymbol,                Greek_LAMBDA,            NoSymbol                 ] };
    key <AC10> { [ odiaeresis,              Odiaeresis,              NoSymbol,                U03F5,                   NoSymbol,                NoSymbol,                intersection,            NoSymbol                 ] };
    key <AC11> { [ adiaeresis,              Adiaeresis,              NoSymbol,                Greek_eta,               NoSymbol,                NoSymbol,                U2135,                   NoSymbol                 ] };
    key <AB01> { [ y,                       Y,                       NoSymbol,                Greek_upsilon,           NoSymbol,                NoSymbol,                nabla,                   NoSymbol                 ] };
    key <AB02> { [ x,                       X,                       NoSymbol,                Greek_xi,                NoSymbol,                NoSymbol,                Greek_XI,                NoSymbol                 ] };
    key <AB03> { [ c,                       C,                       NoSymbol,                Greek_chi,               NoSymbol,                NoSymbol,                U2102,                   NoSymbol                 ] };
    key <AB04> { [ v,                       V,                       NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                radical,                 NoSymbol                 ] };
    key <AB05> { [ b,                       B,                       NoSymbol,                Greek_beta,              NoSymbol,                NoSymbol,                U21D0,                   NoSymbol                 ] };
    key <AB06> { [ n,                       N,                       NoSymbol,                Greek_nu,                NoSymbol,                NoSymbol,                U2115,                   NoSymbol                 ] };
    key <AB07> { [ m,                       M,                       NoSymbol,                Greek_mu,                NoSymbol,                NoSymbol,                ifonlyif,                NoSymbol                 ] };
};

partial alphanumeric_keys modifier_keys keypad_keys
xkb_symbols "neo_qwertz" {

    include "de(neo_qwertz_base)"

    name[Group1]= "German (Neo qwertz)";

    include "shift(both_capslock)"
    include "level3(caps_switch)"
    include "level3(bksl_switch)" 
    include "level5(ralt_switch_lock)"
};

partial alphanumeric_keys
xkb_symbols "neo_qwerty_base" {
    include "de(neo_qwertz_base)"

    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD06> { [ y,                       Y,                       NoSymbol,                Greek_upsilon,           NoSymbol,                NoSymbol,                nabla,                   NoSymbol                 ] };
    key <AB01> { [ z,                       Z,                       NoSymbol,                Greek_zeta,              NoSymbol,                NoSymbol,                U2124,                   NoSymbol                 ] };
};

partial alphanumeric_keys modifier_keys keypad_keys
xkb_symbols "neo_qwerty" {

    include "de(neo_qwerty_base)"

    name[Group1]= "German (Neo qwerty)";

    include "shift(both_capslock)"
    include "level3(caps_switch)"
    include "level3(bksl_switch)" 
    include "level5(ralt_switch_lock)"
};

partial alphanumeric_keys
    xkb_symbols "lld" {
    include "de(basic)"
    name[Group1] = "German Ladin";

    key <AD10> { [ p, P, ediaeresis, Ediaeresis ] };

};
