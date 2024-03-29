#ifdef WORK_LAPTOP

#endif

#ifdef KINESIS
#  define SWAP_ENTER_DELETE
#  define KINESIS_LAYOUT
#endif

xkb_keymap {
xkb_keycodes "evdev+aliases(qwerty)" {
    minimum = 8;
    maximum = 255;
     <ESC> = 9;
    <AE01> = 10;
    <AE02> = 11;
    <AE03> = 12;
    <AE04> = 13;
    <AE05> = 14;
    <AE06> = 15;
    <AE07> = 16;
    <AE08> = 17;
    <AE09> = 18;
    <AE10> = 19;
    <AE11> = 20;
    <AE12> = 21;
    <BKSP> = 22;
     <TAB> = 23;
    <AD01> = 24;
    <AD02> = 25;
    <AD03> = 26;
    <AD04> = 27;
    <AD05> = 28;
    <AD06> = 29;
    <AD07> = 30;
    <AD08> = 31;
    <AD09> = 32;
    <AD10> = 33;
    <AD11> = 34;
    <AD12> = 35;
    <RTRN> = 36;
    <LCTL> = 37;
    <AC01> = 38;
    <AC02> = 39;
    <AC03> = 40;
    <AC04> = 41;
    <AC05> = 42;
    <AC06> = 43;
    <AC07> = 44;
    <AC08> = 45;
    <AC09> = 46;
    <AC10> = 47;
    <AC11> = 48;
    <TLDE> = 49;
    <LFSH> = 50;
    <BKSL> = 51;
    <AB01> = 52;
    <AB02> = 53;
    <AB03> = 54;
    <AB04> = 55;
    <AB05> = 56;
    <AB06> = 57;
    <AB07> = 58;
    <AB08> = 59;
    <AB09> = 60;
    <AB10> = 61;
    <RTSH> = 62;
    <KPMU> = 63;
    <LALT> = 64;
    <SPCE> = 65;
    <CAPS> = 66;
    <FK01> = 67;
    <FK02> = 68;
    <FK03> = 69;
    <FK04> = 70;
    <FK05> = 71;
    <FK06> = 72;
    <FK07> = 73;
    <FK08> = 74;
    <FK09> = 75;
    <FK10> = 76;
    <NMLK> = 77;
    <SCLK> = 78;
     <KP7> = 79;
     <KP8> = 80;
     <KP9> = 81;
    <KPSU> = 82;
     <KP4> = 83;
     <KP5> = 84;
     <KP6> = 85;
    <KPAD> = 86;
     <KP1> = 87;
     <KP2> = 88;
     <KP3> = 89;
     <KP0> = 90;
    <KPDL> = 91;
    <LVL3> = 92;
    <LSGT> = 94;
    <FK11> = 95;
    <FK12> = 96;
    <KPEN> = 104;
    <RCTL> = 105;
    <KPDV> = 106;
    <PRSC> = 107;
    <RALT> = 108;
    <HOME> = 110;
      <UP> = 111;
    <PGUP> = 112;
    <LEFT> = 113;
    <RGHT> = 114;
     <END> = 115;
    <DOWN> = 116;
    <PGDN> = 117;
     <INS> = 118;
    <DELE> = 119;
    <KPEQ> = 125;
    <PAUS> = 127;
    <I129> = 129;
    <LWIN> = 133;
    <RWIN> = 134;
    <COMP> = 135;
    <MDSW> = 203;
     <ALT> = 204;
    <META> = 205;
    <SUPR> = 206;
    <HYPR> = 207;
    indicator 1 = "Caps Lock";
    indicator 2 = "Num Lock";
    indicator 3 = "Scroll Lock";
    indicator 4 = "Compose";
    indicator 5 = "Kana";
    indicator 6 = "Sleep";
    indicator 7 = "Suspend";
    indicator 8 = "Mute";
    indicator 9 = "Misc";
    indicator 10 = "Mail";
    indicator 11 = "Charging";
    virtual indicator 12 = "Shift Lock";
    virtual indicator 13 = "Group 2";
    virtual indicator 14 = "Mouse Keys";
    alias <AC12> = <BKSL>;
    alias <MENU> = <COMP>;
    alias <HZTG> = <TLDE>;
    alias <LMTA> = <LWIN>;
    alias <RMTA> = <RWIN>;
    alias <ALGR> = <RALT>;
    alias <KPPT> = <I129>;
    alias <LatQ> = <AD01>;
    alias <LatW> = <AD02>;
    alias <LatE> = <AD03>;
    alias <LatR> = <AD04>;
    alias <LatT> = <AD05>;
    alias <LatY> = <AD06>;
    alias <LatU> = <AD07>;
    alias <LatI> = <AD08>;
    alias <LatO> = <AD09>;
    alias <LatP> = <AD10>;
    alias <LatA> = <AC01>;
    alias <LatS> = <AC02>;
    alias <LatD> = <AC03>;
    alias <LatF> = <AC04>;
    alias <LatG> = <AC05>;
    alias <LatH> = <AC06>;
    alias <LatJ> = <AC07>;
    alias <LatK> = <AC08>;
    alias <LatL> = <AC09>;
    alias <LatZ> = <AB01>;
    alias <LatX> = <AB02>;
    alias <LatC> = <AB03>;
    alias <LatV> = <AB04>;
    alias <LatB> = <AB05>;
    alias <LatN> = <AB06>;
    alias <LatM> = <AB07>;
};

xkb_types "complete" {

    virtual_modifiers NumLock,Alt,LevelThree,LAlt,RAlt,RControl,LControl,ScrollLock,LevelFive,AltGr,Meta,Super,Hyper;

    type "ONE_LEVEL" {
        modifiers= none;
        level_name[Level1]= "Any";
    };
    type "TWO_LEVEL" {
        modifiers= Shift;
        map[Shift]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
    };
    type "ALPHABETIC" {
        modifiers= Shift+Lock;
        map[Shift]= Level2;
        map[Lock]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "Caps";
    };
    type "KEYPAD" {
        modifiers= Shift+NumLock;
        map[Shift]= Level2;
        map[NumLock]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "Number";
    };
    type "SHIFT+ALT" {
        modifiers= Shift+Alt;
        map[Shift+Alt]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift+Alt";
    };
    type "PC_SUPER_LEVEL2" {
        modifiers= Mod4;
        map[Mod4]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "Super";
    };
    type "PC_CONTROL_LEVEL2" {
        modifiers= Control;
        map[Control]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "Control";
    };
    type "PC_LCONTROL_LEVEL2" {
        modifiers= LControl;
        map[LControl]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "LControl";
    };
    type "PC_RCONTROL_LEVEL2" {
        modifiers= RControl;
        map[RControl]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "RControl";
    };
    type "PC_ALT_LEVEL2" {
        modifiers= Alt;
        map[Alt]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "Alt";
    };
    type "PC_LALT_LEVEL2" {
        modifiers= LAlt;
        map[LAlt]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "LAlt";
    };
    type "PC_RALT_LEVEL2" {
        modifiers= RAlt;
        map[RAlt]= Level2;
        level_name[Level1]= "Base";
        level_name[Level2]= "RAlt";
    };
    type "CTRL+ALT" {
        modifiers= Shift+Control+Alt+LevelThree;
        map[Shift]= Level2;
        preserve[Shift]= Shift;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        preserve[Shift+LevelThree]= Shift;
        map[Control+Alt]= Level5;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
        level_name[Level5]= "Ctrl+Alt";
    };
    type "LOCAL_EIGHT_LEVEL" {
        modifiers= Shift+Lock+Control+LevelThree;
        map[Shift+Lock]= Level1;
        map[Shift]= Level2;
        map[Lock]= Level2;
        map[LevelThree]= Level3;
        map[Shift+Lock+LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[Lock+LevelThree]= Level4;
        map[Control]= Level5;
        map[Shift+Lock+Control]= Level5;
        map[Shift+Control]= Level6;
        map[Lock+Control]= Level6;
        map[Control+LevelThree]= Level7;
        map[Shift+Lock+Control+LevelThree]= Level7;
        map[Shift+Control+LevelThree]= Level8;
        map[Lock+Control+LevelThree]= Level8;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Level3";
        level_name[Level4]= "Shift Level3";
        level_name[Level5]= "Ctrl";
        level_name[Level6]= "Shift Ctrl";
        level_name[Level7]= "Level3 Ctrl";
        level_name[Level8]= "Shift Level3 Ctrl";
    };
    type "THREE_LEVEL" {
        modifiers= Shift+LevelThree;
        map[Shift]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level3;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Level3";
    };
    type "EIGHT_LEVEL" {
        modifiers= Shift+LevelThree+LevelFive;
        map[Shift]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[LevelFive]= Level5;
        map[Shift+LevelFive]= Level6;
        map[LevelThree+LevelFive]= Level7;
        map[Shift+LevelThree+LevelFive]= Level8;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
        level_name[Level5]= "X";
        level_name[Level6]= "X Shift";
        level_name[Level7]= "X Alt Base";
        level_name[Level8]= "X Shift Alt";
    };
    type "EIGHT_LEVEL_ALPHABETIC" {
        modifiers= Shift+Lock+LevelThree+LevelFive;
        map[Shift]= Level2;
        map[Lock]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[Lock+LevelThree]= Level4;
        map[Shift+Lock+LevelThree]= Level3;
        map[LevelFive]= Level5;
        map[Shift+LevelFive]= Level6;
        map[Lock+LevelFive]= Level6;
        map[LevelThree+LevelFive]= Level7;
        map[Shift+LevelThree+LevelFive]= Level8;
        map[Lock+LevelThree+LevelFive]= Level8;
        map[Shift+Lock+LevelThree+LevelFive]= Level7;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
        level_name[Level5]= "X";
        level_name[Level6]= "X Shift";
        level_name[Level7]= "X Alt Base";
        level_name[Level8]= "X Shift Alt";
    };
    type "EIGHT_LEVEL_LEVEL_FIVE_LOCK" {
        modifiers= Shift+Lock+NumLock+LevelThree+LevelFive;
        map[Shift]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[LevelFive]= Level5;
        map[Shift+LevelFive]= Level6;
        preserve[Shift+LevelFive]= Shift;
        map[LevelThree+LevelFive]= Level7;
        map[Shift+LevelThree+LevelFive]= Level8;
        map[NumLock]= Level5;
        map[Shift+NumLock]= Level6;
        preserve[Shift+NumLock]= Shift;
        map[NumLock+LevelThree]= Level7;
        map[Shift+NumLock+LevelThree]= Level8;
        map[Shift+NumLock+LevelFive]= Level2;
        map[NumLock+LevelThree+LevelFive]= Level3;
        map[Shift+NumLock+LevelThree+LevelFive]= Level4;
        map[Shift+Lock]= Level2;
        map[Lock+LevelThree]= Level3;
        map[Shift+Lock+LevelThree]= Level4;
        map[Lock+LevelFive]= Level5;
        map[Shift+Lock+LevelFive]= Level6;
        preserve[Shift+Lock+LevelFive]= Shift;
        map[Lock+LevelThree+LevelFive]= Level7;
        map[Shift+Lock+LevelThree+LevelFive]= Level8;
        map[Lock+NumLock]= Level5;
        map[Shift+Lock+NumLock]= Level6;
        preserve[Shift+Lock+NumLock]= Shift;
        map[Lock+NumLock+LevelThree]= Level7;
        map[Shift+Lock+NumLock+LevelThree]= Level8;
        map[Shift+Lock+NumLock+LevelFive]= Level2;
        map[Lock+NumLock+LevelThree+LevelFive]= Level3;
        map[Shift+Lock+NumLock+LevelThree+LevelFive]= Level4;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
        level_name[Level5]= "X";
        level_name[Level6]= "X Shift";
        level_name[Level7]= "X Alt Base";
        level_name[Level8]= "X Shift Alt";
    };
    type "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK" {
        modifiers= Shift+Lock+NumLock+LevelThree+LevelFive;
        map[Shift]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[LevelFive]= Level5;
        map[Shift+LevelFive]= Level6;
        preserve[Shift+LevelFive]= Shift;
        map[LevelThree+LevelFive]= Level7;
        map[Shift+LevelThree+LevelFive]= Level8;
        map[NumLock]= Level5;
        map[Shift+NumLock]= Level6;
        preserve[Shift+NumLock]= Shift;
        map[NumLock+LevelThree]= Level7;
        map[Shift+NumLock+LevelThree]= Level8;
        map[Shift+NumLock+LevelFive]= Level2;
        map[NumLock+LevelThree+LevelFive]= Level3;
        map[Shift+NumLock+LevelThree+LevelFive]= Level4;
        map[Lock]= Level2;
        map[Lock+LevelThree]= Level3;
        map[Shift+Lock+LevelThree]= Level4;
        map[Lock+LevelFive]= Level5;
        map[Shift+Lock+LevelFive]= Level6;
        map[Lock+LevelThree+LevelFive]= Level7;
        map[Shift+Lock+LevelThree+LevelFive]= Level8;
        map[Lock+NumLock]= Level5;
        map[Shift+Lock+NumLock]= Level6;
        map[Lock+NumLock+LevelThree]= Level7;
        map[Shift+Lock+NumLock+LevelThree]= Level8;
        map[Lock+NumLock+LevelFive]= Level2;
        map[Lock+NumLock+LevelThree+LevelFive]= Level4;
        map[Shift+Lock+NumLock+LevelThree+LevelFive]= Level3;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
        level_name[Level5]= "X";
        level_name[Level6]= "X Shift";
        level_name[Level7]= "X Alt Base";
        level_name[Level8]= "X Shift Alt";
    };
    type "EIGHT_LEVEL_SEMIALPHABETIC" {
        modifiers= Shift+Lock+LevelThree+LevelFive;
        map[Shift]= Level2;
        map[Lock]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[Lock+LevelThree]= Level3;
        preserve[Lock+LevelThree]= Lock;
        map[Shift+Lock+LevelThree]= Level4;
        preserve[Shift+Lock+LevelThree]= Lock;
        map[LevelFive]= Level5;
        map[Shift+LevelFive]= Level6;
        map[Lock+LevelFive]= Level6;
        preserve[Lock+LevelFive]= Lock;
        map[Shift+Lock+LevelFive]= Level6;
        preserve[Shift+Lock+LevelFive]= Lock;
        map[LevelThree+LevelFive]= Level7;
        map[Shift+LevelThree+LevelFive]= Level8;
        map[Lock+LevelThree+LevelFive]= Level7;
        preserve[Lock+LevelThree+LevelFive]= Lock;
        map[Shift+Lock+LevelThree+LevelFive]= Level8;
        preserve[Shift+Lock+LevelThree+LevelFive]= Lock;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
        level_name[Level5]= "X";
        level_name[Level6]= "X Shift";
        level_name[Level7]= "X Alt Base";
        level_name[Level8]= "X Shift Alt";
    };
    type "FOUR_LEVEL" {
        modifiers= Shift+LevelThree;
        map[Shift]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
    };
    type "FOUR_LEVEL_ALPHABETIC" {
        modifiers= Shift+Lock+LevelThree;
        map[Shift]= Level2;
        map[Lock]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[Lock+LevelThree]= Level4;
        map[Shift+Lock+LevelThree]= Level3;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
    };
    type "FOUR_LEVEL_SEMIALPHABETIC" {
        modifiers= Shift+Lock+LevelThree;
        map[Shift]= Level2;
        map[Lock]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[Lock+LevelThree]= Level3;
        preserve[Lock+LevelThree]= Lock;
        map[Shift+Lock+LevelThree]= Level4;
        preserve[Shift+Lock+LevelThree]= Lock;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
    };
    type "FOUR_LEVEL_MIXED_KEYPAD" {
        modifiers= Shift+NumLock+LevelThree;
        map[Shift+NumLock]= Level1;
        map[NumLock]= Level2;
        map[Shift]= Level2;
        map[LevelThree]= Level3;
        map[NumLock+LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[Shift+NumLock+LevelThree]= Level4;
        level_name[Level1]= "Base";
        level_name[Level2]= "Number";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
    };
    type "FOUR_LEVEL_X" {
        modifiers= Shift+Control+Alt+LevelThree;
        map[LevelThree]= Level2;
        map[Shift+LevelThree]= Level3;
        map[Control+Alt]= Level4;
        level_name[Level1]= "Base";
        level_name[Level2]= "Alt Base";
        level_name[Level3]= "Shift Alt";
        level_name[Level4]= "Ctrl+Alt";
    };
    type "SEPARATE_CAPS_AND_SHIFT_ALPHABETIC" {
        modifiers= Shift+Lock+LevelThree;
        map[Shift]= Level2;
        map[Lock]= Level4;
        preserve[Lock]= Lock;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[Lock+LevelThree]= Level3;
        preserve[Lock+LevelThree]= Lock;
        map[Shift+Lock+LevelThree]= Level3;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "AltGr Base";
        level_name[Level4]= "Shift AltGr";
    };
    type "FOUR_LEVEL_PLUS_LOCK" {
        modifiers= Shift+Lock+LevelThree;
        map[Shift]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[Lock]= Level5;
        map[Shift+Lock]= Level2;
        map[Lock+LevelThree]= Level3;
        map[Shift+Lock+LevelThree]= Level4;
        level_name[Level1]= "Base";
        level_name[Level2]= "Shift";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Shift Alt";
        level_name[Level5]= "Lock";
    };
    type "FOUR_LEVEL_KEYPAD" {
        modifiers= Shift+NumLock+LevelThree;
        map[Shift]= Level2;
        map[NumLock]= Level2;
        map[LevelThree]= Level3;
        map[Shift+LevelThree]= Level4;
        map[NumLock+LevelThree]= Level4;
        map[Shift+NumLock+LevelThree]= Level3;
        level_name[Level1]= "Base";
        level_name[Level2]= "Number";
        level_name[Level3]= "Alt Base";
        level_name[Level4]= "Alt Number";
    };
};

xkb_compatibility "complete" {

    virtual_modifiers NumLock,Alt,LevelThree,LAlt,RAlt,RControl,LControl,ScrollLock,LevelFive,AltGr,Meta,Super,Hyper;

    interpret.useModMapMods= AnyLevel;
    interpret.repeat= False;
    interpret.locking= False;
    interpret ISO_Level2_Latch+Exactly(Shift) {
        useModMapMods=level1;
        action= LatchMods(modifiers=Shift,clearLocks,latchToLock);
    };
    interpret Shift_Lock+AnyOf(Shift+Lock) {
        action= LockMods(modifiers=Shift);
    };
    interpret Num_Lock+AnyOf(all) {
        virtualModifier= NumLock;
        action= LockMods(modifiers=NumLock);
    };
    interpret ISO_Level3_Shift+AnyOf(all) {
        virtualModifier= LevelThree;
        useModMapMods=level1;
        action= SetMods(modifiers=LevelThree,clearLocks);
    };
    interpret ISO_Level3_Latch+AnyOf(all) {
        virtualModifier= LevelThree;
        useModMapMods=level1;
        action= LatchMods(modifiers=LevelThree,clearLocks,latchToLock);
    };
    interpret ISO_Level3_Lock+AnyOf(all) {
        virtualModifier= LevelThree;
        useModMapMods=level1;
        action= LockMods(modifiers=LevelThree);
    };
    interpret Alt_L+AnyOf(all) {
        virtualModifier= Alt;
        action= SetMods(modifiers=modMapMods,clearLocks);
    };
    interpret Alt_R+AnyOf(all) {
        virtualModifier= Alt;
        action= SetMods(modifiers=modMapMods,clearLocks);
    };
    interpret Meta_L+AnyOf(all) {
        virtualModifier= Meta;
        action= SetMods(modifiers=modMapMods,clearLocks);
    };
    interpret Meta_R+AnyOf(all) {
        virtualModifier= Meta;
        action= SetMods(modifiers=modMapMods,clearLocks);
    };
    interpret Super_L+AnyOf(all) {
        virtualModifier= Super;
        action= SetMods(modifiers=modMapMods,clearLocks);
    };
    interpret Super_R+AnyOf(all) {
        virtualModifier= Super;
        action= SetMods(modifiers=modMapMods,clearLocks);
    };
    interpret Hyper_L+AnyOf(all) {
        virtualModifier= Hyper;
        action= SetMods(modifiers=modMapMods,clearLocks);
    };
    interpret Hyper_R+AnyOf(all) {
        virtualModifier= Hyper;
        action= SetMods(modifiers=modMapMods,clearLocks);
    };
    interpret Scroll_Lock+AnyOf(all) {
        virtualModifier= ScrollLock;
        action= LockMods(modifiers=modMapMods);
    };
    interpret ISO_Level5_Shift+AnyOf(all) {
        virtualModifier= LevelFive;
        useModMapMods=level1;
        action= SetMods(modifiers=LevelFive,clearLocks);
    };
    interpret ISO_Level5_Latch+AnyOf(all) {
        virtualModifier= LevelFive;
        useModMapMods=level1;
        action= LatchMods(modifiers=LevelFive,clearLocks,latchToLock);
    };
    interpret ISO_Level5_Lock+AnyOf(all) {
        virtualModifier= LevelFive;
        useModMapMods=level1;
        action= LockMods(modifiers=LevelFive);
    };
    interpret Mode_switch+AnyOfOrNone(all) {
        virtualModifier= AltGr;
        useModMapMods=level1;
        action= SetGroup(group=+1);
    };
    interpret ISO_Level3_Shift+AnyOfOrNone(all) {
        action= SetMods(modifiers=LevelThree,clearLocks);
    };
    interpret ISO_Level3_Latch+AnyOfOrNone(all) {
        action= LatchMods(modifiers=LevelThree,clearLocks,latchToLock);
    };
    interpret ISO_Level3_Lock+AnyOfOrNone(all) {
        action= LockMods(modifiers=LevelThree);
    };
    interpret ISO_Group_Latch+AnyOfOrNone(all) {
        virtualModifier= AltGr;
        useModMapMods=level1;
        action= LatchGroup(group=2);
    };
    interpret ISO_Next_Group+AnyOfOrNone(all) {
        virtualModifier= AltGr;
        useModMapMods=level1;
        action= LockGroup(group=+1);
    };
    interpret ISO_Prev_Group+AnyOfOrNone(all) {
        virtualModifier= AltGr;
        useModMapMods=level1;
        action= LockGroup(group=-1);
    };
    interpret ISO_First_Group+AnyOfOrNone(all) {
        action= LockGroup(group=1);
    };
    interpret ISO_Last_Group+AnyOfOrNone(all) {
        action= LockGroup(group=2);
    };

    interpret Pointer_Left {
        repeat= True;
        action= MovePtr(x=-100,y=+0);
    };
    interpret Pointer_Left+AllOf(Control) {
        repeat= True;
        action= MovePtr(x=-10,y=+0);
    };

    interpret Pointer_Right {
        repeat= True;
        action= MovePtr(x=+100,y=+0);
    };
    interpret Pointer_Up {
        repeat= True;
        action= MovePtr(x=+0,y=-100);
    };
    interpret Pointer_Down {
        repeat= True;
        action= MovePtr(x=+0,y=+100);
    };

    interpret KP_1+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=-1,y=+1);
    };
    interpret KP_End+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=-1,y=+1);
    };
    interpret KP_2+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+0,y=+1);
    };
    interpret KP_Down+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+0,y=+1);
    };
    interpret KP_3+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+1,y=+1);
    };
    interpret KP_Next+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+1,y=+1);
    };
    interpret KP_4+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=-1,y=+0);
    };
    interpret KP_Left+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=-1,y=+0);
    };
    interpret KP_6+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+1,y=+0);
    };
    interpret KP_Right+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+1,y=+0);
    };
    interpret KP_7+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=-1,y=-1);
    };
    interpret KP_Home+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=-1,y=-1);
    };
    interpret KP_8+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+0,y=-1);
    };
    interpret KP_Up+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+0,y=-1);
    };
    interpret KP_9+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+1,y=-1);
    };
    interpret KP_Prior+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+1,y=-1);
    };
    interpret KP_5+AnyOfOrNone(all) {
        repeat= True;
        action= PtrBtn(button=default);
    };
    interpret KP_Begin+AnyOfOrNone(all) {
        repeat= True;
        action= PtrBtn(button=default);
    };
    interpret KP_F2+AnyOfOrNone(all) {
        repeat= True;
        action= SetPtrDflt(affect=button,button=1);
    };
    interpret KP_Divide+AnyOfOrNone(all) {
        repeat= True;
        action= SetPtrDflt(affect=button,button=1);
    };
    interpret KP_F3+AnyOfOrNone(all) {
        repeat= True;
        action= SetPtrDflt(affect=button,button=2);
    };
    interpret KP_Multiply+AnyOfOrNone(all) {
        repeat= True;
        action= SetPtrDflt(affect=button,button=2);
    };
    interpret KP_F4+AnyOfOrNone(all) {
        repeat= True;
        action= SetPtrDflt(affect=button,button=3);
    };
    interpret KP_Subtract+AnyOfOrNone(all) {
        repeat= True;
        action= SetPtrDflt(affect=button,button=3);
    };
    interpret KP_Separator+AnyOfOrNone(all) {
        repeat= True;
        action= PtrBtn(button=default,count=2);
    };
    interpret KP_Add+AnyOfOrNone(all) {
        repeat= True;
        action= PtrBtn(button=default,count=2);
    };
    interpret KP_0+AnyOfOrNone(all) {
        repeat= True;
        action= LockPtrBtn(button=default,affect=lock);
    };
    interpret KP_Insert+AnyOfOrNone(all) {
        repeat= True;
        action= LockPtrBtn(button=default,affect=lock);
    };
    interpret KP_Decimal+AnyOfOrNone(all) {
        repeat= True;
        action= LockPtrBtn(button=default,affect=unlock);
    };
    interpret KP_Delete+AnyOfOrNone(all) {
        repeat= True;
        action= LockPtrBtn(button=default,affect=unlock);
    };
    interpret F25+AnyOfOrNone(all) {
        repeat= True;
        action= SetPtrDflt(affect=button,button=1);
    };
    interpret F26+AnyOfOrNone(all) {
        repeat= True;
        action= SetPtrDflt(affect=button,button=2);
    };
    interpret F27+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=-1,y=-1);
    };
    interpret F29+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+1,y=-1);
    };
    interpret F31+AnyOfOrNone(all) {
        repeat= True;
        action= PtrBtn(button=default);
    };
    interpret F33+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=-1,y=+1);
    };
    interpret F35+AnyOfOrNone(all) {
        repeat= True;
        action= MovePtr(x=+1,y=+1);
    };
    interpret Pointer_Button_Dflt+AnyOfOrNone(all) {
        action= PtrBtn(button=default);
    };

    interpret Pointer_Button1+AnyOfOrNone(all) {
        action= PtrBtn(button=1);
    };
    interpret Pointer_Button2+AnyOfOrNone(all) {
        action= PtrBtn(button=2);
    };
    interpret Pointer_Button3+AnyOfOrNone(all) {
        action= PtrBtn(button=3);
    };
    interpret Pointer_Button4 {
        repeat= True;
        action= PtrBtn(button=4);
    };
    interpret Pointer_Button4+AnyOf(Shift) {
        repeat= True;
        action= PtrBtn(button=4,count=2);
    };
    interpret Pointer_Button5+AnyOfOrNone(all) {
        repeat= True;
        action= PtrBtn(button=5);
    };

    interpret Pointer_DblClick_Dflt+AnyOfOrNone(all) {
        action= PtrBtn(button=default,count=2);
    };
    interpret Pointer_DblClick1+AnyOfOrNone(all) {
        action= PtrBtn(button=1,count=2);
    };
    interpret Pointer_DblClick2+AnyOfOrNone(all) {
        action= PtrBtn(button=2,count=2);
    };
    interpret Pointer_DblClick3+AnyOfOrNone(all) {
        action= PtrBtn(button=3,count=2);
    };
    interpret Pointer_Drag_Dflt+AnyOfOrNone(all) {
        action= LockPtrBtn(button=default,affect=both);
    };
    interpret Pointer_Drag1+AnyOfOrNone(all) {
        action= LockPtrBtn(button=1,affect=both);
    };
    interpret Pointer_Drag2+AnyOfOrNone(all) {
        action= LockPtrBtn(button=2,affect=both);
    };
    interpret Pointer_Drag3+AnyOfOrNone(all) {
        action= LockPtrBtn(button=3,affect=both);
    };
    interpret Pointer_EnableKeys+AnyOfOrNone(all) {
        action= LockControls(controls=MouseKeys);
    };
    interpret Pointer_Accelerate+AnyOfOrNone(all) {
        action= LockControls(controls=MouseKeysAccel);
    };
    interpret Pointer_DfltBtnNext+AnyOfOrNone(all) {
        action= SetPtrDflt(affect=button,button=+1);
    };
    interpret Pointer_DfltBtnPrev+AnyOfOrNone(all) {
        action= SetPtrDflt(affect=button,button=-1);
    };
    interpret AccessX_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=AccessXKeys);
    };
    interpret AccessX_Feedback_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=AccessXFeedback);
    };
    interpret RepeatKeys_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=RepeatKeys);
    };
    interpret SlowKeys_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=SlowKeys);
    };
    interpret BounceKeys_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=BounceKeys);
    };
    interpret StickyKeys_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=StickyKeys);
    };
    interpret MouseKeys_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=MouseKeys);
    };
    interpret MouseKeys_Accel_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=MouseKeysAccel);
    };
    interpret Overlay1_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=Overlay1);
    };
    interpret Overlay2_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=Overlay2);
    };
    interpret AudibleBell_Enable+AnyOfOrNone(all) {
        action= LockControls(controls=AudibleBell);
    };
    interpret Terminate_Server+AnyOfOrNone(all) {
        action= Terminate();
    };
    interpret Alt_L+AnyOfOrNone(all) {
        action= SetMods(modifiers=Alt,clearLocks);
    };
    interpret Alt_R+AnyOfOrNone(all) {
        action= SetMods(modifiers=Alt,clearLocks);
    };
    interpret Meta_L+AnyOfOrNone(all) {
        action= SetMods(modifiers=Meta,clearLocks);
    };
    interpret Meta_R+AnyOfOrNone(all) {
        action= SetMods(modifiers=Meta,clearLocks);
    };
    interpret Super_L+AnyOfOrNone(all) {
        action= SetMods(modifiers=Super,clearLocks);
    };
    interpret Super_R+AnyOfOrNone(all) {
        action= SetMods(modifiers=Super,clearLocks);
    };
    interpret Hyper_L+AnyOfOrNone(all) {
        action= SetMods(modifiers=Hyper,clearLocks);
    };
    interpret Hyper_R+AnyOfOrNone(all) {
        action= SetMods(modifiers=Hyper,clearLocks);
    };
    interpret Shift_L+AnyOfOrNone(all) {
        action= SetMods(modifiers=Shift,clearLocks);
    };
    interpret XF86Switch_VT_1+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=1,!same);
    };
    interpret XF86Switch_VT_2+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=2,!same);
    };
    interpret XF86Switch_VT_3+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=3,!same);
    };
    interpret XF86Switch_VT_4+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=4,!same);
    };
    interpret XF86Switch_VT_5+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=5,!same);
    };
    interpret XF86Switch_VT_6+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=6,!same);
    };
    interpret XF86Switch_VT_7+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=7,!same);
    };
    interpret XF86Switch_VT_8+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=8,!same);
    };
    interpret XF86Switch_VT_9+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=9,!same);
    };
    interpret XF86Switch_VT_10+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=10,!same);
    };
    interpret XF86Switch_VT_11+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=11,!same);
    };
    interpret XF86Switch_VT_12+AnyOfOrNone(all) {
        repeat= True;
        action= SwitchScreen(screen=12,!same);
    };
    interpret XF86LogGrabInfo+AnyOfOrNone(all) {
        repeat= True;
        action= Private(type=0x86,data[0]=0x50,data[1]=0x72,data[2]=0x47,data[3]=0x72,data[4]=0x62,data[5]=0x73,data[6]=0x00);
    };
    interpret XF86LogWindowTree+AnyOfOrNone(all) {
        repeat= True;
        action= Private(type=0x86,data[0]=0x50,data[1]=0x72,data[2]=0x57,data[3]=0x69,data[4]=0x6e,data[5]=0x73,data[6]=0x00);
    };
    interpret XF86Next_VMode+AnyOfOrNone(all) {
        repeat= True;
        action= Private(type=0x86,data[0]=0x2b,data[1]=0x56,data[2]=0x4d,data[3]=0x6f,data[4]=0x64,data[5]=0x65,data[6]=0x00);
    };
    interpret XF86Prev_VMode+AnyOfOrNone(all) {
        repeat= True;
        action= Private(type=0x86,data[0]=0x2d,data[1]=0x56,data[2]=0x4d,data[3]=0x6f,data[4]=0x64,data[5]=0x65,data[6]=0x00);
    };
    interpret ISO_Level5_Shift+AnyOfOrNone(all) {
        action= SetMods(modifiers=LevelFive,clearLocks);
    };
    interpret ISO_Level5_Latch+AnyOfOrNone(all) {
        action= LatchMods(modifiers=LevelFive,clearLocks,latchToLock);
    };
    interpret ISO_Level5_Lock+AnyOfOrNone(all) {
        action= LockMods(modifiers=LevelFive);
    };
    interpret Caps_Lock+AnyOfOrNone(all) {
        action= LockMods(modifiers=Lock);
    };
    interpret Any+Exactly(Lock) {
        action= LockMods(modifiers=Lock);
    };
    interpret Any+AnyOf(all) {
        action= SetMods(modifiers=modMapMods,clearLocks);
    };

    // interpret Level3_and_Mouse {
        // virtualModifier= LevelThree;
        // useModMapMods=level1;
        // action= SetMods(modifiers=LevelThree,clearLocks) + SetControls(countrols=MouseKeys)
    // };

    group 2 = AltGr;
    group 3 = AltGr;
    group 4 = AltGr;
    indicator "Caps Lock" {
        !allowExplicit;
        whichModState= locked;
        modifiers= Lock;
    };
    indicator "Num Lock" {
        !allowExplicit;
        whichModState= locked;
        modifiers= NumLock;
    };
    indicator "Scroll Lock" {
        whichModState= locked;
        modifiers= ScrollLock;
    };
    indicator "Shift Lock" {
        !allowExplicit;
        whichModState= locked;
        modifiers= Shift;
    };
    indicator "Group 2" {
        !allowExplicit;
        groups= 0xfe;
    };
    indicator "Mouse Keys" {
        indicatorDrivesKeyboard;
        controls= mouseKeys;
    };
};

