section "i25_m6_000"{
    Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. Welcome.");
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I2506000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So you are working part time at an\ninstrument store.\nI'm interested, so I came here to\nbrowse.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        SoundEffect_PlayStream(3, "SS_T_00_217_M00");
        Voice_PlayVoice("I2506000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'm a migrating bird... Kidding.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("I2506000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hehe. Did I surprise you?\nI came here to watch you work.");
        SoundEffect_StopStream(3, 40);
        }
    else {
        Voice_PlayVoice("", 6, "I2506000_F00300");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!\nAre you doing your best?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. Welcome.");
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I2506000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Eh, this guitar is nice.\nIt's small and looks easy to handle.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\n｛Amachi＊＊｝, that's a\nukulele...");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I2506000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I know that! ... Hmph.\nDoesn't it look good?\nAnyway, treat me to something when\nyou get paid!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
