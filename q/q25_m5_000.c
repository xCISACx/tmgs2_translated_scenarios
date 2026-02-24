section "q25_m5_000"{
    System_Wait(30);
    SoundEffect_PlayStream(3, "SS_DSE_223_000");
    Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    if ((Parameter_GetCh1Param(5, 130) <= 2) && (Parameter_GetPl1Param(312) == 5)){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝.");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(5, "M5_08F", 0);
        Voice_PlayVoice("Q2605000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wah.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("Q2605000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "And my luck returns. Welcome, cutie.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Voice_PlayVoice("Q2605000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You're more than welcome.\nPlease treat me well, again▼");
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(That was a surprise...\nBut he said \"again\"...?)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝.");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(5, "M5_08F", 0);
        Voice_PlayVoice("Q2605000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q2605000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's you.\nIf I had known, I would've wanted to\nspend more time with you.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q2605000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Let's do that if it happens, again.\nLater▼");
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(That was a surprise...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(What was that...?\nWas that perhaps...?)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