xkb_symbols "custom(dvorak-kmm)" {

    name[group1]="Dvorak/Kinesis/Mirrormap";

    key  <ESC> {         [          Escape ] };
    key <AE01> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [               1,          exclam,               0,         greater ]
    };
    key <AE02> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [               2,              at,               9,            less ]
    };
    key <AE03> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [               3,      numbersign,               8,        asterisk ]
    };
    key <AE04> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [               4,          dollar,               7,       ampersand ]
    };
    key <AE05> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [               5,         percent,               6,     asciicircum ]
    };
    key <AE06> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [               6,     asciicircum, dead_circumflex, dead_circumflex ]
    };
    key <AE07> {         [               7,       ampersand ] };
    key <AE08> {         [               8,        asterisk ] };
    key <AE09> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [               9,            less,      dead_grave,        NoSymbol ]
    };
    key <AE10> {         [               0,         greater ] };
#ifndef KINESIS_LAYOUT
    key <AE11> { [ bracketleft, braceleft ] };
    key <AE12> { [ bracketright, braceright ] };
#else
    key <AE11> { [ numbersign, asciitilde ] };
    key <AE12> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [ equal, plus, numbersign, asciitilde ]
    };
#endif
    key <BKSP> {
        type= "FOUR_LEVEL",
#ifndef SWAP_ENTER_DELETE
        symbols[Group1]= [ BackSpace, BackSpace, space, space ]
#else
        symbols[Group1]= [ space, space, BackSpace, BackSpace ]
#endif
    };
    key  <TAB> {         [             Tab,    ISO_Left_Tab ] };
    key <AD01> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [      apostrophe,        quotedbl,               l,               L ]
    };
    key <AD02> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [           comma,       parenleft,               r,               R ]
    };
    key <AD03> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [          period,      parenright,               c,               C ]
    };
    key <AD04> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [               p,               P,               g,               G ]
    };
    key <AD05> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [               y,               Y,               f,               F ]
    };
    key <AD06> {
        type= "FOUR_LEVEL_SEMIALPHABETIC",
        symbols[Group1]= [ f, F, Pointer_Button4, Pointer_Button4 ]
    };
    key <AD07> {
        type= "FOUR_LEVEL_SEMIALPHABETIC",
        symbols[Group1]= [ g, G, Pointer_Button2, Pointer_Button2 ]
    };
    key <AD08> {
        type= "FOUR_LEVEL_SEMIALPHABETIC",
        symbols[Group1]= [ c, C, Pointer_Button1, Pointer_Button1 ]
    };
    key <AD09> {
        type= "FOUR_LEVEL_SEMIALPHABETIC",
        symbols[Group1]= [ r, R, Pointer_Button3, Pointer_Button3 ]
    };
    key <AD10> {
        type= "ALPHABETIC",
        symbols[Group1]= [               l,               L ]
    };
