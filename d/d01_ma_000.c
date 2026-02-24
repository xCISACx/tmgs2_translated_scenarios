section "d01_ma_000"{
    Background_Bg_GS2("BG_EX190_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (System_GlobalWork(18, 1) == 3){
        SoundEffect_PlayStream(3, "SS_T_00_038_M00");
        System_Wait(100);
        Voice_PlayVoice("NS_91_000_01300", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"Yes.\"");
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun, let's go to school\ntogether!");
        Voice_PlayVoice("NS_91_000_01400", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"I'm fine.\"");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So he won't go...)");
        System_GlobalWork(18, 0, 4);
        }
    else if ((System_GlobalWork(18, 1) == 5 || System_GlobalWork(18, 1) == 12)){
        SoundEffect_PlayStream(3, "SS_T_00_038_M00");
        System_Wait(100);
        Message_Who(0);
        Message_MsgDisp("主人公", "Komori-kun, let's go to school--");
        Voice_PlayVoice("NS_91_000_01500", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "\"I'm not going.\"");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Oh dear...)");
        }
    else if ((System_GlobalWork(18, 1) == 6 || System_GlobalWork(18, 1) == 13)){
        SoundEffect_PlayStream(3, "SS_T_00_038_M00");
        System_Wait(120);
        SoundEffect_PlayStream(3, "SS_DSE_036_000");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(25, "MA_??F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, Komori-kun!\nLet's go to school together!");
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("NS_91_000_01600", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "I'm not going to school....\nDon't come here anymore.");
        Character_Chara_GS2(25, "NON");
        SoundEffect_PlayStream(3, "SS_DSE_037_000");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Komori-kun...)");
        }
    else if ((System_GlobalWork(18, 1) == 7 || System_GlobalWork(18, 1) == 14)){
        SoundEffect_PlayStream(3, "SS_T_00_038_M00");
        System_Wait(120);
        SoundEffect_PlayStream(3, "SS_DSE_036_000");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(25, "MA_??F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, Komori-kun!\nLet's go to school together!");
        Voice_PlayVoice("NS_91_000_01700", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "... Not today.");
        Character_Chara_GS2(25, "NON");
        SoundEffect_PlayStream(3, "SS_DSE_037_000");
        Message_Who(0);
        Message_MsgDisp("主人公", "(... Not today?\nWas that one step forward?)");
        }
    else if ((System_GlobalWork(18, 1) == 8 || System_GlobalWork(18, 1) == 15)){
        SoundEffect_PlayStream(3, "SS_T_00_038_M00");
        System_Wait(120);
        SoundEffect_PlayStream(3, "SS_DSE_036_000");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(25, "MA_??F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, Komori-kun!\nLet's go to school together!");
        Voice_PlayVoice("NS_91_000_01800", #1, "");
        Message_Who(25);
        Message_MsgDisp("Komori", "... Have a good day.");
        Character_Chara_GS2(25, "NON");
        SoundEffect_PlayStream(3, "SS_DSE_037_000");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