#ifndef KINESIS_LAYOUT
    key <AD11> { [ slash, question ] };
    key <AD12> { [ equal, plus ] };
#else
    key <AD11> { [ bracketleft,  braceleft ] };
    key <AD12> { [ bracketright, braceright ] };
#endif
#ifndef SWAP_ENTER_DELETE
    key <RTRN> { [ Return, Return ] };
#else
    key <RTRN> { [ Delete, Delete ] };
#endif
    key <LCTL> { [ Control_L ] };
    key <AC01> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [ a, A, s, S ]
    };
    key <AC02> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [ o, O, n, N ]
    };
    key <AC03> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [ e, E, t, T ]
    };
    key <AC04> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [ u, U, h, H ]
    };
    key <AC05> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [               i,               I,               d,               D ]
    };
    key <AC06> {
        type= "FOUR_LEVEL_SEMIALPHABETIC",
        symbols[Group1]= [ d, D, Pointer_Button5, Pointer_Button5 ]
    };
    key <AC07> {
        type= "THREE_LEVEL",
        symbols[Group1]= [ h, H, Pointer_Left ]
    };
    key <AC08> {
        type= "FOUR_LEVEL_SEMIALPHABETIC",
        symbols[Group1]= [ t, T, Pointer_Down, Pointer_Down ]
    };
    key <AC09> {
        type= "FOUR_LEVEL_SEMIALPHABETIC",
        symbols[Group1]= [ n, N, Pointer_Up, Pointer_Up ]
    };
    key <AC10> {
        type= "FOUR_LEVEL_SEMIALPHABETIC",
        symbols[Group1]= [ s, S, Pointer_Right, Pointer_Right ]
    };
    key <AC11> { [ minus, underscore ] };
    key <TLDE> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [ grave, asciitilde, bracketright, braceright ]
    };
    key <LFSH> { [ Shift_L ] };
#ifndef KINESIS_LAYOUT
    key <BKSL> { [ backslash, bar ] };
#else
    key <BKSL> { [ slash, question ] };
#endif
    key <AB01> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [       semicolon,           colon,               z,               Z ]
    };
    key <AB02> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [               q,               Q,               v,               V ]
    };
    key <AB03> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [               j,               J,               w,               W ]
    };
    key <AB04> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [               k,               K,               m,               M ]
    };
    key <AB05> {
        type= "FOUR_LEVEL_ALPHABETIC",
        symbols[Group1]= [               x,               X,               b,               B ]
    };
    key <AB06> {
        type= "ALPHABETIC",
        symbols[Group1]= [               b,               B ]
    };
    key <AB07> {
        type= "ALPHABETIC",
        symbols[Group1]= [               m,               M ]
    };
    key <AB08> {
        type= "ALPHABETIC",
        symbols[Group1]= [               w,               W ]
    };
    key <AB09> {
        type= "ALPHABETIC",
        symbols[Group1]= [               v,               V ]
    };
    key <AB10> {
        type= "ALPHABETIC",
        symbols[Group1]= [               z,               Z ]
    };
    key <RTSH> {         [         Shift_R ] };
    key <KPMU> {
        type= "CTRL+ALT",
        symbols[Group1]= [     KP_Multiply,     KP_Multiply,     KP_Multiply,     KP_Multiply,   XF86ClearGrab ]
    };
    key <LALT> {         [           Alt_L,          Meta_L ] };
#ifndef SWAP_ENTER_DELETE
    key <SPCE> {         [ space, space ] };
#else
    key <SPCE> {         [ BackSpace, BackSpace ] };
#endif
    key <CAPS> {
        type= "ONE_LEVEL",
        symbols[Group1]= [ ISO_Level3_Shift ]
    };
    key <FK01> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F1,              F1,              F1,              F1, XF86Switch_VT_1 ]
    };
    key <FK02> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F2,              F2,              F2,              F2, XF86Switch_VT_2 ]
    };
    key <FK03> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F3,              F3,              F3,              F3, XF86Switch_VT_3 ]
    };
    key <FK04> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F4,              F4,              F4,              F4, XF86Switch_VT_4 ]
    };
    key <FK05> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F5,              F5,              F5,              F5, XF86Switch_VT_5 ]
    };
    key <FK06> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F6,              F6,              F6,              F6, XF86Switch_VT_6 ]
    };
    key <FK07> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F7,              F7,              F7,              F7, XF86Switch_VT_7 ]
    };
    key <FK08> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F8,              F8,              F8,              F8, XF86Switch_VT_8 ]
    };
    key <FK09> {
        type= "CTRL+ALT",
        symbols[Group1]= [              F9,              F9,              F9,              F9, XF86Switch_VT_9 ]
    };
    key <FK10> {
        type= "CTRL+ALT",
        symbols[Group1]= [             F10,             F10,             F10,             F10, XF86Switch_VT_10 ]
    };
    key <NMLK> {         [        Num_Lock ] };
    key <SCLK> {         [     Pointer_EnableKeys ] };
    key  <KP7> {         [         KP_Home,            KP_7 ] };
    key  <KP8> {         [           KP_Up,            KP_8 ] };
    key  <KP9> {         [        KP_Prior,            KP_9 ] };
    key <KPSU> {
        type= "CTRL+ALT",
        symbols[Group1]= [     KP_Subtract,     KP_Subtract,     KP_Subtract,     KP_Subtract,  XF86Prev_VMode ]
    };
    key  <KP4> {         [         KP_Left,            KP_4 ] };
    key  <KP5> {         [        KP_Begin,            KP_5 ] };
    key  <KP6> {         [        KP_Right,            KP_6 ] };
    key <KPAD> {
        type= "CTRL+ALT",
        symbols[Group1]= [          KP_Add,          KP_Add,          KP_Add,          KP_Add,  XF86Next_VMode ]
    };
    key  <KP1> {         [          KP_End,            KP_1 ] };
    key  <KP2> {         [         KP_Down,            KP_2 ] };
    key  <KP3> {         [         KP_Next,            KP_3 ] };
    key  <KP0> {         [       KP_Insert,            KP_0 ] };
    key <KPDL> {         [       KP_Delete,      KP_Decimal ] };
    key <LVL3> {         [ ISO_Level3_Shift ] };
    key <LSGT> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [       backslash,             bar,     bracketleft,       braceleft ]
    };
    key <FK11> {
        type= "CTRL+ALT",
        symbols[Group1]= [             F11,             F11,             F11,             F11, XF86Switch_VT_11 ]
    };
    key <FK12> {
        type= "CTRL+ALT",
        symbols[Group1]= [             F12,             F12,             F12,             F12, XF86Switch_VT_12 ]
    };
    key <KPEN> {         [        KP_Enter ] };
    key <RCTL> {         [       Control_R ] };
    key <KPDV> {
        type= "CTRL+ALT",
        symbols[Group1]= [       KP_Divide,       KP_Divide,       KP_Divide,       KP_Divide,      XF86Ungrab ]
    };
    key <PRSC> {
        type= "PC_ALT_LEVEL2",
        symbols[Group1]= [           Print,         Sys_Req ]
    };
    key <RALT> {
        type= "TWO_LEVEL",
        symbols[Group1]= [       Multi_key,          Meta_R ]
    };
    key <HOME> {         [            Home ] };
    key   <UP> {         [              Up ] };
    key <PGUP> {         [           Prior ] };
    key <LEFT> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [            Left,            Left,            Down,            Down ]
    };
    key <RGHT> {
        type= "FOUR_LEVEL",
        symbols[Group1]= [           Right,           Right,              Up,              Up ]
    };
    key  <END> {         [             End ] };
    key <DOWN> {         [            Down ] };
    key <PGDN> {         [            Next ] };
    key  <INS> {         [          Insert ] };
    key <DELE> {
        type= "FOUR_LEVEL",
#ifndef SWAP_ENTER_DELETE
        symbols[Group1]= [ Delete, Delete, Return, Return ]
#else
        symbols[Group1]= [ Return, Return, Delete, Delete ]
#endif
    };
    key <KPEQ> {         [        KP_Equal ] };
    key <PAUS> {
        type= "PC_CONTROL_LEVEL2",
        symbols[Group1]= [           Pause,           Break ]
    };
    key <I129> {         [      KP_Decimal,      KP_Decimal ] };
    key <LWIN> {         [         Super_L ] };
    key <RWIN> {         [         Super_R ] };
    key <COMP> {         [            Menu ] };
    key <MDSW> {         [     Mode_switch ] };
    key  <ALT> {         [        NoSymbol,           Alt_L ] };
    key <META> {         [        NoSymbol,          Meta_L ] };
    key <SUPR> {         [        NoSymbol,         Super_L ] };
    key <HYPR> {         [        NoSymbol,         Hyper_L ] };
    modifier_map Control { <LCTL> };
    modifier_map Shift { <LFSH> };
    modifier_map Shift { <RTSH> };
    modifier_map Mod1 { <LALT> };
    modifier_map Mod2 { <NMLK> };
    modifier_map Mod5 { <LVL3> };
    modifier_map Control { <RCTL> };
    modifier_map Mod1 { <RALT> };
    modifier_map Mod4 { <LWIN> };
    modifier_map Mod4 { <RWIN> };
    modifier_map Mod5 { <MDSW> };
    modifier_map Mod1 { <META> };
    modifier_map Mod4 { <SUPR> };
    modifier_map Mod4 { <HYPR> };
};

xkb_geometry "pc(pc105)" {

    width=       470;
    height=      180;

    alias <AC00> = <CAPS>;
    alias <AA00> = <LCTL>;

    baseColor=   "white";
    labelColor=  "black";
    xfont=       "-*-helvetica-medium-r-normal--*-120-*-*-*-*-iso8859-1";
    description= "Generic 105";

    shape "NORM" {
        corner= 1,
        { [  18,  18 ] },
        { [   2,   1 ], [  16,  16 ] }
    };
    shape "BKSP" {
        corner= 1,
        { [  38,  18 ] },
        { [   2,   1 ], [  36,  16 ] }
    };
    shape "TABK" {
        corner= 1,
        { [  28,  18 ] },
        { [   2,   1 ], [  26,  16 ] }
    };
    shape "BKSL" {
        corner= 1,
        { [  28,  18 ] },
        { [   2,   1 ], [  26,  16 ] }
    };
    shape "RTRN" {
        corner= 1,
        { [   0,   0 ], [  28,   0 ], [  28,  37 ], [   5,  37 ],
          [   5,  18 ], [   0,  18 ] },
        { [   2,   1 ], [  26,   1 ], [  26,  35 ], [   7,  35 ],
          [   7,  16 ], [   2,  16 ] },
        approx= { [   5,   0 ], [  28,  37 ] }
    };
    shape "CAPS" {
        corner= 1,
        { [  33,  18 ] },
        { [   2,   1 ], [  31,  16 ] }
    };
    shape "LFSH" {
        corner= 1,
        { [  25,  18 ] },
        { [   2,   1 ], [  23,  16 ] }
    };
    shape "RTSH" {
        corner= 1,
        { [  50,  18 ] },
        { [   2,   1 ], [  48,  16 ] }
    };
    shape "MODK" {
        corner= 1,
        { [  27,  18 ] },
        { [   2,   1 ], [  25,  16 ] }
    };
    shape "SMOD" {
        corner= 1,
        { [  23,  18 ] },
        { [   2,   1 ], [  21,  16 ] }
    };
    shape "SPCE" {
        corner= 1,
        { [ 113,  18 ] },
        { [   2,   1 ], [ 111,  16 ] }
    };
    shape "KP0" {
        corner= 1,
        { [  37,  18 ] },
        { [   2,   1 ], [  35,  16 ] }
    };
    shape "KPAD" {
        corner= 1,
        { [  18,  37 ] },
        { [   2,   1 ], [  16,  35 ] }
    };
    shape "LEDS" { { [  75,  20 ] } };
    shape "LED" { { [   5,   1 ] } };
    section "Function" {
        key.color= "grey20";
        priority=  7;
        top=       22;
        left=      19;
        width=     351;
        height=    19;
        row {
            top=  1;
            left= 1;
            keys {
                {  <ESC>, "NORM",   1 },
                { <FK01>, "NORM",  20, color="white" },
                { <FK02>, "NORM",   1, color="white" },
                { <FK03>, "NORM",   1, color="white" },
                { <FK04>, "NORM",   1, color="white" },
                { <FK05>, "NORM",  11, color="white" },
                { <FK06>, "NORM",   1, color="white" },
                { <FK07>, "NORM",   1, color="white" },
                { <FK08>, "NORM",   1, color="white" },
                { <FK09>, "NORM",  11, color="white" },
                { <FK10>, "NORM",   1, color="white" },
                { <FK11>, "NORM",   1, color="white" },
                { <FK12>, "NORM",   1, color="white" },
                { <PRSC>, "NORM",   8, color="white" },
                { <SCLK>, "NORM",   1, color="white" },
                { <PAUS>, "NORM",   1, color="white" }
            };
        };
    }; // End of "Function" section

    section "Alpha" {
        key.color= "white";
        priority=  8;
        top=       61;
        left=      19;
        width=     287;
        height=    95;
        row {
            top=  1;
            left= 1;
            keys {
                { <TLDE>, "NORM",   1 }, { <AE01>, "NORM",   1 },
                { <AE02>, "NORM",   1 }, { <AE03>, "NORM",   1 },
                { <AE04>, "NORM",   1 }, { <AE05>, "NORM",   1 },
                { <AE06>, "NORM",   1 }, { <AE07>, "NORM",   1 },
                { <AE08>, "NORM",   1 }, { <AE09>, "NORM",   1 },
                { <AE10>, "NORM",   1 }, { <AE11>, "NORM",   1 },
                { <AE12>, "NORM",   1 },
                { <BKSP>, "BKSP",   1, color="grey20" }
            };
        };
        row {
            top=  20;
            left= 1;
            keys {
                {  <TAB>, "TABK",   1, color="grey20" },
                { <AD01>, "NORM",   1 }, { <AD02>, "NORM",   1 },
                { <AD03>, "NORM",   1 }, { <AD04>, "NORM",   1 },
                { <AD05>, "NORM",   1 }, { <AD06>, "NORM",   1 },
                { <AD07>, "NORM",   1 }, { <AD08>, "NORM",   1 },
                { <AD09>, "NORM",   1 }, { <AD10>, "NORM",   1 },
                { <AD11>, "NORM",   1 }, { <AD12>, "NORM",   1 },
                { <RTRN>, "RTRN",   1, color="grey20" }
            };
        };
        row {
            top=  39;
            left= 1;
            keys {
                { <CAPS>, "CAPS",   1, color="grey20" },
                { <AC01>, "NORM",   1 }, { <AC02>, "NORM",   1 },
                { <AC03>, "NORM",   1 }, { <AC04>, "NORM",   1 },
                { <AC05>, "NORM",   1 }, { <AC06>, "NORM",   1 },
                { <AC07>, "NORM",   1 }, { <AC08>, "NORM",   1 },
                { <AC09>, "NORM",   1 }, { <AC10>, "NORM",   1 },
                { <AC11>, "NORM",   1 }, { <BKSL>, "NORM",   1 }
            };
        };
        row {
            top=  58;
            left= 1;
            keys {
                { <LFSH>, "LFSH",   1, color="grey20" },
                { <LSGT>, "NORM",   1 }, { <AB01>, "NORM",   1 },
                { <AB02>, "NORM",   1 }, { <AB03>, "NORM",   1 },
                { <AB04>, "NORM",   1 }, { <AB05>, "NORM",   1 },
                { <AB06>, "NORM",   1 }, { <AB07>, "NORM",   1 },
                { <AB08>, "NORM",   1 }, { <AB09>, "NORM",   1 },
                { <AB10>, "NORM",   1 },
                { <RTSH>, "RTSH",   1, color="grey20" }
            };
        };
        row {
            top=  77;
            left= 1;
            keys {
                { <LCTL>, "MODK",   1, color="grey20" },
                { <LWIN>, "SMOD",   1, color="grey20" },
                { <LALT>, "SMOD",   1, color="grey20" },
                { <SPCE>, "SPCE",   1 },
                { <RALT>, "SMOD",   1, color="grey20" },
                { <RWIN>, "SMOD",   1, color="grey20" },
                { <MENU>, "SMOD",   1, color="grey20" },
                { <RCTL>, "SMOD",   1, color="grey20" }
            };
        };
    }; // End of "Alpha" section

    section "Editing" {
        key.color= "grey20";
        priority=  9;
        top=       61;
        left=      312;
        width=     58;
        height=    95;
        row {
            top=  1;
            left= 1;
            keys {
                {  <INS>, "NORM",   1 }, { <HOME>, "NORM",   1 },
                { <PGUP>, "NORM",   1 }
            };
        };
        row {
            top=  20;
            left= 1;
            keys {
                { <DELE>, "NORM",   1 }, {  <END>, "NORM",   1 },
                { <PGDN>, "NORM",   1 }
            };
        };
        row {
            top=  58;
            left= 20;
            keys {
                {   <UP>, "NORM",   1 }
            };
        };
        row {
            top=  77;
            left= 1;
            keys {
                { <LEFT>, "NORM",   1 }, { <DOWN>, "NORM",   1 },
                { <RGHT>, "NORM",   1 }
            };
        };
    }; // End of "Editing" section

    section "Keypad" {
        key.color= "grey20";
        priority=  10;
        top=       61;
        left=      376;
        width=     77;
        height=    95;
        row {
            top=  1;
            left= 1;
            keys {
                { <NMLK>, "NORM",   1 }, { <KPDV>, "NORM",   1 },
                { <KPMU>, "NORM",   1 }, { <KPSU>, "NORM",   1 }
            };
        };
        row {
            top=  20;
            left= 1;
            keys {
                {  <KP7>, "NORM",   1, color="white" },
                {  <KP8>, "NORM",   1, color="white" },
                {  <KP9>, "NORM",   1, color="white" },
                { <KPAD>, "KPAD",   1 }
            };
        };
        row {
            top=  39;
            left= 1;
            keys {
                {  <KP4>, "NORM",   1, color="white" },
                {  <KP5>, "NORM",   1, color="white" },
                {  <KP6>, "NORM",   1, color="white" }
            };
        };
        row {
            top=  58;
            left= 1;
            keys {
                {  <KP1>, "NORM",   1, color="white" },
                {  <KP2>, "NORM",   1, color="white" },
                {  <KP3>, "NORM",   1, color="white" },
                { <KPEN>, "KPAD",   1 }
            };
        };
        row {
            top=  77;
            left= 1;
            keys {
                {  <KP0>, "KP0",   1, color="white" },
                { <KPDL>, "NORM",   1, color="white" }
            };
        };
    }; // End of "Keypad" section

    solid "LedPanel" {
        top=      22;
        left=     377;
        priority= 0;
        color= "grey10";
        shape= "LEDS";
    };
    indicator "Num Lock" {
        top=      37;
        left=     382;
        priority= 1;
        onColor= "green";
        offColor= "green30";
        shape= "LED";
    };
    indicator "Caps Lock" {
        top=      37;
        left=     407;
        priority= 2;
        onColor= "green";
        offColor= "green30";
        shape= "LED";
    };
    indicator "Scroll Lock" {
        top=      37;
        left=     433;
        priority= 3;
        onColor= "green";
        offColor= "green30";
        shape= "LED";
    };
    text "NumLockLabel" {
        top=      25;
        left=     378;
        priority= 4;
        width=  19.8;
        height=  10;
        XFont= "-*-helvetica-medium-r-normal--*-120-*-*-*-*-iso8859-1";
        text=  "Num\nLock";
    };
    text "CapsLockLabel" {
        top=      25;
        left=     403;
        priority= 5;
        width=  26.4;
        height=  10;
        XFont= "-*-helvetica-medium-r-normal--*-120-*-*-*-*-iso8859-1";
        text=  "Caps\nLock";
    };
    text "ScrollLockLabel" {
        top=      25;
        left=     428;
        priority= 6;
        width=  39.6;
        height=  10;
        XFont= "-*-helvetica-medium-r-normal--*-120-*-*-*-*-iso8859-1";
        text=  "Scroll\nLock";
    };
};

};
